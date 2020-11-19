/*
	Author: mp5gosu

	Description:
	Remove Action from Vehicle. Action ID will be deleted from Vehicles variable space.

	Parameter(s):
		0: VEHICLE - Unit that has the action
		1: NUMBER - The Action ID
*/
private ["_unit","_actionID"];
_unit = [_this, 0, objNull,[objNull]] call BIS_fnc_param;
_actionID = _unit getVariable["ucsv_action", nil];

_unit removeAction _actionID;
_unit setVariable["ucsv_action",nil];