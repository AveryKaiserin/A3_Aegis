/*
	Author: mp5gosu

	Description:
	Main loop for checking and handling lifting.

	Parameter(s):
		0: VEHICLE
		1: NUMBER - Search Radius in which to look for targets
		2: NUMBER - Maximum height at which the vehicle is able to lift the target
		3: NUMBER - Lifting speed limit in km/h
		4: NUMBER - maximum distance at which lifting is enabled (2D, X/Y+1m)
		5: NUMBER - Damage limit at which the cargo will automatically be detached
*/
private ["_veh","_tgt","_action","_whitelist","_blacklist"];

_veh = [_this, 0, objNull,[objNull]] call bis_fnc_param;
_searchRadius = [_this, 1, 10,[0]] call bis_fnc_param;
_hookHeight = [_this, 2, 8,[0]] call bis_fnc_param;
_speedLimit = [_this, 3, 4,[0]] call bis_fnc_param;
_hookRadius = [_this, 4, 4,[0]] call bis_fnc_param;
_damageLimit = [_this, 5, 0.9,[0]] call bis_fnc_param;
_whitelist = _veh getVariable "ucsv_whitelist";
_blacklist = _veh getVariable "ucsv_blacklist";
_tgt = objNull;
_action = nil;

while {alive _veh} do
{
	if (uavControl _veh select 0 == player) then	// Is a player controlling the vehicle?
	{
		if ((isNil {_veh getVariable["ucsv_action",nil]})
		&& (!isNull(_veh getVariable["ucsv_cargo", ObjNull]))
		) then
		{
			[_veh, (format[localize "STR_J4P_release", getText(configFile >> "CfgVehicles" >> (typeof (_veh getVariable "ucsv_cargo")) >> "displayName")]), "j4p_ucsv\data\scripts\lifting\fn_detachCargo.sqf", _veh, false] call J4P_fnc_addAction;
		};
		if((!isNil {_veh getVariable["ucsv_action",nil]})
		&& (isNull(_veh getVariable["ucsv_cargo", ObjNull]))
		) then
		{
			[_veh] call J4P_fnc_removeAction;
		};
		if((uavControl _veh select 1 != "")	// Is player pilot or gunner?
		&& {isEngineOn _veh}				// Läuft die Karre?
		&& {(((sqrt((velocity _veh select 0)^2 + (velocity _veh select 1)^2))*3.6) <= _speedLimit)}	// Vehicle within speed limit?
		&& {(count (nearestObjects [_veh, _whitelist, _searchRadius]) > 0)}	// Vehicles from whitelist in reach?
		) then
		{
			_tgt = nearestObjects [_veh, _whitelist, _searchRadius] select 0;						// Get first valid target
			if (!isNull _tgt) then {																// Target still valid? (WaitUntil = slower than while, though way less cycles)
				if ((abs(_veh worldToModel (getPos _tgt) select 0) <= _hookRadius)					// distance x (sagittal) <= allowed hookradius
				&& (abs(_veh worldToModel (getPos _tgt) select 1) <= (_hookRadius + 1))				// distance y (transversal) <= allowed hookradius + 1m
				&& (abs(((getPos _veh select 2) - (getPos _tgt select 2))) <= _hookHeight)) then	// Within allowed height to hook?
				{
					if((isNil{_tgt getVariable["ucsv_isAttached", nil]})	// Target already lifted by another vehicle?
					&& (isNull(_veh getVariable["ucsv_cargo", ObjNull]))	// Vehicle already has cargo?
					&& (isNil{_tgt getVariable["ucsv_cannotLift", nil]})	// Target disallowed for lifting?
					&& (!(typeOf _tgt in _blacklist))						// Target in blacklist?
					) then
					{
						if((isNil{_action}) && isNil{_veh getVariable["ucsv_action", nil]}) then
						{
							if(((count (crew _tgt) >= 0) && (ucsv_allowCrew)) || ((count (crew _tgt) == 0) && (!ucsv_allowCrew))) then
							{
								_action = _veh addAction[format[localize "STR_J4P_hook", getText(configFile >> "CfgVehicles" >> (typeof _tgt) >> "displayName")], "j4p_ucsv\data\scripts\lifting\attachCargo.sqf", [_veh, _tgt], 10, true, true, "", "driver _target == _this"];
							};
						};
					};
				} else
				{
					if(!(isNil{_action})) then
					{
						_veh removeAction _action;
						_action = nil;
					};
					_tgt = objNull;
				};
			};
		} else
		{
			if(!(isNil{_action})) then
			{
				_veh removeAction _action;
				_action = nil;
			};
			_tgt = objNull;
		};
	};
	if ((getDammage _veh >= _damageLimit) && (!(isNull(_veh getVariable "ucsv_cargo"))))  then
	{
		[_veh] call J4P_fnc_detachCargo;
	};
	sleep 0.01;
};

if (!(isNull(_veh getVariable "ucsv_cargo"))) then
{
	[_veh] call J4P_fnc_detachCargo;
};
_tgt = objNull;