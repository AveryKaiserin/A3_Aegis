// function called after flashbang goning of, handling the finding of units
// Version 0.2
// 2020.11.01
// Called on every flashbang throw

//our flashbang position
_fbPos = _this;

// getting the max range were any effect would still be present
_maxRange = [Aegis_fnc_soundRangeMax, Aegis_fnc_visualRangeMax] select (Aegis_fnc_soundRangeMax < Aegis_fnc_visualRangeMax);

// retrive a list of all units in range of flashbang
_list = ASLToAGL _fbPos nearEntities ["Man", _maxRange];

// and call the corresponding effect handler for each
{
	if (isPlayer _x) then {
		// excecute effect script on player client
		_fbPos remoteExec ["Aegis_fnc_flashbangPlayerEffect", _x];
	} else {
		//TODO: call effect on ai units
	};
} forEach _list;