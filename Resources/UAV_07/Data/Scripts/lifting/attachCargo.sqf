/*
	Author: mp5gosu

	Description:
	Attach Cargo to Object

	Parameter(s):
		0: VEHICLE - Vehicle to which the target will be attached to
		1: NUMBER - Target that will be attached
		2: NUMBER - Action Menu ID
*/
private ["_tgt","_veh","_action","_offset","_menu","_tgtMass","_tgtCMass","_vehicleList","_lashings","_lashingsType"];
#include "default.sqf"

_veh = (_this select 3) select 0;
_tgt = (_this select 3) select 1;
_action = _this select 2;
_vehicleList = _veh getVariable["ucsv_vehicleList", []];
_tgtMass = if(isNil {getMass _tgt}) then {0} else {getMass _tgt};
_tgtCMass = if(isNil{getCenterOfMass _tgt}) then {[0,0,0]} else {getCenterOfMass _tgt};
_offset = [];

{if(_tgt isKindOf (_x select 0)) then {_offset = _vehiclesDefault select _forEachIndex select 1;};} forEach _vehiclesDefault;
{if(typeOf _tgt == (_x select 0)) then {_offset = _vehicleList select _forEachIndex select 1;};} forEach _vehicleList;

if((_veh getVariable "ucsv_mass") - _tgtMass >= 3800) then
{
	_veh setMass[(_veh getVariable "ucsv_mass") - _tgtMass, 0.5];
} else
{
	_veh setMass[3800,0.5]
};
_veh setCenterOfMass[[(_veh getVariable "ucsv_centerOfMass" select 0),(_veh getVariable "ucsv_centerOfMass" select 1),(((_veh getVariable "ucsv_centerOfMass" select 2) + (_tgtCMass select 2)) / 2) max -1.0], 0.5];
_tgt attachTo [_veh, _offset];
[_veh, (format[localize "STR_J4P_release", getText(configFile >> "CfgVehicles" >> (typeof _tgt) >> "displayName")]), "j4p_ucsv\data\scripts\lifting\fn_detachCargo.sqf", _veh, false] call J4P_fnc_addAction;
_veh setVariable["ucsv_cargo", _tgt, true];
_tgt setVariable["ucsv_isAttached", true, true];

_lashingsType = "UCSV_Lashings";
if((_tgt isKindOf "ReammoBox_F") || (_tgt isKindOf "C_Kart_01_F_Base")) then  {_lashingsType = "UCSV_Lashings_Box"};
if(_tgt isKindOf "SDV_01_base_F") then  {_lashingsType = "UCSV_Lashings_Long"};

_lashings = _lashingsType createVehicle [0,0,0];
_lashings attachto [_veh, [0,0,0], "lashings"];
_veh setVariable ["ucsv_hook", _lashings,true];
_veh removeAction _action;
_action = nil;
playSound3D ["j4p_ucsv\data\sound\attach.wss", _veh, false, getPos _veh, 1, 1, 30];
