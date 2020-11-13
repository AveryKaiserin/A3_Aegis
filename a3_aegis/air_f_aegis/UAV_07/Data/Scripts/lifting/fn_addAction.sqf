/*
	Author: mp5gosu

	Description:
	Add action to vehicle. Action ID gets stored in vehicle's variable space.

	Parameter(s):
		0: VEHICLE - Unit that will get the action
		1: STRING - Text
		2: STRING - Script to run
		3: STRING - Action Arguments
*/
private ["_unit","_text","_script","_params","_actionID"];
_unit = [_this, 0, objNull,[objNull]] call bis_fnc_param;
_text = [_this, 1, "",[""]] call bis_fnc_param;
_script = [_this, 2, "",[""]] call bis_fnc_param;
_params = [_this, 3, objNull,[objNull]] call bis_fnc_param;
_window = [_this, 4, false,[true]] call bis_fnc_param;

_actionID = _unit addAction[_text,_script,_params,10,_window,true,"", "driver _target == _this"];
_unit setVariable["ucsv_action", _actionID];