/*
	Author: mp5gosu

	Description:
	UCSV Vehicle Init. Inits Tilt-Rotor & Lifting (optional)

	Parameter(s):
		0: VEHICLE
*/
private ["_veh"];
_veh = _this select 0;

// CORE
[_veh,0.25,0.6,-5.25,5.25,-12.50,"l_wing","r_wing"] spawn J4P_fnc_tiltRotor;
// LIFTING
waitUntil {!isNil "ucsv_lift_enable"};

[_veh] call J4P_fnc_initParams;
if(!isDedicated) then
{
	[_veh,10,5.5,3.5,1,0.9] spawn J4P_fnc_checkLift;
};
if(isNil{_veh getVariable["ucsv_respawnEH", nil]}) then
{
		_veh addMPEventHandler ["MPRespawn",{[_veh] spawn J4P_fnc_init;}];
		_veh setVariable["ucsv_respawnEH", 1, true];
};
