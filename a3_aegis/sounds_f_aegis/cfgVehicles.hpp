class CfgVehicles
{
    // Arma 3
    class Helicopter;
    class Plane_Base_F;
	class Boat_F;
	class ParachuteBase: Helicopter
	{
		soundGetIn[] = {"\A3\Sounds_F\characters\parachute\parachute_open",db-4,1,50};
		soundGetOut[] = {"\A3\Sounds_F\characters\parachute\parachute_landing",db-4,1,50};
		class Sounds
		{
			class Parachute_Flapping_Loop_01
			{
				sound[] = {"\A3\Sounds_F\characters\parachute\Parachute_Flapping_Loop_01",db-4,1,50};
				frequency = 1;
				volume = camint * (abs speed) factor [0, 5]);
			};
			class Parachute_Flapping_Loop_01_Ext
			{
				sound[] = {"\A3\Sounds_F\characters\parachute\Parachute_Flapping_Loop_01_Ext",db0,1,200};
				frequency = 1;
				volume = camext * (abs speed) factor [0, 5]);
			};
			class parachute_glide_loop
			{
				sound[] = {"\A3\Sounds_F\characters\parachute\parachute_glide_loop",db-13,1,75};
				frequency = 1;
				volume = camint * (abs speed) factor [0, 5]);
			};
		};
	};
	class Plane_Fighter_03_base_F: Plane_Base_F
	{
        class GStress
        {
            sound[] = {"\A3\Sounds_F\vehicles\noises\vehicle_stress2e",db4,1,50};
            frequency = 1;
            volume = engineOn * (1-camPos) * (gmeterZ factor[1, 2.5]);
        };
        class SpeedStress
        {
            sound[] = {"\A3\Sounds_F\vehicles\noises\vehicle_stress3",db-6,1,50};
            frequency = 1;
            volume = (1-camPos)*(speed factor[60,80]);
        };
        /*
        class GBreathing
        {
            sound[] = {"\A3\Sounds_F\characters\human-sfx\diver-breath-4",db-5,1,50};
            frequency = 1;
            volume = engineOn * (1-camPos) * (gmeterZ factor[1, 2.5]);
        };
        */
    };
	class Plane_CAS_01_base_F: Plane_Base_F
	{
        class GStress
        {
            sound[] = {"\A3\Sounds_F\vehicles\noises\vehicle_stress2e",db4,1,50};
            frequency = 1;
            volume = engineOn * (1-camPos) * (gmeterZ factor[1, 2.5]);
        };
        class SpeedStress
        {
            sound[] = {"\A3\Sounds_F\vehicles\noises\vehicle_stress3",db-6,1,50};
            frequency = 1;
            volume = (1-camPos)*(speed factor[60,80]);
        };
        /*
        class GBreathing
        {
            sound[] = {"\A3\Sounds_F\characters\human-sfx\diver-breath-4",db-5,1,50};
            frequency = 1;
            volume = engineOn * (1-camPos) * (gmeterZ factor[1, 2.5]);
        };
        */
    };
	class Plane_CAS_02_base_F: Plane_Base_F
	{
        class GStress
        {
            sound[] = {"\A3\Sounds_F\vehicles\noises\vehicle_stress2e",db4,1,50};
            frequency = 1;
            volume = engineOn * (1-camPos) * (gmeterZ factor[1, 2.5]);
        };
        class SpeedStress
        {
            sound[] = {"\A3\Sounds_F\vehicles\noises\vehicle_stress3",db-6,1,50};
            frequency = 1;
            volume = (1-camPos)*(speed factor[60,80]);
        };
        /*
        class GBreathing
        {
            sound[] = {"\A3\Sounds_F\characters\human-sfx\diver-breath-4",db-5,1,50};
            frequency = 1;
            volume = engineOn * (1-camPos) * (gmeterZ factor[1, 2.5]);
        };
        */
    };
    // Arma 3 Apex
	class VTOL_Base_F;
	class VTOL_01_base_F: VTOL_Base_F
	{
		soundGearUp[] = {"\A3\Sounds_F_Exp\vehicles\air\VTOL_02\gear_up",db-2,1,150};
		soundGearDown[] = {"\A3\Sounds_F_Exp\vehicles\air\VTOL_02\gear_down",db-2,1,150};
		soundFlapsUp[] = {"\A3\Sounds_F_Exp\vehicles\air\VTOL_02\flaps_up",db-4,1,100};
		soundFlapsDown[] = {"\A3\Sounds_F_Exp\vehicles\air\VTOL_02\flaps_down",db-4,1,100};
	};
    // Arma 3 Jets
	class Plane_Fighter_01_Base_F: Plane_Base_F
	{
        class GStress
        {
            sound[] = {"\A3\Sounds_F\vehicles\noises\vehicle_stress2e",db4,1,50};
            frequency = 1;
            volume = engineOn * (1-camPos) * (gmeterZ factor[1, 2.5]);
        };
        class SpeedStress
        {
            sound[] = {"\A3\Sounds_F\vehicles\noises\vehicle_stress3",db-6,1,50};
            frequency = 1;
            volume = (1-camPos)*(speed factor[60,80]);
        };
        /*
        class GBreathing
        {
            sound[] = {"\A3\Sounds_F\characters\human-sfx\diver-breath-4",db-5,1,50};
            frequency = 1;
            volume = engineOn * (1-camPos) * (gmeterZ factor[1, 2.5]);
        };
        */
    };
	class Plane_Fighter_02_Base_F: Plane_Base_F
	{
        class GStress
        {
            sound[] = {"\A3\Sounds_F\vehicles\noises\vehicle_stress2e",db4,1,50};
            frequency = 1;
            volume = engineOn * (1-camPos) * (gmeterZ factor[1, 2.5]);
        };
        class SpeedStress
        {
            sound[] = {"\A3\Sounds_F\vehicles\noises\vehicle_stress3",db-6,1,50};
            frequency = 1;
            volume = (1-camPos)*(speed factor[60,80]);
        };
        /*
        class GBreathing
        {
            sound[] = {"\A3\Sounds_F\characters\human-sfx\diver-breath-4",db-5,1,50};
            frequency = 1;
            volume = engineOn * (1-camPos) * (gmeterZ factor[1, 2.5]);
        };
        */
    };
	class Plane_Fighter_04_Base_F: Plane_Base_F
	{
        class GStress
        {
            sound[] = {"\A3\Sounds_F\vehicles\noises\vehicle_stress2e",db4,1,50};
            frequency = 1;
            volume = engineOn * (1-camPos) * (gmeterZ factor[1, 2.5]);
        };
        class SpeedStress
        {
            sound[] = {"\A3\Sounds_F\vehicles\noises\vehicle_stress3",db-6,1,50};
            frequency = 1;
            volume = (1-camPos)*(speed factor[60,80]);
        };
        /*
        class GBreathing
        {
            sound[] = {"\A3\Sounds_F\characters\human-sfx\diver-breath-4",db-5,1,50};
            frequency = 1;
            volume = engineOn * (1-camPos) * (gmeterZ factor[1, 2.5]);
        };
        */
    };
    // Arma 3 Aegis
	class Plane_Fighter_05_Base_F: Plane_Base_F
	{
        attenuationEffectType = PlaneAttenuation;
		soundGetIn[] = {"\A3\Sounds_F\vehicles\air\CAS_01\getin_wipeout",db0,1,40};
		soundGetOut[] = {"\A3\Sounds_F\air\Plane_Fighter_03\getout",db0,1,40};
		cabinOpenSound[] = {"\A3\Sounds_F\air\noises\Plane_CAS01_CabinOpen",db5,1,40};
		cabinCloseSound[] = {"\A3\Sounds_F\air\noises\Plane_CAS01_CabinClose",db5,1,40};
		cabinOpenSoundInternal[] = {"\A3\Sounds_F\air\noises\Plane_CAS01_CabinOpen",10.0,1,40};
		cabinCloseSoundInternal[] = {"\A3\Sounds_F\air\noises\Plane_CAS01_CabinClose",10.0,1,40};
        soundWaterCollision1[] = {"\A3\Sounds_F\vehicles\crashes\planes\plane_crash_water_1",db3,1,500};
        soundWaterCollision2[] = {"\A3\Sounds_F\vehicles\crashes\planes\plane_crash_water_2",db3,1,500};
        soundWaterCrashes[] =
        {
            soundWaterCollision1,1/2,
            soundWaterCollision2,1/2
        };
        buildCrash0[] = {"\A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_1",db0,1,900};
        buildCrash1[] = {"\A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_2",db0,1,900};
        buildCrash2[] = {"\A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_3",db0,1,900};
        buildCrash3[] = {"\A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_4",db0,1,900};
        soundBuildingCrash[] =
        {
            buildCrash0,1/4,
            buildCrash1,1/4,
            buildCrash2,1/4,
            buildCrash3,1/4
        };
        WoodCrash0[] = {"\A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_wood_ext_1",db10,1,900};
        WoodCrash1[] = {"\A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_wood_ext_2",db10,1,900};
        WoodCrash2[] = {"\A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_wood_ext_6",db10,1,900};
        WoodCrash3[] = {"\A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_wood_ext_8",db10,1,900};
        soundWoodCrash[] =
        {
            woodCrash0,1/4,
            woodCrash1,1/4,
            woodCrash2,1/4,
            woodCrash3,1/4
        };
        armorCrash0[] = {"\A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_1",db0,1,900};
        armorCrash1[] = {"\A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_2",db0,1,900};
        armorCrash2[] = {"\A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_3",db0,1,900};
        armorCrash3[] = {"\A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_4",db0,1,900};
        soundArmorCrash[] =
        {
            ArmorCrash0,1/4,
            ArmorCrash1,1/4,
            ArmorCrash2,1/4,
            ArmorCrash3,1/4
        };
        Crash0[] = {"\A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_1",db0,1,900};
        Crash1[] = {"\A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_2",db0,1,900};
        Crash2[] = {"\A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_3",db0,1,900};
        Crash3[] = {"\A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_4",db0,1,900};
        soundCrashes[] =
        {
            Crash0,1/4,
            Crash1,1/4,
            Crash2,1/4,
            Crash3,1/4
        };
        soundDammage[] = {"",0.562341,1};
        soundEngineOnInt[] = {"\A3_Aegis\Sounds_F_Aegis\vehicles\air\Plane_Fighter_05\B_Plane_Fighter_05_engine_start_int",db0,1};
        soundEngineOnExt[] = {"\A3_Aegis\Sounds_F_Aegis\vehicles\air\Plane_Fighter_05\B_Plane_Fighter_05_engine_start_ext",1.75,1,300};
        soundEngineOffInt[] = {"\A3_Aegis\Sounds_F_Aegis\vehicles\air\Plane_Fighter_05\B_Plane_Fighter_05_engine_shut_int",db0,1};
        soundEngineOffExt[] = {"\A3_Aegis\Sounds_F_Aegis\vehicles\air\Plane_Fighter_05\B_Plane_Fighter_05_engine_shut_ext",1.75,1,300};
        soundLocked[] = {"\A3\Sounds_F_Jets\vehicles\air\Shared\FX_Plane_Jet_lockedOn1",db0,1};
        soundIncommingMissile[] = {"\A3\Sounds_F_Jets\vehicles\air\Shared\FX_Plane_Jet_lockedon2",db0,1.5};
        soundGearUp[] = {"\A3\Sounds_F_Jets\vehicles\air\Shared\FX_Plane_Jet_gear_up",2.25,1,250};
        soundGearDown[] = {"\A3\Sounds_F_Jets\vehicles\air\Shared\FX_Plane_Jet_gear_down",2.25,1,250};
        soundFlapsUp[] = {"\A3\Sounds_F_Jets\vehicles\air\Shared\FX_Plane_Jet_Flaps_Up",1.5,1,150};
        soundFlapsDown[] = {"\A3\Sounds_F_Jets\vehicles\air\Shared\FX_Plane_Jet_Flaps_Down",1.5,1,150};
        soundSetSonicBoom[] = {Plane_Fighter_SonicBoom_SoundSet};
        class Sounds
        {
            soundSets[] =
            {
                Plane_Fighter_05_EngineLowExt_SoundSet,
                Plane_Fighter_05_EngineHighExt_SoundSet,
                Plane_Fighter_05_ForsageExt_SoundSet,
                Plane_Fighter_05_WindNoiseExt_SoundSet,
                Plane_Fighter_05_EngineExt_Dist_Front_SoundSet,
                Plane_Fighter_05_EngineExt_Middle_SoundSet,
                Plane_Fighter_05_EngineExt_Dist_Rear_SoundSet,
                Plane_Fighter_05_EngineLowInt_SoundSet,
                Plane_Fighter_05_EngineHighInt_SoundSet,
                Plane_Fighter_05_ForsageInt_SoundSet,
                Plane_Fighter_05_WindNoiseInt_SoundSet,
                Plane_Fighter_05_VelocityInt_SoundSet,
                Plane_Fighter_RainExt_SoundSet,
                Plane_Fighter_RainInt_SoundSet,
                Plane_Fighter_GStress_SoundSet,
                Plane_Fighter_SpeedStress_SoundSet/*,
                Plane_Fighter_GBreathing_SoundSet*/
            };
        };
        class RainExt
        {
            sound[] = {"\A3\Sounds_F\vehicles\noises\rain1_ext",db5,1,100};
            frequency = 1;
            volume = camPos*rain*(speed factor[50,0]);
        };
        class RainInt
        {
            sound[] = {"\A3\Sounds_F\vehicles\noises\rain1_int",db0,1,100};
            frequency = 1;
            volume = (1-camPos)*rain*(speed factor[50,0]);
        };
        class GStress
        {
            sound[] = {"\A3\Sounds_F\vehicles\noises\vehicle_stress2e",db4,1,50};
            frequency = 1;
            volume = engineOn * (1-camPos) * (gmeterZ factor[1, 2.5]);
        };
        class SpeedStress
        {
            sound[] = {"\A3\Sounds_F\vehicles\noises\vehicle_stress3",db-6,1,50};
            frequency = 1;
            volume = (1-camPos)*(speed factor[60,80]);
        };
        /*
        class GBreathing
        {
            sound[] = {"\A3\Sounds_F\characters\human-sfx\diver-breath-4",db-5,1,50};
            frequency = 1;
            volume = engineOn * (1-camPos) * (gmeterZ factor[1, 2.5]);
        };
        */
    };
	class Plane_Transport_01_base_F: Plane_Base_F
	{
        attenuationEffectType = PlaneAttenuation;
        soundGetIn[] = {"\A3_Aegis\Sounds_F_Aegis\vehicles\air\Plane_Transport_01\open",db-10,1};
        soundGetOut[] = {"\A3_Aegis\Sounds_F_Aegis\vehicles\air\Plane_Transport_01\close",db-10,1,40};
        soundWaterCollision1[] = {"\A3\Sounds_F\vehicles\crashes\planes\plane_crash_water_1",db3,1,500};
        soundWaterCollision2[] = {"\A3\Sounds_F\vehicles\crashes\planes\plane_crash_water_2",db3,1,500};
        soundWaterCrashes[] =
        {
            soundWaterCollision1,1/2,
            soundWaterCollision2,1/2
        };
        buildCrash0[] = {"\A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_1",db0,1,900};
        buildCrash1[] = {"\A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_2",db0,1,900};
        buildCrash2[] = {"\A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_3",db0,1,900};
        buildCrash3[] = {"\A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_4",db0,1,900};
        soundBuildingCrash[] =
        {
            buildCrash0,1/4,
            buildCrash1,1/4,
            buildCrash2,1/4,
            buildCrash3,1/4
        };
        WoodCrash0[] = {"\A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_wood_ext_1",db10,1,900};
        WoodCrash1[] = {"\A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_wood_ext_2",db10,1,900};
        WoodCrash2[] = {"\A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_wood_ext_6",db10,1,900};
        WoodCrash3[] = {"\A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_wood_ext_8",db10,1,900};
        soundWoodCrash[] =
        {
            woodCrash0,1/4,
            woodCrash1,1/4,
            woodCrash2,1/4,
            woodCrash3,1/4
        };
        armorCrash0[] = {"\A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_1",db0,1,900};
        armorCrash1[] = {"\A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_2",db0,1,900};
        armorCrash2[] = {"\A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_3",db0,1,900};
        armorCrash3[] = {"\A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_4",db0,1,900};
        soundArmorCrash[] =
        {
            ArmorCrash0,1/4,
            ArmorCrash1,1/4,
            ArmorCrash2,1/4,
            ArmorCrash3,1/4
        };
        Crash0[] = {"\A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_1",db0,1,900};
        Crash1[] = {"\A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_2",db0,1,900};
        Crash2[] = {"\A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_3",db0,1,900};
        Crash3[] = {"\A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_4",db0,1,900};
        soundCrashes[] =
        {
            Crash0,1/4,
            Crash1,1/4,
            Crash2,1/4,
            Crash3,1/4
        };
        landingSoundInt0[] = {"\A3\Sounds_F\vehicles\air\noises\landing_wheels_large_int1",db0,1,100};
        landingSoundInt1[] = {"\A3\Sounds_F\vehicles\air\noises\landing_wheels_large_int2",db0,1,100};
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
        soundDammage[] = {"",0.562341,1};
        soundEngineOnInt[] = {"\A3_Aegis\Sounds_F_Aegis\vehicles\air\Plane_Transport_01\C192_engine_start_int",db-8,1.0};
        soundEngineOnExt[] = {"\A3_Aegis\Sounds_F_Aegis\vehicles\air\Plane_Transport_01\C192_engine_start_ext",db8,1,700};
        soundEngineOffInt[] = {"\A3_Aegis\Sounds_F_Aegis\vehicles\air\Plane_Transport_01\C192_engine_stop_int",db-8,1.0};
        soundEngineOffExt[] = {"\A3_Aegis\Sounds_F_Aegis\vehicles\air\Plane_Transport_01\C192_engine_stop_ext",db8,1,700};
        soundLocked[] = {"\A3\Sounds_F\weapons\Rockets\locked_1",db-10,1};
        soundIncommingMissile[] = {"\A3\Sounds_F\vehicles\air\noises\alarm_locked_by_missile_1",db-10,1.0};
        soundGearUp[] = {"\A3_Aegis\Sounds_F_Aegis\vehicles\air\Plane_Transport_01\gear_up",db-2,1,150};
        soundGearDown[] = {"\A3_Aegis\Sounds_F_Aegis\vehicles\air\Plane_Transport_01\gear_down",db-2,1,150};
        soundFlapsUp[] = {"\A3_Aegis\Sounds_F_Aegis\vehicles\air\Plane_Transport_01\flaps_up",db-4,1,100};
        soundFlapsDown[] = {"\A3_Aegis\Sounds_F_Aegis\vehicles\air\Plane_Transport_01\flaps_down",db-4,1,100};
        class scrubLandInt
        {
            sound[] = {"\A3\Sounds_F\vehicles\air\noises\wheelsInt",db0,1,100};
            frequency = 1;
            volume = (scrubLand factor[0.01,0.20]);
        };
        class Sounds
        {
            class EngineMidhExt
            {
                sound[] = {"\A3_Aegis\Sounds_F_Aegis\vehicles\air\Plane_Transport_01\C192_engine_mid_ext",db5,1,1100};
                frequency = 1;
                volume = 0.7 * machcone*camPos*(rpm factor[0.5, 1]);
            };
            class EngineHighExt
            {
                sound[] = {"\A3_Aegis\Sounds_F_Aegis\vehicles\air\Plane_Transport_01\C192_engine_high_ext",db5,1,1100};
                frequency = 1 min (rpm+0.5)*(rpm factor[0.5, 1.1]);
                volume = 0.7 * machcone*engineOn*camPos*(rpm factor[0, 1])*(thrust factor[0, 0.75]);
            };
            class ForsageExt
            {
                sound[] = {"\A3_Aegis\Sounds_F_Aegis\vehicles\air\Plane_Transport_01\C192_prop_ext",db3,1.2,1100};
                frequency = 1;
                volume = 0.7 * machcone*engineOn*camPos*(thrust factor[0.6, 1.0]);
                cone[] = {1.14,3.92,2.5,0.4};
            };
            class EngineMidhInt
            {
                sound[] = {"\A3_Aegis\Sounds_F_Aegis\vehicles\air\Plane_Transport_01\C192_engine_mid_int",db-2,1,1100};
                frequency = 1 min (rpm+0.25)*(rpm factor[0, 1]);
                volume = 1 * engineOn*(1-camPos)*(rpm factor[0.5, 1]);
            };
            class EngineHighInt
            {
                sound[] = {"\A3_Aegis\Sounds_F_Aegis\vehicles\air\Plane_Transport_01\C192_engine_high_int",db-2,1,1100};
                frequency = 1 min (rpm+0.25)*(rpm factor[0.25, 1.1]);
                volume = 1 * engineOn*(1-camPos)*(rpm factor[0, 1]);
            };
            class ForsageInt
            {
                sound[] = {"\A3_Aegis\Sounds_F_Aegis\vehicles\air\Plane_Transport_01\C192_prop_int",db-7,1.2,1100};
                frequency = 1 min (rpm+0.5)*(rpm factor[0, 1]);
                volume = 1 * engineOn*(1-camPos)*(rpm factor[0.5, 1])*(thrust factor[0.5, 1.0]);
                cone[] = {1.14,3.92,2.5,0.4};
            };
            class scrubLandInt
            {
                sound[] = {"\A3\Sounds_F\vehicles\air\noises\wheelsInt",db0,1,100};
                frequency = 1;
                volume = 2 * (1-camPos) * (scrubLand factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]));
            };
            class scrubLandExt
            {
                sound[] = {"\A3\Sounds_F\dummysound",db0,1,100};
                frequency = 1;
                volume = camPos * (scrubLand factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]));
            };
            class RainExt
            {
                sound[] = {"\A3\Sounds_F\vehicles\noises\rain1_ext",db5,1,100};
                frequency = 1;
                volume = camPos * rain * (speed factor[50, 0]);
            };
            class RainInt
            {
                sound[] = {"\A3\Sounds_F\vehicles\noises\rain1_int",db0,1,100};
                frequency = 1;
                volume = (1-camPos) * rain * (speed factor[50, 0]);
            };
            class WindInt
            {
                sound[] = {"\A3\Sounds_F\vehicles\air\noises\wind_closed",db-5,1,50};
                frequency = 1;
                volume = (1-camPos)*(speed factor[5, 50])*(speed factor[5, 50]);
            };
            class GStress
            {
                sound[] = {"\A3\Sounds_F\vehicles\noises\vehicle_stress2c",db6,1,50};
                frequency = 1;
                volume = engineOn * (1-camPos) * (gmeterZ factor[1, 2.5]);
            };
            class SpeedStress
            {
                sound[] = {"\A3\Sounds_F\vehicles\noises\vehicle_stress3",db-6,1,50};
                frequency = 1;
                volume = (1-camPos)*(speed factor[60,80]);
            };
        };
    };
	class Boat_Civil_02_base_F: Boat_F
    {
        attenuationEffectType = OpenCarAttenuation;
        insideSoundCoef = 0.5;
        soundEngineOnInt[] = {"\A3_Aegis\Sounds_F_Aegis\vehicles\boat\Boat_Civil_02\ext-slowboat-engine-start-03",db-15,1,200};
        soundEngineOnExt[] = {"\A3_Aegis\Sounds_F_Aegis\vehicles\boat\Boat_Civil_02\ext-slowboat-engine-start-03",db-15,1,200};
        soundEngineOffInt[] = {"\A3_Aegis\Sounds_F_Aegis\vehicles\boat\Boat_Civil_02\ext-slowboat-engine-stop-03",db-15,1,200};
        soundEngineOffExt[] = {"\A3_Aegis\Sounds_F_Aegis\vehicles\boat\Boat_Civil_02\ext-slowboat-engine-stop-03",db-15,1,200};
        buildCrash0[] = {"\A3\Sounds_F\Vehicles\boat\noises\Light_metal_boat_crash_building_01",db5,1,200};
        buildCrash1[] = {"\A3\Sounds_F\Vehicles\boat\noises\Light_metal_boat_crash_building_02",db5,1,200};
        buildCrash2[] = {"\A3\Sounds_F\Vehicles\boat\noises\Light_metal_boat_crash_building_03",db5,1,200};
        soundBuildingCrash[] =
        {
            buildCrash0,1/3,
            buildCrash1,1/3,
            buildCrash2,1/3
        };
        WoodCrash0[] = {"\A3\Sounds_F\Vehicles\boat\noises\Light_metal_boat_crash_wood_01",db5,1,200};
        WoodCrash1[] = {"\A3\Sounds_F\Vehicles\boat\noises\Light_metal_boat_crash_wood_02",db5,1,200};
        WoodCrash2[] = {"\A3\Sounds_F\Vehicles\boat\noises\Light_metal_boat_crash_wood_03",db5,1,200};
        soundWoodCrash[] =
        {
            woodCrash0,1/3,
            woodCrash1,1/3,
            woodCrash2,1/3
        };
        ArmorCrash0[] = {"\A3\Sounds_F\Vehicles\boat\noises\Light_metal_boat_crash_armor_01",db10,1,200};
        ArmorCrash1[] = {"\A3\Sounds_F\Vehicles\boat\noises\Light_metal_boat_crash_armor_02",db10,1,200};
        ArmorCrash2[] = {"\A3\Sounds_F\Vehicles\boat\noises\Light_metal_boat_crash_armor_03",db10,1,200};
        soundArmorCrash[] =
        {
            ArmorCrash0,1/3,
            ArmorCrash1,1/3,
            ArmorCrash2,1/3
        };
        soundGeneralCollision1[] = {"\A3\Sounds_F\Vehicles\boat\noises\Light_metal_boat_crash_armor_01",db5,1,100};
        soundGeneralCollision2[] = {"\A3\Sounds_F\Vehicles\boat\noises\Light_metal_boat_crash_armor_02",db5,1,100};
        soundGeneralCollision3[] = {"\A3\Sounds_F\Vehicles\boat\noises\Light_metal_boat_crash_armor_03",db5,1,100};
        soundCrashes[] =
        {
            soundGeneralCollision1,1/3,
            soundGeneralCollision2,1/3,
            soundGeneralCollision3,1/3
        };
        class Sounds
        {
            class IdleOut
            {
                sound[] = {"\A3_Aegis\Sounds_F_Aegis\vehicles\boat\Boat_Civil_02\ext-slowboat-engine-idle-04",db-7,1,150};
                frequency = 0.95+((rpm/1200) factor[(100/	1200),(200/	1200)])*0.15;
                volume = engineOn*(((rpm/1200) factor[(0/	1200),(30/	1200)])	*	((rpm/	1200) factor[(500/	1200),(300/	1200)]));
            };
            class Engine
            {
                sound[] = {"\A3_Aegis\Sounds_F_Aegis\vehicles\boat\Boat_Civil_02\ext-slowboat-engine-low-04",db-4,1.2,300};
                frequency = 0.95+((rpm/1200) factor[(300/	1200),(600/	1200)])*0.2;
                volume = engineOn*(((rpm/1200) factor[(200/	1200),(300/	1200)])	*	((rpm/	1200) factor[(600/	1200),(400/	1200)]));
            };
            class EngineMidOut
            {
                sound[] = {"\A3_Aegis\Sounds_F_Aegis\vehicles\boat\Boat_Civil_02\ext-slowboat-engine-hi-03",db-1,0.6,400};
                frequency = 0.95+((rpm/	1200) factor[(600/	1200),(900/	1200)])*0.2;
                volume = engineOn*(((rpm/	1200) factor[(350/	1200),(500/	1200)])	*	((rpm/	1200) factor[(1200/	1200),(900/	1200)]));
            };
            class EngineMaxOut
            {
                sound[] = {"\A3_Aegis\Sounds_F_Aegis\vehicles\boat\Boat_Civil_02\ext-slowboat-engine-hi-03",db2,1,500};
                frequency = 0.95+((rpm/1200) factor[(700/	1200),(1000/	1200)])*0.3;
                volume = engineOn*((rpm/1200) factor[(600/	1200),(1200/	1200)]);
            };
            class WaternoiseOutW0
            {
                sound[] = {"\A3\Sounds_F\vehicles\boat\SFX\voda-o-bok-lodi-0-speed1",db0,1,100};
                frequency = 1;
                volume = (speed factor[4, 1]) * water;
            };
            class WaternoiseOutW1
            {
                sound[] = {"\A3\Sounds_F\vehicles\boat\SFX\voda-o-bok-lodi-20-speed",db0,1,150};
                frequency = 1;
                volume = ((speed factor[2, 6]) min (speed factor[6, 4]));
            };
            class WaternoiseOutW2
            {
                sound[] = {"\A3\Sounds_F\vehicles\boat\SFX\voda-o-bok-lodi-50-speed",db0,1,300};
                frequency = 1;
                volume = (speed factor[3, 9]);
            };
            class WaternoiseOutW3
            {
                sound[] = {"\A3\Sounds_F\vehicles\boat\SFX\voda-o-bok-lodi-0-speed1",db0,1,100};
                frequency = 1;
                volume = (speed factor[-4, -1]) * water;
            };
            class WaternoiseOutW4
            {
                sound[] = {"\A3\Sounds_F\vehicles\boat\SFX\voda-o-bok-lodi-20-speed",db0,0.9,150};
                frequency = 1;
                volume = ((speed factor[-2, -6]) min (speed factor[-6, -4]));
            };
            class WaternoiseOutW5
            {
                sound[] = {"\A3\Sounds_F\vehicles\boat\SFX\voda-o-bok-lodi-50-speed",db0,0.9,300};
                frequency = 1;
                volume = (speed factor[-3, -9]);
            };
            class scrubLandExt
            {
                sound[] = {"\A3\Sounds_F\vehicles\boat\noises\boat_land_on_shallow",db5,1,100};
                frequency = 1;
                volume = (scrubLand factor[0.01, 0.20]);
            };
            class RainExt
            {
                sound[] = {"\A3\Sounds_F\vehicles\noises\rain2_ext",db0,1,100};
                frequency = 1;
                volume = camPos * (rain - rotorSpeed/2) * 2;
            };
            class RainInt
            {
                sound[] = {"\A3\Sounds_F\vehicles\noises\rain2_ext",db0,1,100};
                frequency = 1;
                volume = (1-camPos)*(rain - rotorSpeed/2)*2;
            };
        };
    };
};