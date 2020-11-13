/*
	Author: mp5gosu

	Description:
	Detach Cargo and determine options for Paradrop

	Parameter(s):
		0: VEHICLE - Vehicle that carries the cargo
*/
private ["_veh","_tgt"];
_veh = [_this, 0, objNull,[objNull]] call bis_fnc_param;
_tgt = _veh getVariable["ucsv_cargo", objNull];

if(!(isNull(_veh getVariable "ucsv_hook"))) then
{
	deletevehicle (_veh getvariable ["ucsv_hook", nil]);
};
detach _tgt;
if(local _tgt) then {
	[_tgt, _veh] call J4P_fnc_setVelocityAndDir;
} else
{
	[[_tgt,_veh],"J4P_fnc_setVelocityAndDir", _tgt] call BIS_fnc_MP;
};
_veh setVariable["ucsv_cargo", objNull, true];
_veh setVariable["ucsv_hook", objNull, true];
_tgt setVariable["ucsv_isAttached", nil, true];
[_veh] call J4P_fnc_removeAction;

_veh setMass[_veh getVariable "ucsv_mass", 0.5];
_veh setCenterOfMass[_veh getVariable "ucsv_centerOfMass", 0.5];

playSound3D ["j4p_ucsv\data\sound\detach.wss", _veh, false, getPos _veh, 1, 1, 30];

if(!(isNil "ucsv_parachuteEnabled")) then
{
	[_veh, _tgt, (_veh getVariable["ucsv_parachuteDeployHeight", 75])] spawn J4P_fnc_paraDrop;
};
_tgt = objNull;