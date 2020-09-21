/*
	Author: Bravo Zero One development
	- John_Spartan, edited by AveryTheKitty

	Description:
	- This is a sub function designed to customize planes numbers.

	Execution:
	- Call from vehicles config of eden attributes.

		Example:
			placeholder

	Required:
		Object (plane) must have predefined hidden selections for number.

	Parameter(s):
		_this select 0: mode (Scalar)
		0: plane object
		and
		1: number that should be displayed on the selection
		2: selection number

	Returns: nothing
	Result: Plane's number is set to specified number.

*/
if (!isServer) exitWith {};

private _plane = _this select 0;
private _number = param [1,0];
private _selection = param [2,0];

_plane setObjectTextureGlobal [_selection, (format ["\A3\Air_F_Jets\Plane_Fighter_01\Data\Numbers\Fighter_01_0%1_CA.paa",_number])];