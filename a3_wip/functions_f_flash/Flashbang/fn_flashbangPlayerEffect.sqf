// function called for every player in range of flashbang
// Version 0.1
// 2020.11.01
// Called for player in range of flashbang

// getting an full postion variable for flashbang
_fbPos = _this; // flashbang asl pos

// getting other data needed for calculations (shared)
_plPos = eyePos player;
_distance = _fbPos distance _plPos;
_blockingObj = lineIntersectsWith [_fbPos, _plPos, player, objNull, true];
_terrain = terrainIntersectASL [_fbPos, _plPos];
// data needed for visual calculations only
_plView = eyeDirection player;
_plToFbVector = _plPos vectorFromTo _fbPos;
// as final effect will be different for visual and sound, we now seperate them
_distanceSound = _distance;
_distanceVisual = _distance;

// now we calculate the sound parameters to pass
// tarrain in the way? slight reduction of sound effect
if (_terrain) then {_distanceSound = _distanceSound - Aegis_fnc_soundBlockFactor2};
{ // for every other blocking object we calc it this way
	// TODO: make it different for closed and unclosed objects (ie bulding vs rock/car)
	_distanceSound = _distanceSound - Aegis_fnc_soundBlockFactor;
}forEach _blockingObj;
// now we pass the sound parms
systemChat str(_distanceSound);
if (_distanceSound < Aegis_fnc_soundRangeFull) then { // in range for full effect?
	[0.05,5.0,10.0] spawn Aegis_fnc_flashbangPlayerSound;
	systemChat "sound full effect";
} else {
	_dropOffPercent = (_distanceSound - Aegis_fnc_soundRangeFull) / (Aegis_fnc_soundRangeMax - Aegis_fnc_soundRangeFull);
	if (_dropOffPercent > 0) then {
		[0.05 / _dropOffPercent,5.0 * _dropOffPercent,10.0] spawn Aegis_fnc_flashbangPlayerSound;
	};
	systemChat "sound dropped of";
	systemChat str(_dropOffPercent);
};




