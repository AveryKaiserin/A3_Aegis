emptySound[] = {"",0,1};
soundGeneralCollision1[] = {"\A3\Sounds_F\vehicles\crashes\helis\Heli_coll_default_int_1",db0,1,100};
soundGeneralCollision2[] = {"\A3\Sounds_F\vehicles\crashes\helis\Heli_coll_default_int_2",db0,1,100};
soundGeneralCollision3[] = {"\A3\Sounds_F\vehicles\crashes\helis\Heli_coll_default_int_3",db0,1,100};
soundCrashes[] = 
{
	soundGeneralCollision1,1/3,
	soundGeneralCollision2,1/3,
	soundGeneralCollision3,1/3
};
soundLandCrashes[] = {emptySound,0};
soundBuildingCrash[] = 
{
	soundGeneralCollision1,1,
	soundGeneralCollision2,1,
	soundGeneralCollision3,1
};
soundArmorCrash[] = 
{
	soundGeneralCollision1,1,
	soundGeneralCollision2,1,
	soundGeneralCollision3,1
};
soundWoodCrash[] = 
{
	soundGeneralCollision1,1,
	soundGeneralCollision2,1,
	soundGeneralCollision3,1
};
soundBushCollision1[] = {"\A3\Sounds_F\vehicles\crashes\helis\Heli_coll_bush_int_1",db0,1,100};
soundBushCollision2[] = {"\A3\Sounds_F\vehicles\crashes\helis\Heli_coll_bush_int_2",db0,1,100};
soundBushCollision3[] = {"\A3\Sounds_F\vehicles\crashes\helis\Heli_coll_bush_int_3",db0,1,100};
soundBushCrash[] = 
{
	soundBushCollision1,1/3,
	soundBushCollision2,1/3,
	soundBushCollision3,1/3
};
soundWaterCollision1[] = {"\A3\Sounds_F\vehicles\crashes\helis\Heli_coll_water_ext_1",db0,1,100};
soundWaterCollision2[] = {"\A3\Sounds_F\vehicles\crashes\helis\Heli_coll_water_ext_2",db0,1,100};
soundWaterCrashes[] = 
{
	soundWaterCollision1,1/2,
	soundWaterCollision2,1/2
};
soundDammage[] = {"\A3\Sounds_F\vehicles\crashes\helis\Heli_crash_default_int_1",db20,1};
soundGetIn[] = 
{
	"\A3\Sounds_F\vehicles\air\Heli_Light_03\open",
	1,
	1
};
soundGetOut[] = 
{
	"\A3\Sounds_F\vehicles\air\Heli_Light_03\close",
	1,
	1,
	50
};
soundEngineOnInt[] = 
{
	"\A3\Sounds_F\vehicles\air\Heli_Light_03\heli_start_int",
	0.39810717,
	1
};
soundEngineOnExt[] = 
{
	"\A3\Sounds_F\vehicles\air\Heli_Light_03\heli_start_ext",
	2.5118864,
	1,
	600
};
soundEngineOffInt[] = 
{
	"\A3\Sounds_F\vehicles\air\Heli_Light_03\heli_stop_int",
	0.39810717,
	1
};
soundEngineOffExt[] = 
{
	"\A3\Sounds_F\vehicles\air\Heli_Light_03\heli_stop_ext",
	2.5118864,
	1,
	600
};
soundLocked[] = {"\A3\Sounds_F\weapons\Rockets\locked_1",db0,1};
soundIncommingMissile[] = {"\A3\Sounds_F\vehicles\air\noises\alarm_locked_by_missile_2",db-10,1};
rotorDamageInt[] = {"\A3\Sounds_F\vehicles\air\noises\heli_damage_rotor_int_open_1",db0,1};
rotorDamageOut[] = {"\A3\Sounds_F\vehicles\air\noises\heli_damage_rotor_ext_1",db8,1,150};
rotorDamage[] = 
{
	rotorDamageInt,
	rotorDamageOut
};
tailDamageInt[] = {"\A3\Sounds_F\vehicles\air\noises\heli_damage_tail",db0,1};
tailDamageOut[] = {"\A3\Sounds_F\vehicles\air\noises\heli_damage_tail",db0,1,300};
tailDamage[] = 
{
	tailDamageInt,
	tailDamageOut
};
landingSoundInt0[] = {"\A3\Sounds_F\vehicles\air\noises\landing_wheels_small_int1",db0,1,100};
landingSoundInt1[] = {"\A3\Sounds_F\vehicles\air\noises\landing_wheels_small_int2",db0,1,100};
landingSoundInt[] = 
{
	landingSoundInt0,1/2,
	landingSoundInt1,1/2
};
landingSoundOut0[] = {"\A3\Sounds_F\vehicles\air\noises\landing_wheels_ext1",db5,1,100};
landingSoundOut1[] = {"\A3\Sounds_F\vehicles\air\noises\landing_wheels_ext2",db5,1,100};
landingSoundOut[] = 
{
	landingSoundOut0,1/2,
	landingSoundOut1,1/2
};
slingCargoAttach0[] = {"\A3\Sounds_F\vehicles\air\noises\SL_engineDownEndINT",db0,1};
slingCargoAttach1[] = {"\A3\Sounds_F\vehicles\air\noises\SL_1hookLock",db0,1,200};
slingCargoAttach[] = 
{
	slingCargoAttach0,
	slingCargoAttach1
};
slingCargoDetach0[] = {"\A3\Sounds_F\vehicles\air\noises\SL_engineUpEndINT",db0,1};
slingCargoDetach1[] = {"\A3\Sounds_F\vehicles\air\noises\SL_1hookUnlock",db0,1,200};
slingCargoDetach[] = 
{
	slingCargoDetach0,
	slingCargoDetach1
};
slingCargoDetachAir0[] = {"\A3\Sounds_F\vehicles\air\noises\SL_unhook_air_int",db0,1};
slingCargoDetachAir1[] = {"\A3\Sounds_F\vehicles\air\noises\SL_unhook_air_ext",db0,1,300};
slingCargoDetachAir[] = 
{
	slingCargoDetach0,
	slingCargoDetach1
};
slingCargoRopeBreak0[] = {"\A3\Sounds_F\vehicles\air\noises\SL_rope_break_int",db0,1};
slingCargoRopeBreak1[] = {"\A3\Sounds_F\vehicles\air\noises\SL_rope_break_ext",db0,1,200};
slingCargoRopeBreak[] = 
{
	slingCargoDetach0,
	slingCargoDetach1
};
class Sounds
{
	class EngineExt
	{
        sound[] = {"\A3\Sounds_F\vehicles\air\Heli_Light_03\heli_engine_ext",db5,1,700};
        frequency = rotorSpeed;
        volume = camPos*((rotorSpeed-0.72)*4);
	};
	class RotorExt
	{
sound[] = 
{
	"\A3\Sounds_F\vehicles\air\Heli_Light_03\heli_rotor_ext",
	1.4125376,
	1,
	1100
};
frequency = "rotorSpeed * (1-rotorThrust/5)";
volume = "camPos*(0 max (rotorSpeed-0.1))*(1 + rotorThrust)";
	};
	class RotorNoiseExt
	{
sound[] = 
{
	"\A3\Sounds_F\vehicles\air\Heli_Light_03\rotor_swist",
	1,
	1,
	300
};
frequency = 1;
volume = "camPos * (rotorThrust factor [0.7, 0.9])";
cone[] = {0.69999999,1.3,1,0};
	};
	class EngineInt
	{
sound[] = 
{
	"\A3\Sounds_F\vehicles\air\Heli_Light_03\heli_engine_int",
	1,
	1
};
frequency = "rotorSpeed";
volume = "(1-camPos)*((rotorSpeed-0.75)*4)";
	};
	class RotorInt
	{
sound[] = 
{
	"\A3\Sounds_F\vehicles\air\Heli_Light_03\heli_rotor_int",
	db5,
	1
};
frequency = "rotorSpeed * (1-rotorThrust/5)";
volume = "(1-camPos)*(0 max (rotorSpeed*rotorSpeed-0.1))*(1 + rotorThrust)";
	};
	class TransmissionDamageExt_phase1
	{
sound[] = 
{
	"\A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_ext_1",
	1,
	1,
	150
};
frequency = "0.66 + rotorSpeed / 3";
volume = "camPos * (transmissionDamage factor [0.3, 0.35]) * (transmissionDamage factor [0.5, 0.45]) * (rotorSpeed factor [0.2, 0.5])";
	};
	class TransmissionDamageExt_phase2
	{
sound[] = 
{
	"\A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_ext_2",
	1,
	1,
	150
};
frequency = "0.66 + rotorSpeed / 3";
volume = "camPos * (transmissionDamage factor [0.45, 0.5]) * (rotorSpeed factor [0.2, 0.5])";
	};
	class TransmissionDamageInt_phase1
	{
sound[] = 
{
	"\A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_int_1",
	1,
	1,
	150
};
frequency = "0.66 + rotorSpeed / 3";
volume = "(1 - camPos) * (transmissionDamage factor [0.3, 0.35]) * (transmissionDamage factor [0.5, 0.45]) * (rotorSpeed factor [0.2, 0.5])";
	};
	class TransmissionDamageInt_phase2
	{
sound[] = 
{
	"\A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_int_2",
	1,
	1,
	150
};
frequency = "0.66 + rotorSpeed / 3";
volume = "(1 - camPos) * (transmissionDamage factor [0.45, 0.5]) * (rotorSpeed factor [0.2, 0.5])";
	};
	class damageAlarmInt
	{
sound[] = 
{
	"\A3\Sounds_F\vehicles\air\noises\heli_alarm_opfor",
	0.31622776,
	1
};
frequency = 1;
volume = "engineOn * (1 - camPos) * ( 1 - ((transmissionDamage factor [0.61, 0.60]) * (motorDamage factor [0.61, 0.60]) * (rotorDamage factor [0.51, 0.50]))) * (rotorSpeed factor [0.0, 0.001])";
	};
	class damageAlarmExt
	{
sound[] = 
{
	"\A3\Sounds_F\vehicles\air\noises\heli_alarm_opfor",
	0.22387211,
	1,
	20
};
frequency = 1;
volume = "engineOn * camPos * ( 1 - ((transmissionDamage factor [0.61, 0.60]) * (motorDamage factor [0.61, 0.60]) * (rotorDamage factor [0.51, 0.50]))) * (rotorSpeed factor [0, 0.001])";
	};
	class rotorLowAlarmInt
	{
sound[] = 
{
	"\A3\Sounds_F\vehicles\air\noises\heli_alarm_rotor_low",
	0.31622776,
	1
};
frequency = 1;
volume = "engineOn * (1 - camPos) * (rotorSpeed factor [0.9, 0.8999]) * (rotorSpeed factor [-0.5, 1]) * (speed factor [3, 3.01])";
	};
	class rotorLowAlarmExt
	{
sound[] = 
{
	"\A3\Sounds_F\vehicles\air\noises\heli_alarm_rotor_low",
	0.22387211,
	1,
	20
};
frequency = 1;
volume = "engineOn * camPos * (rotorSpeed factor [0.9, 0.8999]) * (rotorSpeed factor [-0.5, 1]) * (speed factor [3, 3.01])";
	};
	class scrubLandInt
	{
sound[] = 
{
	"\A3\Sounds_F\vehicles\air\noises\scrubLandInt_open",
	1,
	1,
	100
};
frequency = 1;
volume = "2 * (1-camPos) * (scrubLand factor[0.02, 0.05])";
	};
	class scrubLandExt
	{
sound[] = 
{
	"\A3\Sounds_F\vehicles\air\noises\scrubLandExt",
	1,
	1,
	100
};
frequency = 1;
volume = "camPos * (scrubLand factor[0.02, 0.05])";
	};
	class scrubBuildingInt
	{
sound[] = 
{
	"\A3\Sounds_F\vehicles\air\noises\scrubBuildingInt",
	1,
	1,
	100
};
frequency = 1;
volume = "2 * (1 - camPos) * (scrubBuilding factor[0.02, 0.05])";
	};
	class scrubBuildingExt
	{
sound[] = 
{
	"\A3\Sounds_F\vehicles\air\noises\scrubBuildingExt",
	1,
	1,
	100
};
frequency = 1;
volume = "camPos * (scrubBuilding factor[0.02, 0.05])";
	};
	class scrubTreeInt
	{
sound[] = 
{
	"\A3\Sounds_F\vehicles\air\noises\scrubTreeExt",
	1,
	1,
	100
};
frequency = 1;
volume = "(1 - camPos) * ((scrubTree) factor [0, 0.01])";
	};
	class scrubTreeExt
	{
sound[] = 
{
	"\A3\Sounds_F\vehicles\air\noises\scrubTreeExt",
	1,
	1,
	100
};
frequency = 1;
volume = "camPos * ((scrubTree) factor [0, 0.01])";
	};
	class RainExt
	{
sound[] = 
{
	"\A3\Sounds_F\vehicles\noises\rain1_ext",
	1,
	1,
	100
};
frequency = 1;
volume = "camPos * (rain - rotorSpeed/2) * 2";
	};
	class RainInt
	{
sound[] = 
{
	"\A3\Sounds_F\vehicles\noises\rain1_int",
	1,
	1,
	100
};
frequency = 1;
volume = "(1-camPos)*(rain - rotorSpeed/2)*2";
	};
	class SlingLoadDownExt
	{
sound[] = 
{
	"\A3\Sounds_F\vehicles\air\noises\SL_engineDownEXT",
	1,
	1,
	500
};
frequency = 1;
volume = "camPos*(slingLoadActive factor [0,-1])";
	};
	class SlingLoadUpExt
	{
sound[] = 
{
	"\A3\Sounds_F\vehicles\air\noises\SL_engineUpEXT",
	1,
	1,
	500
};
frequency = 1;
volume = "camPos*(slingLoadActive factor [0,1])";
	};
	class SlingLoadDownInt
	{
sound[] = 
{
	"\A3\Sounds_F\vehicles\air\noises\SL_engineDownINT",
	1,
	1,
	500
};
frequency = 1;
volume = "(1-camPos)*(slingLoadActive factor [0,-1])";
	};
	class SlingLoadUpInt
	{
sound[] = 
{
	"\A3\Sounds_F\vehicles\air\noises\SL_engineUpINT",
	1,
	1,
	500
};
frequency = 1;
volume = "(1-camPos)*(slingLoadActive factor [0,1])";
	};
	class WindInt
	{
sound[] = 
{
	"\A3\Sounds_F\vehicles\air\noises\wind_open_int",
	0.56234133,
	1,
	50
};
frequency = 1;
volume = "(1-camPos)*(speed factor[5, 50])*(speed factor[5, 50])";
	};
	class GStress
	{
sound[] = 
{
	"\A3\Sounds_F\vehicles\noises\vehicle_stress2b",
	0.3548134,
	1,
	50
};
frequency = 1;
volume = "engineOn * (1-camPos) * ((gmeterZ factor[1.5, 2.5]) + (gmeterZ factor[0.5, -0.5]))";
	};
};
class SoundsExt
{
	class SoundEvents
	{
	};
	class Sounds
	{
class EngineExt
{
	sound[] = 
	{
"\A3\Sounds_F\vehicles\air\Heli_Light_03\heli_engine_ext",
db5,
1,
700
	};
	frequency = "rotorSpeed";
	volume = "camPos*((rotorSpeed-0.72)*4)";
};
class RotorExt
{
	sound[] = 
	{
"\A3\Sounds_F\vehicles\air\Heli_Light_03\heli_rotor_ext",
1.4125376,
1,
1100
	};
	frequency = "rotorSpeed * (1-rotorThrust/5)";
	volume = "camPos*(0 max (rotorSpeed-0.1))*(1 + rotorThrust)";
};
class RotorNoiseExt
{
	sound[] = 
	{
"\A3\Sounds_F\vehicles\air\Heli_Light_03\rotor_swist",
1,
1,
300
	};
	frequency = 1;
	volume = "camPos * (rotorThrust factor [0.7, 0.9])";
	cone[] = {0.69999999,1.3,1,0};
};
class EngineInt
{
	sound[] = 
	{
"\A3\Sounds_F\vehicles\air\Heli_Light_03\heli_engine_int",
1,
1
	};
	frequency = "rotorSpeed";
	volume = "(1-camPos)*((rotorSpeed-0.75)*4)";
};
class RotorInt
{
	sound[] = 
	{
"\A3\Sounds_F\vehicles\air\Heli_Light_03\heli_rotor_int",
db5,
1
	};
	frequency = "rotorSpeed * (1-rotorThrust/5)";
	volume = "(1-camPos)*(0 max (rotorSpeed*rotorSpeed-0.1))*(1 + rotorThrust)";
};
class TransmissionDamageExt_phase1
{
	sound[] = 
	{
"\A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_ext_1",
1,
1,
150
	};
	frequency = "0.66 + rotorSpeed / 3";
	volume = "camPos * (transmissionDamage factor [0.3, 0.35]) * (transmissionDamage factor [0.5, 0.45]) * (rotorSpeed factor [0.2, 0.5])";
};
class TransmissionDamageExt_phase2
{
	sound[] = 
	{
"\A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_ext_2",
1,
1,
150
	};
	frequency = "0.66 + rotorSpeed / 3";
	volume = "camPos * (transmissionDamage factor [0.45, 0.5]) * (rotorSpeed factor [0.2, 0.5])";
};
class TransmissionDamageInt_phase1
{
	sound[] = 
	{
"\A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_int_1",
1,
1,
150
	};
	frequency = "0.66 + rotorSpeed / 3";
	volume = "(1 - camPos) * (transmissionDamage factor [0.3, 0.35]) * (transmissionDamage factor [0.5, 0.45]) * (rotorSpeed factor [0.2, 0.5])";
};
class TransmissionDamageInt_phase2
{
	sound[] = 
	{
"\A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_int_2",
1,
1,
150
	};
	frequency = "0.66 + rotorSpeed / 3";
	volume = "(1 - camPos) * (transmissionDamage factor [0.45, 0.5]) * (rotorSpeed factor [0.2, 0.5])";
};
class damageAlarmInt
{
	sound[] = 
	{
"\A3\Sounds_F\vehicles\air\noises\heli_alarm_opfor",
0.31622776,
1
	};
	frequency = 1;
	volume = "engineOn * (1 - camPos) * ( 1 - ((transmissionDamage factor [0.61, 0.60]) * (motorDamage factor [0.61, 0.60]) * (rotorDamage factor [0.51, 0.50]))) * (rotorSpeed factor [0.0, 0.001])";
};
class damageAlarmExt
{
	sound[] = 
	{
"\A3\Sounds_F\vehicles\air\noises\heli_alarm_opfor",
0.22387211,
1,
20
	};
	frequency = 1;
	volume = "engineOn * camPos * ( 1 - ((transmissionDamage factor [0.61, 0.60]) * (motorDamage factor [0.61, 0.60]) * (rotorDamage factor [0.51, 0.50]))) * (rotorSpeed factor [0, 0.001])";
};
class rotorLowAlarmInt
{
	sound[] = 
	{
"\A3\Sounds_F\vehicles\air\noises\heli_alarm_rotor_low",
0.31622776,
1
	};
	frequency = 1;
	volume = "engineOn * (1 - camPos) * (rotorSpeed factor [0.9, 0.8999]) * (rotorSpeed factor [-0.5, 1]) * (speed factor [3, 3.01])";
};
class rotorLowAlarmExt
{
	sound[] = 
	{
"\A3\Sounds_F\vehicles\air\noises\heli_alarm_rotor_low",
0.22387211,
1,
20
	};
	frequency = 1;
	volume = "engineOn * camPos * (rotorSpeed factor [0.9, 0.8999]) * (rotorSpeed factor [-0.5, 1]) * (speed factor [3, 3.01])";
};
class scrubLandInt
{
	sound[] = 
	{
"\A3\Sounds_F\vehicles\air\noises\scrubLandInt_open",
1,
1,
100
	};
	frequency = 1;
	volume = "2 * (1-camPos) * (scrubLand factor[0.02, 0.05])";
};
class scrubLandExt
{
	sound[] = 
	{
"\A3\Sounds_F\vehicles\air\noises\scrubLandExt",
1,
1,
100
	};
	frequency = 1;
	volume = "camPos * (scrubLand factor[0.02, 0.05])";
};
class scrubBuildingInt
{
	sound[] = 
	{
"\A3\Sounds_F\vehicles\air\noises\scrubBuildingInt",
1,
1,
100
	};
	frequency = 1;
	volume = "2 * (1 - camPos) * (scrubBuilding factor[0.02, 0.05])";
};
class scrubBuildingExt
{
	sound[] = 
	{
"\A3\Sounds_F\vehicles\air\noises\scrubBuildingExt",
1,
1,
100
	};
	frequency = 1;
	volume = "camPos * (scrubBuilding factor[0.02, 0.05])";
};
class scrubTreeInt
{
	sound[] = 
	{
"\A3\Sounds_F\vehicles\air\noises\scrubTreeExt",
1,
1,
100
	};
	frequency = 1;
	volume = "(1 - camPos) * ((scrubTree) factor [0, 0.01])";
};
class scrubTreeExt
{
	sound[] = 
	{
"\A3\Sounds_F\vehicles\air\noises\scrubTreeExt",
1,
1,
100
	};
	frequency = 1;
	volume = "camPos * ((scrubTree) factor [0, 0.01])";
};
class RainExt
{
	sound[] = 
	{
"\A3\Sounds_F\vehicles\noises\rain1_ext",
1,
1,
100
	};
	frequency = 1;
	volume = "camPos * (rain - rotorSpeed/2) * 2";
};
class RainInt
{
	sound[] = 
	{
"\A3\Sounds_F\vehicles\noises\rain1_int",
1,
1,
100
	};
	frequency = 1;
	volume = "(1-camPos)*(rain - rotorSpeed/2)*2";
};
class SlingLoadDownExt
{
	sound[] = 
	{
"\A3\Sounds_F\vehicles\air\noises\SL_engineDownEXT",
1,
1,
500
	};
	frequency = 1;
	volume = "camPos*(slingLoadActive factor [0,-1])";
};
class SlingLoadUpExt
{
	sound[] = 
	{
"\A3\Sounds_F\vehicles\air\noises\SL_engineUpEXT",
1,
1,
500
	};
	frequency = 1;
	volume = "camPos*(slingLoadActive factor [0,1])";
};
class SlingLoadDownInt
{
	sound[] = 
	{
"\A3\Sounds_F\vehicles\air\noises\SL_engineDownINT",
1,
1,
500
	};
	frequency = 1;
	volume = "(1-camPos)*(slingLoadActive factor [0,-1])";
};
class SlingLoadUpInt
{
	sound[] = 
	{
"\A3\Sounds_F\vehicles\air\noises\SL_engineUpINT",
1,
1,
500
	};
	frequency = 1;
	volume = "(1-camPos)*(slingLoadActive factor [0,1])";
};
class WindInt
{
	sound[] = 
	{
"\A3\Sounds_F\vehicles\air\noises\wind_open_int",
0.56234133,
1,
50
	};
	frequency = 1;
	volume = "(1-camPos)*(speed factor[5, 50])*(speed factor[5, 50])";
};
class GStress
{
	sound[] = 
	{
"\A3\Sounds_F\vehicles\noises\vehicle_stress2b",
0.3548134,
1,
50
	};
	frequency = 1;
	volume = "engineOn * (1-camPos) * ((gmeterZ factor[1.5, 2.5]) + (gmeterZ factor[0.5, -0.5]))";
};
	};
};