/*
	Author: mp5gosu

	Description:
	Drop Cargo from position and optionally create Smoke or IR Strobe (daytime-dependent)

	Parameter(s):
		0: VEHICLE - Parachute type and drop height depends on side of VEHICLE
		1: NUMBER - Target that will be dropped
		2: STRING - Smoke Color (Must be SmokeShell object)
		3: NUMBER - Min height at which parachute will be deployed
*/
private ["_veh","_tgt","_markerType","_dropHeight"];
_veh = [_this, 0, objNull,[objNull]] call bis_fnc_param;
_tgt = [_this, 1, objNull,[objNull]] call bis_fnc_param;
_dropHeight = [_this, 2, 75,[0]] call bis_fnc_param;
_markerType = _veh getVariable["ucsv_markerType", nil];

if ((daytime < 4.35) || (daytime > 19.73)) then {_markerType = "NVG_TargetC";};
if((getPos _veh select 2 >= _dropHeight)) then
{
	sleep 2;
	if((!(isNil {_markerType})) && {(!(_markerType == "NONE"))}) then
	{
		if(!(typeName _markerType == "STRING")) then {_markerType = "SmokeShellGreen";};
		if(!(_markerType isKindOf "SmokeShell")) then {_markerType = "SmokeShellGreen";};
		private "_marker";
		_marker = createVehicle[_markerType, [0,0,0],[],0,"NONE"];
		_marker setPos (_tgt modelToWorld[0,0,0]);
		_marker attachTo [_tgt,[0,0,0]];
	};
	private ["_para","_paraType"];
	_paraType = ["B_Parachute_02_F", "O_Parachute_02_F", "I_Parachute_02_F"] select ([WEST, EAST, RESISTANCE] find side group _veh);
	_para = createVehicle [_paraType, [0,0,0],[], 0, ""];
	if(local _para) then {
	[_para, _tgt] call J4P_fnc_setVelocityAndDir;
	} else
	{
		[[_para,_tgt],"J4P_fnc_setVelocityAndDir", _tgt] call BIS_fnc_MP;
	};
	_para setPos (_tgt modelToWorld[0,0,0]);
	_tgt attachTo [_para,[0,0,0]];
	WaitUntil {sleep 0.05; ((((getPos _tgt) select 2) < 1.0) || {isNull _para} || {((getPosASLW _tgt) select 2 < 1.5)})};
	detach _tgt;
	_para = objNull;
};