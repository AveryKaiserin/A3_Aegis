		attenuationEffectType = "HeliAttenuation"; //utlumovani v interieru (odkaz do Attenuation.hpp ve slozce SOUNDS_F

		soundGetIn[]={"A3\Sounds_F\air\Plane_Fighter_03\getin",db-5,1};
		soundGetOut[]={"A3\Sounds_F\air\Plane_Fighter_03\getout",db-5,1, 40};
		soundDammage[]={"", db-5, 1};
		soundEngineOnInt[] = {"A3\Sounds_F\air\Plane_Fighter_03\Plane_Fighter_03-start_int", db-0, 1.0};
		soundEngineOnExt[] = {"A3\Sounds_F\air\Plane_Fighter_03\Plane_Fighter_03-start_ext", db5, 1.0, 500};
		soundEngineOffInt[] =  {"A3\Sounds_F\air\Plane_Fighter_03\Plane_Fighter_03-stop_int", db-0, 1.0};
		soundEngineOffExt[] =  {"A3\Sounds_F\air\Plane_Fighter_03\Plane_Fighter_03-stop_ext", db5, 1.0, 500};
    	soundLocked[] = {"\A3\Sounds_F\weapons\Rockets\locked_1", db-20, 1};
    	soundIncommingMissile[] = {"\A3\Sounds_F\weapons\Rockets\locked_3", db-20, 1.5};
		soundGearUp[] = { "A3\Sounds_F_EPC\CAS_02\gear_up", 0.79432821, 1, 150 };
		soundGearDown[] = { "A3\Sounds_F_EPC\CAS_02\gear_down", 0.79432821, 1, 150 };
		soundFlapsUp[] = { "A3\Sounds_F_EPC\CAS_02\Flaps_Up", 0.63095737, 1, 100 };
		soundFlapsDown[] = { "A3\Sounds_F_EPC\CAS_02\Flaps_Down", 0.63095737, 1, 100 };

	/*	EXTERNAL SOUNDS L159 */

		class Sounds
		{
			class EngineLowOut
			{
				sound[] =  {"A3\Sounds_F\air\Plane_Fighter_03\Plane_Fighter_03_low_ext", db8, 1.0, 1200};
				frequency = "1.0 min (rpm + 0.5)";
				volume = "camPos*2*(rpm factor[0.95, 0])*(rpm factor[0, 0.95])";
			};
			class EngineHighOut
			{
				sound[] =  {"A3\Sounds_F\air\Plane_Fighter_03\Plane_Fighter_03_engi_ext", db8, 1.2, 1400};
				frequency = "1";
				volume = "camPos*4*(rpm factor[0.5, 1.1])*(rpm factor[1.1, 0.5])";
			};
			class ForsageOut
			{
				sound[] =  {"A3\Sounds_F\air\Plane_Fighter_03\Plane_Fighter_03-fors_ext", db5, 0.99, 1700};
				frequency = "1";
				volume = "engineOn*camPos*(thrust factor[0.6, 1.0])";
				cone[] = {3.14, 3.92, 2.0, 0.5};
			};
			class WindNoiseOut
			{
				sound[] =  {"A3\Sounds_F\air\Plane_Fighter_03\noise", db-5, 1.0, 150};
				frequency ="(0.1+(1.2*(speed factor[1, 150])))";
				volume = "camPos*(speed factor[1, 150])";
			};

	/*	INTERNAL SOUNDS L159 */ 

			class EngineLowIn
			{
				sound[] =  {"A3\Sounds_F\air\Plane_Fighter_03\Plane_Fighter_03_low_int", db0, 1.0};
				frequency = "1.0 min (rpm + 0.5)";
				volume = (1-camPos)*((rpm factor[0.7, 0.1])*(rpm factor[0.1, 0.7]));
			};
			class EngineHighIn
			{
				sound[] =  {"A3\Sounds_F\air\Plane_Fighter_03\Plane_Fighter_03_engi_int", db0, 1.2};
				frequency = "1";
				volume = "(1-camPos)*(rpm factor[0.85, 1.0])";
			};
			class ForsageIn
			{
				sound[] =  {"A3\Sounds_F\air\Plane_Fighter_03\Plane_Fighter_03-fors_int", db0, 1.0};
				frequency = "1";
				volume = "(1-camPos)*(engineOn*(thrust factor[0.6, 1.0]))";
			};
			class WindNoiseIn
			{
				sound[] =  {"A3\Sounds_F\air\Plane_Fighter_03\noise", db-6, 1.0};
				frequency ="(0.1+(1.2*(speed factor[1, 150])))";
				volume = "(1-camPos)*(speed factor[1, 150])";
			};
		};