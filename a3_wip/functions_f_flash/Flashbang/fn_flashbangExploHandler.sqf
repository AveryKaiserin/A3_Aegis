// EventHandler called uppon flashbang throw, tracks flashbang position
// Version 0.1
// 2020.10.31
// Called on every flashbang throw
// TODO: maybe try to find cleaner way of attaing last flashbang position

params ["_unit", "_weapon", "_muzzle", "_mode", "_ammo", "_magazine", "_projectile", "_gunner"];

// delay to be closer to explosion
sleep 1.9;

// getting intal pos and setting up
_flashPos = getPosASL _projectile;
_flashValid = true;

// tight loop checking for current position being valid: valid => safe it, invalid => end loop and keep last valid
while {_flashValid} do {
	sleep 0.01;
	_newFlashPos = getPosASL _projectile;
	if (_newFlashPos#0 > 0.0) then {
		_flashPos = _newFlashPos;
	} else {
		_flashValid = false;
	};
};

// calling the unit finder with the last position
_flashPos call Aegis_fnc_flashbangUnitFinder;