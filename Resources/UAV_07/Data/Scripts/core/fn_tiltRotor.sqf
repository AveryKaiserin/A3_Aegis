/*
	Author: mp5gosu

	Description:
	Controls Tilt-Rotor Animations (based on helicopter controls)

	Parameter(s):
		0: VEHICLE -  with user animation sources
		1: NUMBER - smooth factor for interpolation between user input and animation phase. The higher the value, the faster animation (1 = no interpolation / direct transformation)
		2: NUMBER - speed factor at which the rotors reach full animation phase.
		3: NUMBER - min. animation phase. Use (configfile >> "CfgVehicles" >> _YOUR_ADDON_NAME_ >> _ANIM_CONTROLLER_ >> "InitPhase") call bis_fnc_getcfgdata; to determine
		4: NUMBER - max. animation phase. Same as above.
		5: NUMBER - Phase Offset
		6: STRING - Left selection name to which the animation is applied to
		7: STRING - Right selection name to which the animation is applied to
*/
private ["_veh","_phase","_smoothF","_speedF","_phaseMin","_phaseMax","_phaseOffset","_velY","_velXY","_rudder","_leftright","_movement","_selL","_selR"];
if (((isServer) && (!isMultiplayer)) || {!isDedicated}) then { 	// Dont run on Dedicated and on Host
	_veh = [_this, 0, objNull,[objNull]] call bis_fnc_param;

	_smoothF = [_this, 1, 0.1,[0]] call bis_fnc_param;
	_speedF = [_this, 2, 0.5,[0]] call bis_fnc_param;
	_phaseMin = [_this, 3, -1,[0]] call bis_fnc_param;
	_phaseMax = [_this, 4, 1,[0]] call bis_fnc_param;
	_phaseOffset = [_this, 5, 0,[0]] call bis_fnc_param;
	_selL = [_this, 6, "l_rotor",[""]] call bis_fnc_param;
	_selR = [_this, 7, "r_rotor",[""]] call bis_fnc_param;
	_phase = 0;

	while {alive _veh} do
	{
		if ((!isNull _veh) && {(local _veh)} && {uavControl _veh select 0 == player}) then
		{
			if (isEngineOn _veh) then
			{
				if  ((uavControl _veh select 1 == "DRIVER")) then	// Is there a pilot? (Human or AI, although tilt is never computed for AI due to the lack of input actions.)
				{
					_rudder = (-1.0 * (inputAction "HeliRudderLeft")) + (inputAction "HeliRudderRight");
					_leftright = (-0.25 * (inputAction "HeliLeft")) + (0.25 * (inputAction "HeliRight"));
				} else
				{
					_rudder = 0;
					_leftright = 0;
				};
					_movement = _rudder + _leftright;
					if (_movement > 0) then
					{
						if(_phase < _phaseMax) then { _phase = _phase + _smoothF * _movement; };
					};
					if (_movement < 0) then
					{
						if(_phase > _phaseMin) then { _phase = _phase + _smoothF * _movement; };
					};

				if (_movement == 0) then
				{
					if(round(_phase) > 0) then { _phase = _phase - _smoothF; };
					if(round(_phase) < 0) then { _phase = _phase + _smoothF; };
				};
				_velY = velocityModelSpace _veh select 1;
				_velXY = sqrt(((velocityModelSpace _veh select 0) ^ 2) + (_velY ^ 2));
				_veh animate[_selL, ((_velY * _speedF) + _phaseOffset) + (_phase + (_velXY * _speedF))];
				_veh animate[_selR, ((_velY * _speedF) + _phaseOffset) + (-(_phase) + (_velXY * _speedF))];
			};
		};
	sleep 0.01;
	};
};