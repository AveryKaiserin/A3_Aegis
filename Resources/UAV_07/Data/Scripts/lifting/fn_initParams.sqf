/*
	Author: mp5gosu

	Description:
	Collects UCSV parameters from missionNamespace and stores them in object variable space.

	Parameter(s):
		0: VEHICLE
*/
private ["_veh","_whitelist","_blacklist","_vehicleList"];
_veh = [_this, 0, objNull,[objNull]] call bis_fnc_param;

#include "default.sqf"

_vehicleList = [];
_whitelist = [];
_blacklist = [];

{_vehicleList set[count _vehicleList, _x]} count _vehiclesSpecial;
if(!(isNil "ucsv_whiteList")) then {{_vehicleList set[count _vehicleList, _x]} count ucsv_whiteList;};
if(!(isNil "ucsv_blackList")) then {{_blacklist set[count _blacklist, _x]} count ucsv_blackList;};
if(!(isNil "ucsv_markerType")) then {_veh setVariable["ucsv_markerType", ucsv_markerType]};

{_whitelist set[count _whitelist, _x select 0]} count _vehicleList;
{_whitelist set[count _whitelist, _x select 0]} count _vehiclesDefault;

_veh setVariable["ucsv_whitelist",_whitelist];
_veh setVariable["ucsv_blacklist",_blacklist];
_veh setVariable["ucsv_vehicleList",_vehicleList];
_veh setVariable["ucsv_parachuteDeployHeight", ucsv_parachuteDeployHeight];
_veh setVariable["ucsv_cargo", ObjNull];
_veh setVariable["ucsv_hook", ObjNull];
_veh setVariable["ucsv_action", nil];
_veh setVariable["ucsv_mass", getMass _veh];
_veh setVariable["ucsv_centerOfMass", getCenterOfMass _veh];