// function called after flashbang goning of, handling the finding of units
// Version 0.1
// 2020.10.31
// Called on every flashbang throw

//our flashbang position
_fbPos = _this;

// retrive a list of all units in range of flashbang
_list = ASLToAGL _fbPos nearEntities ["Man", 50.0];

// and call the corresponding effect handler for each
{
	if (isPlayer _x) then {
		_fbPos call Aegis_fnc_flashbangPlayerEffect;
	} else {
		//TODO: call effect on ai units
	};
} forEach _list;