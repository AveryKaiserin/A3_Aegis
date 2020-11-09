class CfgWeapons
{
    /* Rifles inheritance */
	#include "P:\A3_Aegis\rifles.hpp"

    /* Bases for different weapons */
	class arifle_SCAR_base_F: Rifle_Base_F
	{
		model = "\A3_Aegis\Weapons_F_Aegis\Rifles\SCAR\SCAR_F.p3d";
		UiPicture = "\A3\Weapons_F\Data\UI\icon_regular_CA.paa";
		descriptionShort = $STR_A3_A_CfgWeapons_arifle_SCAR_base_F1;
		class Library
		{
			libTextDesc = $STR_A3_A_CfgWeapons_arifle_SCAR_base_F_Library0;
		};

        /* Textures and materials */
		hiddenSelections[] =
		{
			Camo1,  // Lower receiver
			Camo2   // Upper receiver
		};
		hiddenSelectionsTextures[] =
		{
			"\A3_Aegis\Weapons_F_Aegis\Rifles\SCAR\Data\SCAR_01_CO.paa",
			"\A3_Aegis\Weapons_F_Aegis\Rifles\SCAR\Data\SCAR_02_CO.paa"
		};

        /* Animations parameters */
		handAnim[] =
		{
			OFP2_ManSkeleton,
			"\A3\Weapons_F_Exp\Rifles\SPAR_01\Data\Anim\SPAR_01.rtm"
		};
		reloadAction = GestureReloadSPAR_01;

        /* Weapon ammunition */ 
		magazines[] = {20Rnd_762x51_Mag};

        /* Weapon handling */
		htMin = 12;
		htMax = 800;
		inertia = 0.6;
		aimTransitionSpeed = 0.8;
		dexterity = 1.5;
		initSpeed = 715;
		recoil = recoil_scar;
		maxZeroing = 1000;

        /* Weapon slots */
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: asdg_MuzzleSlot_762
			{
				iconPosition[] =
				{
					0.12,   // X
					0.43    // y
				};
				iconScale = 0.2;
			};
			class CowsSlot: asdg_OpticRail1913
			{
				iconPosition[] =
				{
					0.5,    // X
					0.36    // y
				};
				iconScale = 0.2;
			};
			class PointerSlot: asdg_FrontSideRail
			{
				iconPosition[] =
				{
					0.33,   // X
					0.4     // y
				};
				iconScale = 0.2;
			};
			class UnderBarrelSlot: asdg_UnderSlot
			{
				iconPosition[] =
				{
					0.3,    // X
					0.8     // y
				};
				iconScale = 0.3;
			};
			mass = 120;
		};
		
        /* Weapon modes */
        modes[] =
		{
			Single,
			FullAuto,
			single_medium_optics1,
			single_medium_optics2,
			fullauto_medium
		};
		class Single: Mode_SemiAuto
		{
			reloadTime = RPM_600;
			dispersion = 0.00087;
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 350;
			midRangeProbab = 0.7;
			maxRange = 500;
			maxRangeProbab = 0.05;
		};
		class FullAuto: Mode_FullAuto
		{
			reloadTime = RPM_600;
			dispersion = 0.00087;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.05;
			aiRateOfFire = 1e-06;
		};
		class fullauto_medium: FullAuto
		{
			showToPlayer = false;
			burst = 3;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 50;
			midRangeProbab = 0.7;
			maxRange = 100;
			maxRangeProbab = 0.05;
			aiRateOfFire = 2.0;
		};
		class single_medium_optics1: Single
		{
			requiredOpticType = MEDIUM_OPTIC;
			showToPlayer = false;
			minRange = 2;
			minRangeProbab = 0.05;
			midRange = 300;
			midRangeProbab = 0.8;
			maxRange = 500;
			maxRangeProbab = 0.01;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 300;
		};
		class single_medium_optics2: single_medium_optics1
		{
			requiredOpticType = FAR_OPTIC;
			minRange = 300;
			minRangeProbab = 0.05;
			midRange = 500;
			midRangeProbab = 0.7;
			maxRange = 700;
			maxRangeProbab = 0.05;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
	  	};

        /* ACE parameters */
		ACE_barrelTwist = 304.8;
		ACE_barrelLength = 406.4;
		ACE_railHeightAboveBore = 4.7;
	};
	class arifle_SCAR_GL_base_F: arifle_SCAR_base_F
	{
		UiPicture = "\A3\Weapons_F\Data\UI\icon_gl_CA.paa";
		model = "\A3_Aegis\Weapons_F_Aegis\Rifles\SCAR\SCAR_GL_F.p3d";

        /* Textures and materials */
		hiddenSelections[] =
		{
			Camo1,  // Lower receiver
			Camo2,  // Upper receiver
			Camo3   // UGL
		};
		hiddenSelectionsTextures[] =
		{
			"\A3_Aegis\Weapons_F_Aegis\Rifles\SCAR\Data\SCAR_01_CO.paa",
			"\A3_Aegis\Weapons_F_Aegis\Rifles\SCAR\Data\SCAR_02_CO.paa",
			"\A3_Aegis\Weapons_F_Aegis\Rifles\SA80\Data\SA80_F_GL_snd_CO.paa"
		};

        /* Animations and parameters */
		handAnim[] =
		{
			OFP2_ManSkeleton,
			"\A3\Weapons_F_Exp\Rifles\SPAR_01\Data\Anim\SPAR_01_GL.rtm"
		};

        /* Weapong handling */
		inertia = 0.6;
		dexterity = 1.4;
		aimTransitionSpeed = 0.7;
		initSpeed = 690;

        /* Weapon slots */
	  	class WeaponSlotsInfo: WeaponSlotsInfo
		{
            /* Weight */
	    	mass = 120;
	  	};

        /* Weapon modes */
		class Single: Single
		{
			dispersion = 0.00102;
		};
		class FullAuto: FullAuto
		{
			dispersion = 0.00102;
		};

        /* Grenade launcher */
		muzzles[] =
		{
			this,
			EGLM
		};
		class EGLM: UGL_F
		{
			displayName = $STR_A3_A_CfgWeapons_arifle_SCAR_GL_base_F_EGLM0;

            /* Optics and zeroing */
			useModelOptics = false;
			useExternalOptic = false;
			cameraDir = OP_look;
			discreteDistance[] =
			{
				50,
				75,
				100,
				150,
				200,
				250,
				300,
				350,
				400
			};
			discreteDistanceCameraPoint[] =
			{
				OP_eye_50,
				OP_eye_75,
				OP_eye_100,
				OP_eye_150,
				OP_eye_200,
				OP_eye_250,
				OP_eye_300,
				OP_eye_350,
				OP_eye_400
			};
			discreteDistanceInitIndex = 1;

            /* Animations and parameters */
			reloadAction = GestureReloadSPARUGL;
			magazineReloadSwitchPhase = 0.4;
		};

        /* ACE parameters */
        ACE_barrelLength = 330.2;
	};
	class arifle_SCAR_short_base_F: arifle_SCAR_base_F
	{
		model = "\A3_Aegis\Weapons_F_Aegis\Rifles\SCAR\SCAR_short_F.p3d";

        /* Weapong handling */
		inertia = 0.5;
		dexterity = 1.6;
		aimTransitionSpeed = 1;
		initSpeed = 690;

        /* Weapon slots */
	  	class WeaponSlotsInfo: WeaponSlotsInfo
		{
            /* Weight */
	    	mass = 100;
	  	};

        /* Weapon modes */
		class Single: Single
		{
			dispersion = 0.00102;
		};
		class FullAuto: FullAuto
		{
			dispersion = 0.00102;
		};

        /* ACE parameters */
        ACE_barrelLength = 330.2;
	};
	class arifle_SCAR_grip_base_F: arifle_SCAR_base_F
	{
		model = "\A3_Aegis\Weapons_F_Aegis\Rifles\SCAR\SCAR_grip_F.p3d";

        /* Animations and parameters */
		handAnim[] =
		{
			OFP2_ManSkeleton,
			"\A3\Weapons_F_Exp\Rifles\SPAR_02\Data\Anim\SPAR_02.rtm"
		};

        /* Weapon handling */
		dexterity = 1.6;
		aimTransitionSpeed = 1;

        /* Weapon slots */
	  	class WeaponSlotsInfo: WeaponSlotsInfo
		{
            /* Weight */
	    	mass = 125;
	  	};
	};

    /* Bases for different textures */
	class arifle_SCAR_black_base_F: arifle_SCAR_base_F
	{
		hiddenSelectionsTextures[] =
		{
			"\A3_Aegis\Weapons_F_Aegis\Rifles\SCAR\Data\SCAR_01_black_CO.paa",
			"\A3_Aegis\Weapons_F_Aegis\Rifles\SCAR\Data\SCAR_02_black_CO.paa"
		};
	};
	class arifle_SCAR_GL_black_base_F: arifle_SCAR_GL_base_F
	{
		hiddenSelectionsTextures[] =
		{
			"\A3_Aegis\Weapons_F_Aegis\Rifles\SCAR\Data\SCAR_01_black_CO.paa",
			"\A3_Aegis\Weapons_F_Aegis\Rifles\SCAR\Data\SCAR_02_black_CO.paa",
			"\A3_Aegis\Weapons_F_Aegis\Rifles\SA80\Data\SA80_F_GL_CO.paa"
		};
	};
	class arifle_SCAR_short_black_base_F: arifle_SCAR_short_base_F
	{
		hiddenSelectionsTextures[] =
		{
			"\A3_Aegis\Weapons_F_Aegis\Rifles\SCAR\Data\SCAR_01_black_CO.paa",
			"\A3_Aegis\Weapons_F_Aegis\Rifles\SCAR\Data\SCAR_02_black_CO.paa"
		};
	};
	class arifle_SCAR_grip_black_base_F: arifle_SCAR_grip_base_F
	{
		hiddenSelectionsTextures[] =
		{
			"\A3_Aegis\Weapons_F_Aegis\Rifles\SCAR\Data\SCAR_01_black_CO.paa",
			"\A3_Aegis\Weapons_F_Aegis\Rifles\SCAR\Data\SCAR_02_black_CO.paa"
		};
	};
	class arifle_SCAR_khaki_base_F: arifle_SCAR_base_F
	{
		hiddenSelectionsTextures[] =
		{
			"\A3_Aegis\Weapons_F_Aegis\Rifles\SCAR\Data\SCAR_01_khaki_CO.paa",
			"\A3_Aegis\Weapons_F_Aegis\Rifles\SCAR\Data\SCAR_02_khaki_CO.paa"
		};
	};
	class arifle_SCAR_GL_khaki_base_F: arifle_SCAR_GL_base_F
	{
		hiddenSelectionsTextures[] =
		{
			"\A3_Aegis\Weapons_F_Aegis\Rifles\SCAR\Data\SCAR_01_khaki_CO.paa",
			"\A3_Aegis\Weapons_F_Aegis\Rifles\SCAR\Data\SCAR_02_khaki_CO.paa",
			"\A3_Aegis\Weapons_F_Aegis\Rifles\SA80\Data\SA80_F_GL_khk_CO.paa"
		};
	};
	class arifle_SCAR_short_khaki_base_F: arifle_SCAR_short_base_F
	{
		hiddenSelectionsTextures[] =
		{
			"\A3_Aegis\Weapons_F_Aegis\Rifles\SCAR\Data\SCAR_01_khaki_CO.paa",
			"\A3_Aegis\Weapons_F_Aegis\Rifles\SCAR\Data\SCAR_02_khaki_CO.paa"
		};
	};
	class arifle_SCAR_grip_khaki_base_F: arifle_SCAR_grip_base_F
	{
		hiddenSelectionsTextures[] =
		{
			"\A3_Aegis\Weapons_F_Aegis\Rifles\SCAR\Data\SCAR_01_khaki_CO.paa",
			"\A3_Aegis\Weapons_F_Aegis\Rifles\SCAR\Data\SCAR_02_khaki_CO.paa"
		};
	};

    /* Accessible weapons */
	class arifle_SCAR_F: arifle_SCAR_base_F
	{
		author = $STR_A3_A_AveryTheKitty_and_Garkain;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_arifle_SCAR_F0;
		picture = "\A3_Aegis\Weapons_F_Aegis\Rifles\SCAR\Data\UI\icon_arifle_SCAR_F_X_CA.paa";
		baseWeapon = arifle_SCAR_F;
	};
	class arifle_SCAR_GL_F: arifle_SCAR_GL_base_F
	{
		author = $STR_A3_A_AveryTheKitty_and_Garkain;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_arifle_SCAR_GL_F0;
		picture = "\A3_Aegis\Weapons_F_Aegis\Rifles\SCAR\Data\UI\icon_arifle_SCAR_GL_F_X_CA.paa";
		baseWeapon = arifle_SCAR_GL_F;
	};
	class arifle_SCAR_short_F: arifle_SCAR_short_base_F
	{
		author = $STR_A3_A_AveryTheKitty_and_Garkain;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_arifle_SCAR_short_F0;
		picture = "\A3_Aegis\Weapons_F_Aegis\Rifles\SCAR\Data\UI\icon_arifle_SCAR_short_F_X_CA.paa";
		baseWeapon = arifle_SCAR_short_F;
	};
	class arifle_SCAR_grip_F: arifle_SCAR_grip_base_F
	{
		author = $STR_A3_A_AveryTheKitty_and_Garkain;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_arifle_SCAR_grip_F0;
		picture = "\A3_Aegis\Weapons_F_Aegis\Rifles\SCAR\Data\UI\icon_arifle_SCAR_grip_F_X_CA.paa";
		baseWeapon = arifle_SCAR_grip_F;
	};
	class arifle_SCAR_black_F: arifle_SCAR_black_base_F
	{
		author = $STR_A3_A_AveryTheKitty_and_Garkain;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_arifle_SCAR_black_F0;
		picture = "\A3_Aegis\Weapons_F_Aegis\Rifles\SCAR\Data\UI\icon_arifle_SCAR_black_F_X_CA.paa";
		baseWeapon = arifle_SCAR_black_F;
	};
	class arifle_SCAR_GL_black_F: arifle_SCAR_GL_black_base_F
	{
		author = $STR_A3_A_AveryTheKitty_and_Garkain;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_arifle_SCAR_GL_black_F0;
		picture = "\A3_Aegis\Weapons_F_Aegis\Rifles\SCAR\Data\UI\icon_arifle_SCAR_GL_black_F_X_CA.paa";
		baseWeapon = arifle_SCAR_GL_black_F;
	};
	class arifle_SCAR_short_black_F: arifle_SCAR_short_black_base_F
	{
		author = $STR_A3_A_AveryTheKitty_and_Garkain;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_arifle_SCAR_short_black_F0;
		picture = "\A3_Aegis\Weapons_F_Aegis\Rifles\SCAR\Data\UI\icon_arifle_SCAR_short_black_F_X_CA.paa";
		baseWeapon = arifle_SCAR_short_black_F;
	};
	class arifle_SCAR_grip_black_F: arifle_SCAR_grip_black_base_F
	{
		author = $STR_A3_A_AveryTheKitty_and_Garkain;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_arifle_SCAR_grip_black_F0;
		picture = "\A3_Aegis\Weapons_F_Aegis\Rifles\SCAR\Data\UI\icon_arifle_SCAR_grip_black_F_X_CA.paa";
		baseWeapon = arifle_SCAR_grip_black_F;
	};
	class arifle_SCAR_khaki_F: arifle_SCAR_khaki_base_F
	{
		author = $STR_A3_A_AveryTheKitty_and_Garkain;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_arifle_SCAR_khaki_F0;
		picture = "\A3_Aegis\Weapons_F_Aegis\Rifles\SCAR\Data\UI\icon_arifle_SCAR_khaki_F_X_CA.paa";
		baseWeapon = arifle_SCAR_khaki_F;
	};
	class arifle_SCAR_GL_khaki_F: arifle_SCAR_GL_khaki_base_F
	{
		author = $STR_A3_A_AveryTheKitty_and_Garkain;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_arifle_SCAR_GL_khaki_F0;
		picture = "\A3_Aegis\Weapons_F_Aegis\Rifles\SCAR\Data\UI\icon_arifle_SCAR_GL_khaki_F_X_CA.paa";
		baseWeapon = arifle_SCAR_GL_khaki_F;
	};
	class arifle_SCAR_short_khaki_F: arifle_SCAR_short_khaki_base_F
	{
		author = $STR_A3_A_AveryTheKitty_and_Garkain;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_arifle_SCAR_short_khaki_F0;
		picture = "\A3_Aegis\Weapons_F_Aegis\Rifles\SCAR\Data\UI\icon_arifle_SCAR_short_khaki_F_X_CA.paa";
		baseWeapon = arifle_SCAR_short_khaki_F;
	};
	class arifle_SCAR_grip_khaki_F: arifle_SCAR_grip_khaki_base_F
	{
		author = $STR_A3_A_AveryTheKitty_and_Garkain;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_arifle_SCAR_grip_khaki_F0;
		picture = "\A3_Aegis\Weapons_F_Aegis\Rifles\SCAR\Data\UI\icon_arifle_SCAR_grip_khaki_F_X_CA.paa";
		baseWeapon = arifle_SCAR_grip_khaki_F;
	};

    /* Weapons with accessories for units */
	#include "cfgWeaponsAcc.hpp"
};