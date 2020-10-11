class Turrets: Turrets
{
	class MainTurret: MainTurret
	{
		class Turrets: Turrets
		{
			class CommanderOptics: CommanderOptics
			{
				turretInfoType = RscOptics_MBT_02_commander;
				showCrewAim = 1;
				startEngine = false;
				turretFollowFreeLook = 2;
                // Rotation and elevation
				minElev = -25;
				maxElev = 60;
				initElev = 0;
				minTurn = -360;
				maxTurn = 360;
				initTurn = 0;
				minCamElev = -90;
				maxCamElev = 90;
				minOutElev = -10;
				maxOutElev = 25;
				initOutElev = 0;
				minOutTurn = -90;
				maxOutTurn = 40;
				initOutTurn = 0;
				maxHorizontalRotSpeed = 1.8;
				maxVerticalRotSpeed = 1.8;
                // Weapons and magazines
				weapons[] = {SmokeLauncher};
				magazines[] = {SmokeLauncherMag};
				soundServo[] = {"\A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_comm",0.56234133,1,30};
				soundServoVertical[] = {"\A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_comm",0.56234133,1,30};
				stabilizedInAxes = StabilizedInAxesBoth;
				gunnerHasFlares = true;
                // Interior and animations
				outGunnerMayFire = false;
				inGunnerMayFire = true;
				forceHideGunner = false;
				viewGunnerInExternal = true;
				gunnerAction = Commander_APC_Wheeled_03_cannon_F_out;
				gunnerInAction = Commander_APC_Wheeled_03_cannon_F_in;
				gunnerGetInAction = GetInAMV_cargo;
				gunnerGetOutAction = GetOutLow;
				isPersonTurret = true;
				personTurretAction = vehicle_turnout_1;
				gunnerForceOptics = false;
				usepip = 2;
				LODTurnedIn = 1100;
				LODTurnedOut = 1;
				LODOpticsIn = 0;
				animationSourceStickX = com_turret_control_x;
				animationSourceStickY = com_turret_control_y;
				gunnerRightHandAnimName = com_turret_control;
				viewGunnerShadowAmb = 0.5;
				viewGunnerShadowDiff = 0.05;
                // Optics
				gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Commander_OPFOR_F.p3d";
				gunnerOpticsEffect[] = {};
				memoryPointGunnerOutOptics = commanderview;
				memoryPointGunnerOptics = commanderview;
				class ViewGunner: ViewGunner
				{
					initAngleX = -10;
					initAngleY = 0;
					initFov = 0.9;
					minFov = 0.25;
					maxFov = 1.25;
					minAngleX = -65;
					maxAngleX = 85;
					minAngleY = -150;
					maxAngleY = 150;
					minMoveX = -0.075;
					maxMoveX = 0.075;
					minMoveY = -0.075;
					maxMoveY = 0.075;
					minMoveZ = -0.075;
					maxMoveZ = 0.1;
				};
				class ViewOptics: ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.31;
					minFov = 0.034;
					maxFov = 0.31;
					visionMode[] =
                    {
                        Normal,
                        TI
                    };
					thermalMode[] =
                    {
                        TiWHot,
                        TiBHot
                    };
				};
				class OpticsIn: Optics_Commander_02
				{
					class Wide: Wide{};
					class Medium: Medium{};
					class Narrow: Narrow{};
				};
                // Damage and hitpoints
				class HitPoints
				{
					class HitComTurret
					{
						armor = 0.5;
						material = -1;
						armorComponent = hit_com_turret;
						name = hit_com_turret_point;
						visual = vezVelitele;
						passThrough = 0;
						minimalHit = 0.05;
						explosionShielding = 1;
						radius = 0.15;
						isTurret = true;
					};
					class HitComGun
					{
						armor = 0.1;
						material = -1;
						armorComponent = hit_com_gun;
						name = hit_com_gun_point;
						visual = zbranVelitele;
						passThrough = 0;
						minimalHit = 0.05;
						explosionShielding = 1;
						radius = 0.15;
						isGun = true;
					};
				};
			};
		};
		body = mainTurret;
		gun = mainGun;
        turretInfoType = RscOptics_MBT_02_gunner;
		commanding = 1;
        showCrewAim = 2;
		startEngine = false;
        // Weapons and magazines
		weapons[] =
        {
            autocannon_30mm_APC_Wheeled_04,
            LMG_coax_ext,
            missiles_titan
        };
		magazines[] =
        {
			mag_4(140Rnd_30mm_MP_shells_Tracer_Green),
			mag_4(60Rnd_30mm_APFSDS_shells_Tracer_Green),
			mag_10(200Rnd_762x51_Belt_Green),
			mag_2(4Rnd_GAT_missiles_O)
        };
		soundServo[] = {"\A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_gunner",0.39810717,1,30};
		soundServoVertical[] = {"\A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_gunner_vertical",0.39810717,1,30};
		stabilizedInAxes = StabilizedInAxesBoth;
		selectionFireAnim = zasleh2;
		memoryPointGun[] = {"usti hlavne3"};
        // Rotation and elevation
		minElev = -5;
		maxElev = 60;
		initElev = 0;
        minTurn = -360;
        maxTurn = 360;
		initTurn = 0;
		minCamElev = -90;
		maxCamElev = 90;
        // Interior and animations
		gunnerAction = Gunner_APC_Wheeled_04_cannon_F_out;
		gunnerInAction = Gunner_APC_Wheeled_04_cannon_F_in;
		gunnerForceOptics = true;
		gunnerGetInAction = GetInAMV_cargo;
		gunnerGetOutAction = GetOutLow;
		forceHideGunner = true;
		viewGunnerInExternal = true;
		castGunnerShadow = true;
		inGunnerMayFire = true;
		outGunnerMayFire = false;
		usepip = 1;
		LODTurnedIn = 1100;
		LODTurnedOut = 1;
		LODOpticsIn = 0;
		animationSourceStickX = turret_control_x;
		animationSourceStickY = turret_control_y;
		gunnerRightHandAnimName = turret_control;
		viewGunnerShadowAmb = 0.5;
		viewGunnerShadowDiff = 0.05;
        // Optics
		discreteDistance[] =
        {
            100,
            200,
            300,
            400,
            500,
            600,
            700,
            800,
            900,
            1000,
            1100,
            1200,
            1300,
            1400,
            1500,
            1600,
            1700,
            1800,
            1900,
            2000,
            2100,
            2200,
            2300,
            2400,
            2500,
            2600,
            2700,
            2800,
            2900,
            3000
        };
		discreteDistanceInitIndex = 2;
		gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Gunner_02_F.p3d";
		memoryPointGunnerOptics = gunnerview;
		class ViewGunner: ViewGunner
		{
			initAngleX = -10;
			initAngleY = 0;
			initFov = 0.9;
			minFov = 0.25;
			maxFov = 1.25;
			minAngleX = -65;
			maxAngleX = 85;
			minAngleY = -150;
			maxAngleY = 150;
			minMoveX = -0.075;
			maxMoveX = 0.075;
			minMoveY = -0.075;
			maxMoveY = 0.075;
			minMoveZ = -0.075;
			maxMoveZ = 0.1;
		};
		class ViewOptics: RCWSOptics
		{
			visionMode[] =
            {
                Normal,
                TI
            };
		};
		class OpticsIn: Optics_Gunner_APC_03
		{
			class Wide: Wide{};
			class Medium: Medium{};
			class Narrow: Narrow{};
		};
        // Damage and hitpoints
		class HitPoints
		{
			class HitTurret
			{
				armor = 1.5;
				material = -1;
				armorComponent = hit_main_turret;
				name = hit_main_turret_point;
				visual = vez;
				passThrough = 0;
				minimalHit = 0.1;
				explosionShielding = 0.2;
				radius = 0.2;
				isTurret = true;
			};
			class HitGun
			{
				armor = 1.5;
				material = -1;
				armorComponent = hit_main_gun;
				name = hit_main_gun_point;
				visual = zbran;
				passThrough = 0;
				minimalHit = 0.1;
				explosionShielding = 0.4;
				radius = 0.2;
				isGun = true;
			};
		};
	};
};