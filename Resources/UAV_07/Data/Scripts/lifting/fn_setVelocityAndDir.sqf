/*
	Author: mp5gosu

	Description:
	Sets Vector Direction and Velocity

	Parameter(s):
		0: OBJECT - Target object to which the parameters will be applied to
		1: OBJECT - Source object to read direction and velocity from
*/
private["_unit1","_unit2"];

_unit1 = [_this, 0, objNull,[objNull]] call bis_fnc_param;
_unit2 = [_this, 1, objNull,[objNull]] call bis_fnc_param;

_unit1 setVectorDir (vectorDir _unit2);
_unit1 setVelocity velocity _unit2;