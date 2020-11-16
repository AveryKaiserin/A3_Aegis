class CfgWeapons
{
    /* Definitions */
    
	/* Inheritance Tree */
	class Default
	{
        fireLightDiffuse[] =
        {
            0.937,  // R
            0.322,  // G
            0.259   // B
        };
		fireLightDuration = 0.005;
	};
	class MGunCore;
	class CannonCore;
	class RocketPods;
	class MGun;
	class LMG_RCWS: MGun
	{
		magazines[] +=
		{
			200Rnd_762x51_Belt,
			1000Rnd_762x51_Belt,
			2000Rnd_762x51_Belt,
			200Rnd_762x51_Belt_Red,
			200Rnd_762x51_Belt_Green,
			200Rnd_762x51_Belt_Yellow,
			1000Rnd_762x51_Belt_Red,
			1000Rnd_762x51_Belt_Green,
			1000Rnd_762x51_Belt_Yellow,
			2000Rnd_762x51_Belt_Red,
			2000Rnd_762x51_Belt_Green,
			2000Rnd_762x51_Belt_Yellow,
			200Rnd_762x51_Belt_T_Red,
			200Rnd_762x51_Belt_T_Green,
			200Rnd_762x51_Belt_T_Yellow,
			1000Rnd_762x51_Belt_T_Red,
			1000Rnd_762x51_Belt_T_Green,
			1000Rnd_762x51_Belt_T_Yellow,
			2000Rnd_762x51_Belt_T_Red,
			2000Rnd_762x51_Belt_T_Green,
			2000Rnd_762x51_Belt_T_Yellow,
			1000Rnd_762x51_Belt_T_Red_Splash,
			1000Rnd_762x51_Belt_T_Green_Splash,
			1000Rnd_762x51_Belt_T_Yellow_Splash,
			2000Rnd_762x51_Belt_T_Red_Splash,
			2000Rnd_762x51_Belt_T_Green_Splash,
			2000Rnd_762x51_Belt_T_Yellow_Splash,
			PylonWeapon_2000Rnd_762x51_Belt_T_Red,
			PylonWeapon_2000Rnd_762x51_Belt_T_Green,
			PylonWeapon_2000Rnd_762x51_Belt_T_Yellow
		};
		class manual;
	};
	class LMG_Minigun: LMG_RCWS
	{
		displayName = $STR_A3_A_CfgWeapons_LMG_Minigun0;
        autoReload = false;
        backgroundReload = false;
		class GunParticles
		{
			class effect1
			{
				effectName = MachineGunCartridge;
			};
			class effect2;
			class effect3
			{
				positionName = machinegun_eject_pos;
				directionName = machinegun_eject_dir;
				effectName = MachineGunEject2;
			};
		};
		class manual: MGun
		{
			displayName = $STR_A3_A_CfgWeapons_LMG_Minigun0;
		};
	};
	class LMG_Minigun_heli: LMG_Minigun
	{
        autoReload = true;
        backgroundReload = true;
		class GunParticles: GunParticles
		{
			class effect1: effect1
			{
				effectName = MachineGunCartridge;
			};
			class effect2: effect2{};
			class effect3: effect3{};
		};
		class manual: manual
		{
			displayName = $STR_A3_A_CfgWeapons_LMG_Minigun0;
		};
	};
	class HMG_127: LMG_RCWS{};
	class HMG_01: HMG_127
	{
		class GunParticles
		{
			class effect3
			{
				positionName = machinegun_eject_pos;
				directionName = machinegun_eject_dir;
				effectName = MachineGunEject;
			};
		};
	};
	class HMG_static: HMG_01
    {
        autoReload = false;
        backgroundReload = false;
    };
	class HMG_M2: HMG_01
    {
        autoReload = false;
        backgroundReload = false;
    };
	class SmokeLauncher;
	class CMFlareLauncher: SmokeLauncher
	{
		class Single;
		class Burst;
		class AIBurst;
	};
	class M134_minigun: MGunCore
	{
		class GunParticles
		{
			class effect3
			{
				positionName = machinegun_eject_pos;
				directionName = machinegun_eject_dir;
				effectName = MachineGunEject2;
			};
			class effect4
			{
				positionName = machinegun_eject_2_pos;
				directionName = machinegun_eject_2_dir;
				effectName = MachineGunEject2;
			};
		};
	};
	class MissileLauncher;
	class GMG_F;
	class GMG_20mm: GMG_F
	{
		displayName = $STR_A3_A_CfgWeapons_GMG_20mm0;
        autoReload = false;
        backgroundReload = false;
		class manual: GMG_F
		{
			displayName = $STR_A3_A_CfgWeapons_GMG_20mm0;
		};
	};
	class autocannon_Base_F;
	class autocannon_30mm_CTWS: autocannon_Base_F
	{
		class HE: autocannon_Base_F
        {
            class player;
        };
		class AP: autocannon_Base_F
        {
            class player;
        };
    };
	class autocannon_40mm_CTWS: autocannon_Base_F
	{
		class HE: autocannon_Base_F
		{
			magazines[] +=
			{
				120Rnd_40mm_GPR_shells,
				120Rnd_40mm_GPR_Tracer_Red_shells,
				120Rnd_40mm_GPR_Tracer_Green_shells,
				120Rnd_40mm_GPR_Tracer_Yellow_shells
			};
		};
		class AP: autocannon_Base_F
		{
			magazines[] +=
			{
				80Rnd_40mm_APFSDS_shells,
				80Rnd_40mm_APFSDS_Tracer_Red_shells,
				80Rnd_40mm_APFSDS_Tracer_Green_shells,
				80Rnd_40mm_APFSDS_Tracer_Yellow_shells
			};
		};
	};
	class gatling_20mm: CannonCore
	{
		magazines[] +=
		{
			500Rnd_20mm_shells,
			PylonWeapon_250Rnd_20mm_shells
		};
	};
	class gatling_30mm_base: CannonCore
	{
		magazines[] +=
		{
			250Rnd_30mm_HE_shells_Tracer_Green,
			250Rnd_30mm_HE_shells_Tracer_Yellow
		};
	};
	class gatling_30mm: gatling_30mm_base
	{
		class HE: gatling_30mm_base
		{
			magazines[] +=
			{
				250Rnd_30mm_HE_shells_Tracer_Green,
				250Rnd_30mm_HE_shells_Tracer_Yellow
			};
		};
	};
    class missiles_titan;
	class missiles_titan_static: missiles_titan
	{
        autoReload = false;
        backgroundReload = false;
	};
	class rockets_Skyfire: RocketPods
	{
		magazines[] += {PylonRack_20Rnd_Rocket_80mm};
	};
	class LMG_Minigun2: LMG_Minigun
	{
		class GunParticles
		{
			class effect1
			{
				effectName = MachineGunCartridge;
			};
			class effect3
			{
				positionName = machinegun_eject_pos;
				directionName = machinegun_eject_dir;
				effectName = MachineGunEject2;
			};
		};
	};
	class LMG_Minigun_Transport: LMG_Minigun
	{
		class GunParticles
		{
			class effect1
			{
				effectName = MachineGunCartridge;
			};
			class effect3
			{
				positionName = machinegun_eject_pos;
				directionName = machinegun_eject_dir;
				effectName = MachineGunEject2;
			};
		};
	};
	class LMG_Minigun_Transport2: LMG_Minigun_Transport
	{
		class GunParticles
		{
			class effect1
			{
				effectName = MachineGunCartridge;
			};
			class effect3
			{
				positionName = machinegun_eject_pos;
				directionName = machinegun_eject_dir;
				effectName = MachineGunEject2;
			};
		};
	};
	class gatling_25mm: CannonCore
	{
		magazines[] += {PylonWeapon_220Rnd_25mm_shells};
		ballisticsComputer = CanSeeOptics+CanSeeEar;
		showAimCursorInternal = false;
		class manual: CannonCore
		{
			class StandardSound
			{
				begin1[] = {"\A3\Sounds_F_Jets\weapons\cannons\Fighter_Gun20mm_AA_1",2,1,3000};
				begin2[] = {"\A3\Sounds_F_Jets\weapons\cannons\Fighter_Gun20mm_AA_2",2,1,3000};
				begin3[] = {"\A3\Sounds_F_Jets\weapons\cannons\Fighter_Gun20mm_AA_3",2,1,3000};
				soundBegin[] =
				{
					begin1,1/3,
					begin2,1/3,
					begin3,1/3
				};
			};
			autoFire = true;
			burst = 1;
		};
	};
	class autocannon_35mm: CannonCore
	{
		magazines[] +=
		{
			500Rnd_35mm_AA_shells,
			500Rnd_35mm_AA_shells_Tracer_Red,
			500Rnd_35mm_AA_shells_Tracer_Green,
			500Rnd_35mm_AA_shells_Tracer_Yellow
		};
		class manual: CannonCore
		{
			reloadTime = 0.109;
		};
	};
	class rockets_230mm_GAT: RocketPods
	{
		magazines[] +=
		{
			12Rnd_230mm_rockets_guided,
			12Rnd_230mm_rockets_LG,
			PylonMissile_12Rnd_230mm_rockets,
			PylonMissile_12Rnd_230mm_rockets_cluster,
			PylonMissile_12Rnd_230mm_rockets_guided,
			PylonMissile_12Rnd_230mm_rockets_LG
		};
	};
	class LMG_coax: LMG_RCWS
	{
        autoReload = false;
        backgroundReload = false;
		magazines[] +=
		{
			200Rnd_762x51_Belt,
			250Rnd_762x51_Belt,
			1000Rnd_762x51_Belt,
			2000Rnd_762x51_Belt,
			200Rnd_762x51_Belt_Red,
			200Rnd_762x51_Belt_Green,
			200Rnd_762x51_Belt_Yellow,
			250Rnd_762x51_Belt_Red,
			250Rnd_762x51_Belt_Green,
			250Rnd_762x51_Belt_Yellow,
			1000Rnd_762x51_Belt_Red,
			1000Rnd_762x51_Belt_Green,
			1000Rnd_762x51_Belt_Yellow,
			2000Rnd_762x51_Belt_Red,
			2000Rnd_762x51_Belt_Green,
			2000Rnd_762x51_Belt_Yellow,
			200Rnd_762x51_Belt_T_Red,
			200Rnd_762x51_Belt_T_Green,
			200Rnd_762x51_Belt_T_Yellow,
			250Rnd_762x51_Belt_T_Red,
			250Rnd_762x51_Belt_T_Green,
			250Rnd_762x51_Belt_T_Yellow,
			1000Rnd_762x51_Belt_T_Red,
			1000Rnd_762x51_Belt_T_Green,
			1000Rnd_762x51_Belt_T_Yellow,
			2000Rnd_762x51_Belt_T_Red,
			2000Rnd_762x51_Belt_T_Green,
			2000Rnd_762x51_Belt_T_Yellow
		};
	};
	class LMG_coax_ext: LMG_coax
	{
        autoReload = true;
        backgroundReload = true;
	};
	class Gatling_30mm_Plane_CAS_01_F: CannonCore
	{
		magazines[] += {1350Rnd_Gatling_30mm_Plane_CAS_01_F};
	};
	class Rocket_04_HE_Plane_CAS_01_F: RocketPods
	{
		class Burst: RocketPods
		{
			autoFire = true;
		};
	};
	class HMG_127_MBT: HMG_static
    {
        autoReload = true;
        backgroundReload = true;
    };
	class Launcher_Base_F;
    class GrenadeLauncher;
	class UGL_F: GrenadeLauncher
    {
        // Test, maybe remove this and revert the other standalone grenade launchers to 30 meters
		class Single: Mode_SemiAuto
		{
            minRange = 0;
        };
    };
	class RifleCore;
	class Rifle: RifleCore
	{
		zeroingSound[] = {"\A3\Sounds_F\arsenal\sfx\shared\zeroing_knob_tick_metal",db0,1,5};
	};
	class Rifle_Base_F: Rifle
	{
		class GunParticles;
		class WeaponSlotsInfo;
	};
	class Rifle_Short_Base_F: Rifle_Base_F
	{
		class GunParticles;
		class WeaponSlotsInfo;
	};
	class Rifle_Long_Base_F: Rifle_Base_F
	{
		class GunParticles;
		class WeaponSlotsInfo;
	};
	class Pistol;
	class Pistol_Base_F: Pistol
	{
		class GunParticles;
		class WeaponSlotsInfo;
	};
	class Throw: GrenadeLauncher
	{
        muzzles[] +=
        {
            HandGrenade_EastMuzzle,
            HandGrenade_GuerMuzzle
        };
        class ThrowMuzzle;
		class HandGrenade_EastMuzzle: ThrowMuzzle
		{
			magazines[] = {HandGrenade_East};
		};
		class HandGrenade_GuerMuzzle: ThrowMuzzle
		{
			magazines[] = {HandGrenade_Guer};
		};
    };
	class ItemCore;
	class Binocular;
	class NVGoggles: Binocular
	{
		class ItemInfo;
	};
	class Integrated_NVG_F: NVGoggles
	{
		modelOptics = "\A3\Weapons_F\Reticle\optics_empty.p3d";
	};
	class Integrated_NVG_TI_0_F: NVGoggles
	{
		modelOptics = "\A3\Weapons_F\Reticle\optics_empty.p3d";
	};
	class Integrated_NVG_TI_1_F: NVGoggles
	{
		modelOptics = "\A3\Weapons_F\Reticle\optics_empty.p3d";
	};
	class Laserdesignator;
	class Laserdesignator_02;
	class launch_RPG32_F;
	class launch_Titan_base;
	class launch_Titan_short_base;
	class GM6_base_F: Rifle_Long_Base_F{};
	class srifle_GM6_F: GM6_base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class PointerSlot: asdg_FrontSideRail
			{
				iconPosition[] =
				{
					0.05, // X
					0.38 // Y
				};
				iconScale = 0.2;
			};
		};
	};
	class LRR_base_F: Rifle_Long_Base_F
	{
		class Single: Mode_SemiAuto
		{
			sounds[] =
			{
				StandardSound,
				SilencedSound
			};
		};
	};
	class srifle_LRR_F: LRR_base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: MuzzleSlot
			{
				linkProxy = "\A3\Data_F\proxies\weapon_slots\MUZZLE";
				compatibleItems[] =
				{
					muzzle_snds_408_black,
					muzzle_snds_408_green,
					muzzle_snds_408_sand
				};
				iconPosition[] =
				{
					0.05, // X
					0.38 // Y
				};
				iconScale = 0.2;
			};
		};
	};
    class EBR_base_F: Rifle_Long_Base_F{};
	class srifle_EBR_F: EBR_base_F
    {
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
			class MuzzleSlot: asdg_MuzzleSlot_762
            {
                iconPosition[] =
                {
                    0.05, // X
                    0.38 // Y
                };
				iconScale = 0.2;
            };
        };
    };
	class DMR_01_base_F: Rifle_Long_Base_F
	{
		class WeaponSlotsInfo;
	};
	class srifle_DMR_01_F: DMR_01_base_F
    {
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: asdg_MuzzleSlot_762R_SVD
            {
                iconPosition[] =
                {
                    0.0, // X
                    0.45 // Y
                };
				iconScale = 0.2;
            };
		};
    };
	class LMG_Mk200_F: Rifle_Long_Base_F
	{
        displayName = $STR_A3_A_CfgWeapons_LMG_Mk200_F0;
		class Library
		{
			libTextDesc = $STR_A3_A_CfgWeapons_LMG_Mk200_F_Library0;
		};
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
			class MuzzleSlot: asdg_MuzzleSlot_65
            {
                compatibleItems[] =
                {
                    muzzle_snds_h,
                    muzzle_snds_h_khk_F,
                    muzzle_snds_h_snd_F,
                    muzzle_snds_65_TI_blk_F,
                    muzzle_snds_65_TI_hex_F,
                    muzzle_snds_65_TI_ghex_F,
                    muzzle_tma_65,
                    muzzle_mzls_H
                };
                /*
                class compatibleItems
                {
                    muzzle_snds_h = true;
                    muzzle_snds_h_khk_F = true;
                    muzzle_snds_h_snd_F = true;
                    muzzle_snds_65_TI_blk_F = true;
                    muzzle_snds_65_TI_hex_F = true;
                    muzzle_snds_65_TI_ghex_F = true;
                    muzzle_tma_65 = true;
                    muzzle_mzls_H = true;
                };
                */
            };
        };
		class GunParticles: GunParticles
		{
			class SecondEffect
			{
				positionName = Nabojnicestart;
				directionName = Nabojniceend;
				effectName = CaselessAmmoCloud;
			};
		};
	};
	class LMG_Zafir_F: Rifle_Long_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: asdg_MuzzleSlot_762R_PK
			{
				iconPosition[] =
				{
					0.05, // X
					0.38 // Y
				};
				iconScale = 0.2;
			};
		};
		class Single: Mode_SemiAuto
		{
			sounds[] =
			{
				StandardSound,
				SilencedSound
			};
			reloadTime = 0.08;
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[] =
			{
				StandardSound,
				SilencedSound
			};
			reloadTime = 0.08;
		};
	};
    class hgun_ACPC2_F;
	class hgun_P07_F: Pistol_Base_F
	{
		magazines[] =
		{
			16Rnd_9x21_Mag_v2,
			16Rnd_9x21_red_Mag_v2,
			16Rnd_9x21_green_Mag_v2,
			16Rnd_9x21_yellow_Mag_v2,
            // Compatibility classes, these are hidden
			30Rnd_9x21_Mag,
			30Rnd_9x21_Red_Mag,
			30Rnd_9x21_Yellow_Mag,
			30Rnd_9x21_Green_Mag,
			16Rnd_9x21_Mag,
			16Rnd_9x21_red_Mag,
			16Rnd_9x21_green_Mag,
			16Rnd_9x21_yellow_Mag
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class PointerSlot: asdg_PistolUnderRail
			{
				iconPosition[] =
				{
					0.39, // X
					0.48 // Y
				};
				iconScale = 0.2;
			};
		};
	};
	class hgun_Pistol_heavy_01_F;
	class hgun_Pistol_heavy_02_F: Pistol_Base_F
    {
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot{};
		};
    };
	class hgun_Rook40_F: Pistol_Base_F
	{
		magazines[] =
		{
			17Rnd_9x21_Mag,
            // Compatibility classes, these are hidden
			30Rnd_9x21_Mag,
			30Rnd_9x21_Red_Mag,
			30Rnd_9x21_Yellow_Mag,
			30Rnd_9x21_Green_Mag,
			16Rnd_9x21_Mag,
			16Rnd_9x21_red_Mag,
			16Rnd_9x21_green_Mag,
			16Rnd_9x21_yellow_Mag
		};
		magazineWell[] = {Rook40_9x21};
	};
	class arifle_Katiba_Base_F: Rifle_Base_F
	{
		class WeaponSlotsInfo;
	};
	class arifle_Katiba_F: arifle_Katiba_Base_F
    {
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: asdg_MuzzleSlot_65
            {
				iconPosition[] =
                {
                    0.0, // X
                    0.45 // Y
                };
				iconScale = 0.2;
            };
		};
    };
	class arifle_Katiba_C_F: arifle_Katiba_Base_F
    {
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: asdg_MuzzleSlot_65
            {
				iconPosition[] =
                {
                    0.1, // X
                    0.45 // Y
                };
				iconScale = 0.2;
            };
		};
    };
	class arifle_Katiba_GL_F: arifle_Katiba_Base_F
    {
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: asdg_MuzzleSlot_65
            {
				iconPosition[] =
                {
                    0.0, // X
                    0.45 // Y
                };
				iconScale = 0.2;
            };
		};
    };
	class arifle_Katiba_GL_ACO_pointer_snds_F: arifle_Katiba_GL_F
	{
		class LinkedItems
		{
			class LinkedItemsMuzzle
			{
				item = muzzle_snds_65_TI_blk_F;
			};
		};
	};
	class arifle_Katiba_C_ACO_pointer_snds_F: arifle_Katiba_C_F
	{
		class LinkedItems
		{
			class LinkedItemsMuzzle
			{
				item = muzzle_snds_65_TI_blk_F;
			};
		};
	};
	class arifle_Katiba_ACO_pointer_snds_F: arifle_Katiba_F
	{
		class LinkedItems
		{
			class LinkedItemsMuzzle
			{
				item = muzzle_snds_65_TI_blk_F;
			};
		};
	};
	class arifle_Katiba_ARCO_pointer_snds_F: arifle_Katiba_F
	{
		class LinkedItems
		{
			class LinkedItemsMuzzle
			{
				item = muzzle_snds_65_TI_blk_F;
			};
		};
	};
	class mk20_base_F: Rifle_Base_F
    {
        class WeaponSlotsInfo;
    };
	class arifle_Mk20_F: mk20_base_F
    {
		displayName = $STR_A3_A_CfgWeapons_arifle_Mk20_F0;
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            class MuzzleSlot: asdg_MuzzleSlot_556
            {
				iconPosition[] =
                {
                    0, // X
                    0.36 // Y
                };
				iconScale = 0.2;
            };
        };
    };
	class arifle_Mk20_plain_F: arifle_Mk20_F
	{
		displayName = $STR_A3_A_CfgWeapons_arifle_Mk20_plain_F0;
    };
	class arifle_Mk20C_F: mk20_base_F
    {
		displayName = $STR_A3_A_CfgWeapons_arifle_Mk20C_F0;
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            class MuzzleSlot: asdg_MuzzleSlot_556
            {
				iconPosition[] =
                {
                    0.1, // X
                    0.36 // Y
                };
				iconScale = 0.2;
            };
        };
    };
	class arifle_Mk20C_plain_F: arifle_Mk20C_F
	{
		displayName = $STR_A3_A_CfgWeapons_arifle_Mk20C_plain_F0;
    };
	class arifle_Mk20_GL_F: mk20_base_F
    {
		displayName = $STR_A3_A_CfgWeapons_arifle_Mk20_GL_F0;
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            class MuzzleSlot: asdg_MuzzleSlot_556
            {
				iconPosition[] =
                {
                    0.1, // X
                    0.36 // Y
                };
				iconScale = 0.2;
            };
        };
    };
	class arifle_Mk20_GL_plain_F: arifle_Mk20_GL_F
	{
		displayName = $STR_A3_A_CfgWeapons_arifle_Mk20_GL_plain_F0;
		hiddenSelectionsTextures[] =
		{
			"\A3\Weapons_F_Beta\Rifles\MK20\Data\MK20_CO.paa",
			"\A3_Aegis\Weapons_F_Aegis\Rifles\MK20\Data\MK20_utilities_black_CO.paa"
		};
	};
	class arifle_MX_Base_F: Rifle_Base_F
    {
        class WeaponSlotsInfo;
    };
	class arifle_MXC_F: arifle_MX_Base_F
	{
		hiddenSelections[] = {camo1};
		hiddenSelectionsTextures[] = {"\A3_Aegis\Weapons_F_Aegis\Rifles\MX\Data\XMX_Short_CO.paa"};
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            class MuzzleSlot: asdg_MuzzleSlot_65
            {
				iconPosition[] =
                {
                    0.0, // X
                    0.4 // Y
                };
				iconScale = 0.2;
            };
            class PointerSlot: asdg_FrontSideRail
            {
				iconPosition[] =
                {
                    0.2, // X
                    0.4 // Y
                };
				iconScale = 0.25;
            };
        };
	};
	class arifle_MX_F: arifle_MX_Base_F
	{
		hiddenSelections[] =
		{
			camo1,
			camo2
		};
		hiddenSelectionsTextures[] =
		{
			"\A3_Aegis\Weapons_F_Aegis\Rifles\MX\Data\XMX_Base_CO.paa",
			"\A3_Aegis\Weapons_F_Aegis\Rifles\MX\Data\XMX_Short_CO.paa"
		};
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            class MuzzleSlot: asdg_MuzzleSlot_65
            {
				iconPosition[] =
                {
                    0.0, // X
                    0.45 // Y
                };
				iconScale = 0.2;
            };
            class PointerSlot: asdg_FrontSideRail
            {
				iconPosition[] =
                {
                    0.2, // X
                    0.45 // Y
                };
				iconScale = 0.25;
            };
        };
	};
	class arifle_MX_GL_F: arifle_MX_Base_F
	{
		hiddenSelections[] =
		{
			camo1,
			camo2
		};
		hiddenSelectionsTextures[] =
		{
			"\A3_Aegis\Weapons_F_Aegis\Rifles\MX\Data\XMX_Base_CO.paa",
			"\A3_Aegis\Weapons_F_Aegis\Rifles\MX\Data\GLX_CO.paa"
		};
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            class MuzzleSlot: asdg_MuzzleSlot_65
            {
				iconPosition[] =
                {
                    0.0, // X
                    0.45 // Y
                };
				iconScale = 0.2;
            };
            class PointerSlot: asdg_FrontSideRail
            {
				iconPosition[] =
                {
                    0.2, // X
                    0.45 // Y
                };
				iconScale = 0.25;
            };
        };
	};
	class arifle_MX_SW_F: arifle_MX_Base_F
	{
		UiPicture = "\A3\Weapons_F\Data\UI\icon_regular_CA.paa";
		cursor = arifle;
		hiddenSelections[] = {camo1};
		hiddenSelectionsTextures[] = {"\A3_Aegis\Weapons_F_Aegis\Rifles\MX\Data\XMX_LMG_CO.paa"};
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            class MuzzleSlot: asdg_MuzzleSlot_65
            {
                compatibleItems[] =
                {
                    muzzle_snds_h,
                    muzzle_snds_h_khk_F,
                    muzzle_snds_h_snd_F,
                    muzzle_snds_65_TI_blk_F,
                    muzzle_snds_65_TI_hex_F,
                    muzzle_snds_65_TI_ghex_F,
                    muzzle_tma_65,
                    muzzle_mzls_H
                };
                /*
                class compatibleItems
                {
                    muzzle_snds_h = true;
                    muzzle_snds_h_khk_F = true;
                    muzzle_snds_h_snd_F = true;
                    muzzle_snds_65_TI_blk_F = true;
                    muzzle_snds_65_TI_hex_F = true;
                    muzzle_snds_65_TI_ghex_F = true;
                    muzzle_tma_65 = true;
                    muzzle_mzls_H = true;
                };
                */
				iconPosition[] =
                {
                    0.0, // X
                    0.45 // Y
                };
				iconScale = 0.2;
            };
            class PointerSlot: asdg_FrontSideRail
            {
				iconPosition[] =
                {
                    0.2, // X
                    0.45 // Y
                };
				iconScale = 0.25;
            };
        };
	};
	class arifle_MXM_F: arifle_MX_Base_F
	{
		hiddenSelections[] = {camo1};
		hiddenSelectionsTextures[] = {"\A3_Aegis\Weapons_F_Aegis\Rifles\MX\Data\XMX_Long_CO.paa"};
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            class MuzzleSlot: asdg_MuzzleSlot_65
            {
				iconPosition[] =
                {
                    0.0, // X
                    0.4 // Y
                };
				iconScale = 0.2;
            };
            class PointerSlot: asdg_FrontSideRail
            {
				iconPosition[] =
                {
                    0.2, // X
                    0.45 // Y
                };
				iconScale = 0.25;
            };
        };
	};
	class arifle_MX_SW_Hamr_pointer_F: arifle_MX_SW_F
	{
		class LinkedItems
		{
			class LinkedItemsUnder
			{
				slot = UnderBarrelSlot;
				item = bipod_01_F_snd;
			};
		};
	};
	class arifle_MXC_Holo_pointer_snds_F: arifle_MXC_F
	{
		class LinkedItems
		{
			class LinkedItemsMuzzle
			{
				item = muzzle_snds_H_snd_F;
			};
		};
	};
	class arifle_MXC_ACO_pointer_snds_F: arifle_MXC_F
	{
		class LinkedItems
		{
			class LinkedItemsMuzzle
			{
				item = muzzle_snds_H_snd_F;
			};
		};
	};
	class arifle_MX_ACO_pointer_snds_F: arifle_MX_F
	{
		class LinkedItems
		{
			class LinkedItemsMuzzle
			{
				item = muzzle_snds_H_snd_F;
			};
		};
	};
	class arifle_MX_RCO_pointer_snds_F: arifle_MX_F
	{
		class LinkedItems
		{
			class LinkedItemsMuzzle
			{
				item = muzzle_snds_H_snd_F;
			};
		};
	};
	class arifle_MX_GL_Holo_pointer_snds_F: arifle_MX_GL_F
	{
		class LinkedItems
		{
			class LinkedItemsMuzzle
			{
				item = muzzle_snds_H_snd_F;
			};
		};
	};
	class arifle_MXM_DMS_LP_BI_snds_F: arifle_MXM_F
	{
		class LinkedItems
		{
			class LinkedItemsMuzzle
			{
				item = muzzle_snds_H_snd_F;
			};
		};
	};
	class arifle_MXC_Black_F;
	class arifle_MX_Black_F;
	class arifle_MX_Black_Hamr_Pointer_Snds_F: arifle_MX_Black_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = optic_Hamr;
			};
		};
	};
	class arifle_MX_GL_Black_F;
	class arifle_MX_SW_Black_F;
	class arifle_MX_SW_Black_Hamr_pointer_F: arifle_MX_SW_Black_F
	{
		class LinkedItems
		{
			class LinkedItemsUnder
			{
				slot = UnderBarrelSlot;
				item = bipod_01_F_blk;
			};
		};
	};
	class arifle_MXM_Black_F;
	class SDAR_base_F: Rifle_Base_F
	{
		magazineWell[] = {STANAG_556x45_SDAR};
	};
	class Tavor_base_F: Rifle_Base_F
	{
        class WeaponSlotsInfo;
		class Single: Mode_SemiAuto
		{
			reloadTime = 0.066; // 910 RPM
		};
		class FullAuto: Mode_FullAuto
		{
			reloadTime = 0.066; // 910 RPM
		};
	};
	class arifle_TRG21_F: Tavor_base_F
	{
		hiddenSelections[] = {camo};
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            class MuzzleSlot: asdg_MuzzleSlot_556
            {
				iconPosition[] =
                {
                    0.0, // X
                    0.4 // Y
                };
				iconScale = 0.2;
            };
        };
	};
	class arifle_TRG20_F: Tavor_base_F
	{
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            class MuzzleSlot: asdg_MuzzleSlot_556
            {
				iconPosition[] =
                {
                    0.0, // X
                    0.4 // Y
                };
				iconScale = 0.2;
            };
        };
		class Single: Single
		{
			reloadTime = 0.067; // 890 RPM
		};
		class FullAuto: FullAuto
		{
			reloadTime = 0.067; // 890 RPM
		};
	};
	class arifle_TRG21_GL_F: Tavor_base_F
    {
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            class MuzzleSlot: asdg_MuzzleSlot_556
            {
				iconPosition[] =
                {
                    0.0, // X
                    0.4 // Y
                };
				iconScale = 0.2;
            };
        };
    };
	class pdw2000_base_F: Rifle_Short_Base_F
	{
		magazines[] =
		{
            30Rnd_9x21_Mag_v2,
            30Rnd_9x21_Red_Mag_v2,
            30Rnd_9x21_Yellow_Mag_v2,
            30Rnd_9x21_Green_Mag_v2,
            // Compatibility classes, these are hidden
			30Rnd_9x21_Mag,
			30Rnd_9x21_Red_Mag,
			30Rnd_9x21_Yellow_Mag,
			30Rnd_9x21_Green_Mag,
			16Rnd_9x21_Mag,
			16Rnd_9x21_Red_Mag,
			16Rnd_9x21_Yellow_Mag,
			16Rnd_9x21_Green_Mag
		};
		modes[] =
		{
			Single,
			FullAuto
		};
	};
	class hgun_PDW2000_F;
	class hgun_PDW2000_Holo_F: hgun_PDW2000_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = optic_Holosight_smg_blk_F;
			};
		};
	};
	class hgun_PDW2000_Holo_snds_F: hgun_PDW2000_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = optic_Holosight_smg_blk_F;
			};
		};
	};
	class SMG_01_F;
	class SMG_02_F;
	class InventoryMuzzleItem_Base_F;
	class InventoryOpticsItem_Base_F;
	class InventoryFlashLightItem_Base_F;
	class muzzle_snds_H: ItemCore
	{
		picture = "\A3\Weapons_F\Acc\Data\UI\icon_muzzle_snds_M_CA.paa";
		model = "\A3\Weapons_F\Acc\acca_snds_lmg_blk_F.p3d";
	};
	class muzzle_snds_M;
	class muzzle_snds_B;
	class muzzle_snds_H_MG: muzzle_snds_H
    {
        scope = protected;
    };
	class muzzle_snds_H_SW: muzzle_snds_H_MG
    {
        scope = protected;
    };
	class muzzle_snds_acp;
	class muzzle_snds_338_black;
	class acc_pointer_IR;
	// Arma 3 Marksman
    class bipod_02_F_blk;
	class srifle_DMR_02_F;
	class srifle_DMR_02_sniper_F: srifle_DMR_02_F
	{
		hiddenSelectionsTextures[] =
		{
			"\A3_Aegis\Weapons_F_Aegis\LongRangeRifles\DMR_02\Data\DMR_02_01_tan_CO.paa",
			"\A3_Aegis\Weapons_F_Aegis\LongRangeRifles\DMR_02\Data\DMR_02_02_tan_CO.paa"
		};
	};
    class DMR_03_base_F: Rifle_Long_Base_F
    {
        class WeaponSlotsInfo;
    };
	class srifle_DMR_03_F: DMR_03_base_F
	{
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            class MuzzleSlot: asdg_MuzzleSlot_762
            {
				iconPosition[] =
                {
                    0.12, // X
                    0.431 // Y
                };
				iconScale = 0.15;
            };
        };
	};
	class srifle_DMR_03_khaki_F;
	class srifle_DMR_03_tan_F: srifle_DMR_03_F
	{
		hiddenSelectionsTextures[] =
		{
			"\A3_Aegis\Weapons_F_Aegis\LongRangeRifles\DMR_03\Data\DMR_03_01_tan_CO.paa",
			"\A3_Aegis\Weapons_F_Aegis\LongRangeRifles\DMR_03\Data\DMR_03_02_tan_CO.paa"
		};
	};
	class srifle_DMR_05_blk_F;
	class srifle_DMR_05_hex_F;
	class DMR_06_base_F: Rifle_Long_Base_F
    {
        class WeaponSlotsInfo;
    };
	class srifle_DMR_06_camo_F: DMR_06_base_F
	{
		magazines[] = {20Rnd_Mk14_762x51_Mag};
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            class MuzzleSlot: asdg_MuzzleSlot_762
            {
				iconPosition[] =
                {
                    0.06, // X
                    0.4 // Y
                };
				iconScale = 0.15;
            };
            class CowsSlot: asdg_OpticRail1913_short
			{
				iconPosition[] =
                {
                    0.52, // X
                    0.36 // Y
                };
				iconScale = 0.15;
			};
            class UnderBarrelSlot: asdg_UnderSlot
			{
				iconPosition[] =
                {
                    0.32, // X
                    0.8 // Y
                };
				iconScale = 0.3;
			};
        };
	};
	class MMG_01_hex_F;
	class MMG_02_camo_F;
	class MMG_02_black_F;
	// Arma 3 Apex
	class HMG_127_LSV_01: HMG_static
	{
		class GunParticles
		{
			class effect3
			{
				positionName = machinegun_eject_pos;
				directionName = machinegun_eject_dir;
				effectName = MachineGunEject;
			};
		};
	};
	class MMG_02_vehicle: LMG_RCWS
	{
        autoReload = false;
        backgroundReload = false;
		class GunParticles
		{
			class effect3
			{
				positionName = machinegun_2_eject_pos;
				directionName = machinegun_2_eject_dir;
				effectName = MachineGunEject2;
			};
		};
	};
	class O_NVGoggles_hex_F: NVGoggles
	{
		modelOptics = "\A3\Weapons_F\Reticle\optics_empty.p3d";
		picture = "\A3\Weapons_F_Exp\Binocular\Data\UI\icon_O_NVGoggles_hex_F_CA.paa";
	};
	class O_NVGoggles_urb_F: O_NVGoggles_hex_F
	{
		modelOptics = "\A3\Weapons_F\Reticle\optics_empty.p3d";
	};
	class O_NVGoggles_ghex_F: O_NVGoggles_hex_F
	{
		modelOptics = "\A3\Weapons_F\Reticle\optics_empty.p3d";
	};
	class NVGogglesB_blk_F: NVGoggles
	{
		modelOptics = "\A3\Weapons_F\Reticle\optics_empty.p3d";
	};
	class NVGogglesB_grn_F: NVGoggles
	{
		modelOptics = "\A3\Weapons_F\Reticle\optics_empty.p3d";
	};
	class NVGogglesB_gry_F: NVGoggles
	{
		modelOptics = "\A3\Weapons_F\Reticle\optics_empty.p3d";
	};
	class arifle_MX_khk_F;
	class arifle_MX_GL_khk_F;
	class arifle_MX_SW_khk_F;
	class arifle_MXC_khk_F;
	class arifle_MXM_khk_F;
	class muzzle_snds_H_khk_F: muzzle_snds_H
	{
		model = "\A3\Weapons_F\Acc\acca_snds_lmg_khk_F.p3d";
		picture = "\A3\Weapons_F_Exp\Acc\Data\UI\icon_muzzle_snds_m_khk_F_CA.paa";
	};
	class muzzle_snds_H_snd_F: muzzle_snds_H
	{
		model = "\A3\Weapons_F\Machineguns\M200\lmg_suppressor";
		picture = "\A3\Weapons_F_Exp\Acc\Data\UI\icon_muzzle_snds_m_snd_F_CA.paa";
	};
	class DMR_07_base_F: Rifle_Long_Base_F
	{
		UiPicture = "\A3\Weapons_F\Data\UI\icon_sniper_CA.paa";
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            class PointerSlot{};
        };
	};
	class arifle_AKM_base_F;
	class arifle_AKM_F;
	class arifle_AKS_base_F: Rifle_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 60;
		};
	};
	class arifle_ARX_ghex_F;
	class arifle_ARX_hex_F;
	class arifle_ARX_hex_DMS_Pointer_Snds_Bipod_F: arifle_ARX_hex_F
	{
		class LinkedItems
		{
			class LinkedItemsMuzzle
			{
				item = muzzle_snds_65_TI_hex_F;
			};
		};
	};
	class arifle_ARX_ghex_DMS_Pointer_Snds_Bipod_F: arifle_ARX_ghex_F
	{
		class LinkedItems
		{
			class LinkedItemsUnder
			{
				item = bipod_02_F_hex;
			};
		};
	};
	class arifle_CTAR_GL_blk_F;
	class arifle_CTARS_blk_F;
	class arifle_SPAR_01_base_F;
	class arifle_SPAR_01_blk_F: arifle_SPAR_01_base_F
	{
		hiddenSelectionsTextures[] =
		{
			"\A3_Aegis\Weapons_F_Aegis\Rifles\SPAR_01\Data\arifle_SPAR_01_blk_F_01_CO.paa",
			"\A3_Aegis\Weapons_F_Aegis\Rifles\SPAR_01\Data\arifle_SPAR_01_blk_F_02_CO.paa"
		};
	};
	class arifle_SPAR_01_khk_F: arifle_SPAR_01_base_F
	{
		hiddenSelectionsTextures[] =
		{
			"\A3_Aegis\Weapons_F_Aegis\Rifles\SPAR_01\Data\arifle_SPAR_01_khk_F_01_CO.paa",
			"\A3_Aegis\Weapons_F_Aegis\Rifles\SPAR_01\Data\arifle_SPAR_01_khk_F_02_CO.paa"
		};
	};
	class arifle_SPAR_01_snd_F: arifle_SPAR_01_base_F
	{
		hiddenSelectionsTextures[] =
		{
			"\A3_Aegis\Weapons_F_Aegis\Rifles\SPAR_01\Data\arifle_SPAR_01_snd_F_01_CO.paa",
			"\A3_Aegis\Weapons_F_Aegis\Rifles\SPAR_01\Data\arifle_SPAR_01_snd_F_02_CO.paa"
		};
	};
	class arifle_SPAR_01_GL_base_F;
	class arifle_SPAR_01_GL_blk_F: arifle_SPAR_01_GL_base_F
	{
		hiddenSelectionsTextures[] =
		{
			"\A3_Aegis\Weapons_F_Aegis\Rifles\SPAR_01\Data\arifle_SPAR_01_blk_F_01_CO.paa",
			"\A3_Aegis\Weapons_F_Aegis\Rifles\SPAR_01\Data\arifle_SPAR_01_blk_F_02_CO.paa",
			"\A3_Aegis\Weapons_F_Aegis\Rifles\SPAR_01\Data\arifle_SPAR_01_GL_blk_F_01_CO.paa"
		};
	};
	class arifle_SPAR_01_GL_khk_F: arifle_SPAR_01_GL_base_F
	{
		hiddenSelectionsTextures[] =
		{
			"\A3_Aegis\Weapons_F_Aegis\Rifles\SPAR_01\Data\arifle_SPAR_01_khk_F_01_CO.paa",
			"\A3_Aegis\Weapons_F_Aegis\Rifles\SPAR_01\Data\arifle_SPAR_01_khk_F_02_CO.paa",
			"\A3_Aegis\Weapons_F_Aegis\Rifles\SPAR_01\Data\arifle_SPAR_01_GL_khk_F_01_CO.paa"
		};
	};
	class arifle_SPAR_01_GL_snd_F: arifle_SPAR_01_GL_base_F
	{
		hiddenSelectionsTextures[] =
		{
			"\A3_Aegis\Weapons_F_Aegis\Rifles\SPAR_01\Data\arifle_SPAR_01_snd_F_01_CO.paa",
			"\A3_Aegis\Weapons_F_Aegis\Rifles\SPAR_01\Data\arifle_SPAR_01_snd_F_02_CO.paa",
			"\A3_Aegis\Weapons_F_Aegis\Rifles\SPAR_01\Data\arifle_SPAR_01_GL_snd_F_01_CO.paa"
		};
	};
	class arifle_SPAR_02_base_F: Rifle_Base_F
	{
		cursor = arifle;
	};
	class arifle_SPAR_02_blk_F: arifle_SPAR_02_base_F 
	{
		hiddenSelectionsTextures[] =
		{
			"\A3_Aegis\Weapons_F_Aegis\Rifles\SPAR_01\Data\arifle_SPAR_01_blk_F_01_CO.paa",
			"\A3_Aegis\Weapons_F_Aegis\Rifles\SPAR_01\Data\arifle_SPAR_01_blk_F_02_CO.paa"
		};
	};
	class arifle_SPAR_02_khk_F: arifle_SPAR_02_base_F 
	{
		magazines[] =
		{
			150Rnd_556x45_Drum_Green_Mag_F,
			150Rnd_556x45_Drum_Green_Mag_Tracer_F
		};
		hiddenSelectionsTextures[] =
		{
			"\A3_Aegis\Weapons_F_Aegis\Rifles\SPAR_01\Data\arifle_SPAR_01_khk_F_01_CO.paa",
			"\A3_Aegis\Weapons_F_Aegis\Rifles\SPAR_01\Data\arifle_SPAR_01_khk_F_02_CO.paa"
		};
	};
	class arifle_SPAR_02_snd_F: arifle_SPAR_02_base_F 
	{
		hiddenSelectionsTextures[] =
		{
			"\A3_Aegis\Weapons_F_Aegis\Rifles\SPAR_01\Data\arifle_SPAR_01_snd_F_01_CO.paa",
			"\A3_Aegis\Weapons_F_Aegis\Rifles\SPAR_01\Data\arifle_SPAR_01_snd_F_02_CO.paa"
		};
	};
	class arifle_SPAR_03_base_F: Rifle_Base_F
	{
		UiPicture = "\A3\Weapons_F\Data\UI\icon_sniper_CA.paa";
	};
	class arifle_SPAR_03_blk_F: arifle_SPAR_03_base_F
	{
		hiddenSelectionsTextures[] =
		{
			"\A3_Aegis\Weapons_F_Aegis\Rifles\SPAR_03\Data\arifle_SPAR_03_blk_F_01_CO.paa",
			"\A3_Aegis\Weapons_F_Aegis\Rifles\SPAR_03\Data\arifle_SPAR_03_blk_F_02_CO.paa",
			"\A3_Aegis\Weapons_F_Aegis\Rifles\SPAR_01\Data\arifle_SPAR_01_blk_F_01_CO.paa"
		};
	};
	class arifle_SPAR_03_khk_F: arifle_SPAR_03_base_F
	{
		hiddenSelectionsTextures[] =
		{
			"\A3_Aegis\Weapons_F_Aegis\Rifles\SPAR_03\Data\arifle_SPAR_03_khk_F_01_CO.paa",
			"\A3_Aegis\Weapons_F_Aegis\Rifles\SPAR_03\Data\arifle_SPAR_03_khk_F_02_CO.paa",
			"\A3_Aegis\Weapons_F_Aegis\Rifles\SPAR_01\Data\arifle_SPAR_01_khk_F_01_CO.paa"
		};
	};
	class arifle_SPAR_03_snd_F: arifle_SPAR_03_base_F
	{
		hiddenSelectionsTextures[] =
		{
			"\A3_Aegis\Weapons_F_Aegis\Rifles\SPAR_03\Data\arifle_SPAR_03_snd_F_01_CO.paa",
			"\A3_Aegis\Weapons_F_Aegis\Rifles\SPAR_03\Data\arifle_SPAR_03_snd_F_02_CO.paa",
			"\A3_Aegis\Weapons_F_Aegis\Rifles\SPAR_01\Data\arifle_SPAR_01_snd_F_01_CO.paa"
		};
	};
	class SMG_05_base_F;
	class SMG_05_F;
	// Arma 3 Jets
	class weapon_Fighter_Gun20mm_AA: CannonCore
	{
		magazines[] +=
		{
			magazine_Fighter04_Gun20mm_AA_x120,
			magazine_Fighter04_Gun20mm_AA_x120_red
		};
	};
	// Arma 3 Tanks
	class cannon_20mm: autocannon_Base_F
	{
		class HE: autocannon_Base_F
		{
			class player;
		};
	};
	class missiles_Vorona: MissileLauncher
	{
        autoReload = false;
        backgroundReload = false;
    };
	class launcher_SPG9: MissileLauncher
	{
        autoReload = false;
        backgroundReload = false;
		reloadSound[] = {"\A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\reload_Missile_Launcher",db-1,1,10};
	};
	class MMG_02_coax: MMG_02_vehicle
	{
        autoReload = false;
        backgroundReload = false;
	};
	class autocannon_30mm_RCWS: autocannon_Base_F
	{
        displayName = $STR_A3_GATLING_30MM0;
		magazines[] +=
		{
			60Rnd_30mm_MP_shells_Tracer_Red,
			60Rnd_30mm_MP_shells_Tracer_Yellow
		};
	};
	class HMG_127_LT: HMG_M2
	{
        autoReload = true;
        backgroundReload = true;
		class GunParticles
		{
			class effect1
			{
				positionName = "usti hlavne";
				directionName = "konec hlavne";
				effectName = MachineGunCloud;
			};
		};
	};
	class HMG_127_AFV: HMG_M2
    {
        autoReload = true;
        backgroundReload = true;
        magazines[] =
		{
			200Rnd_127x99_mag,
			200Rnd_127x99_mag_Tracer_Red,
			200Rnd_127x99_mag_Tracer_Green,
			200Rnd_127x99_mag_Tracer_Yellow
		};
    };
	class launch_MRAWS_base_F;
	class launch_MRAWS_olive_rail_F;
	class launch_Vorona_base_F: Launcher_Base_F
	{
		recoil = recoil_vorona;
	};
	// Arma 3 Encore
	class weapon_SDBLauncher: RocketPods
	{
	  	displayName = $STR_A3_A_CfgWeapons_weapon_SDBLauncher0;
	};
	// Arma 3 Enoch
	class bipod_02_F_lush: bipod_02_F_blk
	{
		displayName = $STR_A3_A_CfgWeapons_bipod_02_F_lush0;
	};
	class bipod_02_F_arid: bipod_02_F_blk
	{
		displayName = $STR_A3_A_CfgWeapons_bipod_02_F_arid0;
	};
	class launch_RPG32_camo_F: launch_RPG32_F
	{
		scope = public;
	};
	class DMR_06_hunter_base_F: DMR_06_base_F
	{
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            class MuzzleSlot: asdg_MuzzleSlot_762
            {
				iconPosition[] =
                {
                    0.06, // X
                    0.4 // Y
                };
				iconScale = 0.15;
            };
            class CowsSlot: asdg_OpticRail1913_short
			{
				iconPosition[] =
                {
                    0.52, // X
                    0.36 // Y
                };
				iconScale = 0.15;
			};
            class UnderBarrelSlot: asdg_UnderSlot
			{
				iconPosition[] =
                {
                    0.32, // X
                    0.8 // Y
                };
				iconScale = 0.3;
			};
        };
	};
	class LMG_Mk200_black_F: LMG_Mk200_F
    {
        displayName = $STR_A3_A_CfgWeapons_LMG_Mk200_black_F0;
    };
	class hgun_Pistol_heavy_01_green_F;
	class arifle_MSBS65_base_F: Rifle_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot;
			class CowsSlot;
			class PointerSlot;
			class UnderBarrelSlot;
		};
	};
	class arifle_MSBS65_Mark_base_F: arifle_MSBS65_base_F
	{
		UiPicture = "\A3\Weapons_F\Data\UI\icon_sniper_CA.paa";
	};
	class arifle_MSBS65_GL_base_F: arifle_MSBS65_base_F
	{
		UiPicture = "\A3\Weapons_F\Data\UI\icon_gl_CA.paa";
	};
	class arifle_MSBS65_UBS_base_F: arifle_MSBS65_base_F{};
	class arifle_MSBS65_base_black_F: arifle_MSBS65_base_F{};
	class arifle_MSBS65_Mark_base_black_F: arifle_MSBS65_Mark_base_F{};
	class arifle_MSBS65_GL_base_black_F: arifle_MSBS65_GL_base_F{};
	class arifle_MSBS65_UBS_base_black_F: arifle_MSBS65_UBS_base_F{};
	class arifle_MSBS65_base_sand_F: arifle_MSBS65_base_F{};
	class arifle_MSBS65_Mark_base_sand_F: arifle_MSBS65_Mark_base_F{};
	class arifle_MSBS65_GL_base_sand_F: arifle_MSBS65_GL_base_F{};
	class arifle_MSBS65_UBS_base_sand_F: arifle_MSBS65_UBS_base_F{};
	class arifle_MSBS65_base_camo_F: arifle_MSBS65_base_F{};
	class arifle_MSBS65_Mark_base_camo_F: arifle_MSBS65_Mark_base_F{};
	class arifle_MSBS65_GL_base_camo_F: arifle_MSBS65_GL_base_F{};
	class arifle_MSBS65_UBS_base_camo_F: arifle_MSBS65_UBS_base_F{};
	class arifle_MSBS65_F: arifle_MSBS65_base_F{};
	class arifle_MSBS65_Mark_F: arifle_MSBS65_Mark_base_F{};
	class arifle_MSBS65_GL_F: arifle_MSBS65_GL_base_F{};
	class arifle_MSBS65_UBS_F;
	class arifle_MSBS65_black_F: arifle_MSBS65_base_black_F{};
	class arifle_MSBS65_Mark_black_F: arifle_MSBS65_Mark_base_black_F{};
	class arifle_MSBS65_GL_black_F: arifle_MSBS65_GL_base_black_F{};
	class arifle_MSBS65_UBS_black_F: arifle_MSBS65_UBS_base_black_F{};
	class arifle_MSBS65_sand_F: arifle_MSBS65_base_sand_F{};
	class arifle_MSBS65_Mark_sand_F: arifle_MSBS65_Mark_base_sand_F{};
	class arifle_MSBS65_GL_sand_F: arifle_MSBS65_GL_base_sand_F{};
	class arifle_MSBS65_UBS_sand_F: arifle_MSBS65_UBS_base_sand_F{};
	class arifle_MSBS65_camo_F: arifle_MSBS65_base_camo_F{};
	class arifle_MSBS65_Mark_camo_F: arifle_MSBS65_Mark_base_camo_F{};
	class arifle_MSBS65_GL_camo_F: arifle_MSBS65_GL_base_camo_F{};
	class arifle_MSBS65_UBS_camo_F: arifle_MSBS65_UBS_base_camo_F{};
	class arifle_MSBS65_UBS_snds_ico_pointer_F: arifle_MSBS65_UBS_F
	{
		class LinkedItems
		{
			class LinkedItemsMuzzle
			{
				item = muzzle_snds_H;
			};
		};
	};
	// Arma 3 Aegis
	class HMG_static_autonomous: HMG_static
    {
        autoReload = true;
        backgroundReload = true;
        magazineReloadTime = 20;
    };
	class GMG_20mm_autonomous: GMG_20mm
	{
        autoReload = true;
        backgroundReload = true;
        magazineReloadTime = 20;
	};
	class CMFlareLauncher_Quadruples: CMFlareLauncher
	{
		class Single: Single
		{
			multiplier = 4;
		};
		class Burst: Burst
		{
			multiplier = 4;
			reloadTime = 0.25;
			burst = 4;
		};
		class AIBurst: AIBurst
		{
			multiplier = 4;
			reloadTime = 0.25;
			burst = 2;
			burstRangeMax = 6;
		};
	};
	class rockets_50mm: RocketPods
	{
		displayName = $STR_A3_A_CfgWeapons_rockets_50mm0;
		magazines[] =
		{
			14Rnd_50mm_rockets,
			PylonRack_7Rnd_Rocket_50mm
		};
		ballisticsComputer = 8;
		modes[] =
		{
			Far_AI,
			Burst
		};
		canLock = false;
		weaponLockDelay = 0;
		class Far_AI: RocketPods
		{
			sounds[] = {StandardSound};
			weaponLockDelay = 0;
			showToPlayer = false;
			minRange = 50;
			minRangeProbab = 0.15;
			midRange = 600;
			midRangeProbab = 0.25;
			maxRange = 2500;
			maxRangeProbab = 0.05;
			displayName = $STR_A3_A_CfgWeapons_rockets_50mm0;
			soundFly[] = {"\A3\Sounds_F\weapons\Rockets\rocket_fly_1",db0,1.1,700};
			burst = 1;
			reloadTime = 0.08;
			autoFire = false;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 500;
		};
		class Burst: RocketPods
		{
			sounds[] = {StandardSound};
			displayName = $STR_A3_A_CfgWeapons_rockets_50mm0;
			burst = 1;
			reloadTime = 0.08;
			soundFly[] = {"\A3\Sounds_F\weapons\Rockets\rocket_fly_1",db0,1.9,700};
			autoFire = true;
			soundContinuous = false;
			minRange = 250;
			minRangeProbab = 0.25;
			midRange = 400;
			midRangeProbab = 0.5;
			maxRange = 600;
			maxRangeProbab = 0.1;
			textureType = fullAuto;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 500;
		};
	};
	class missiles_Vikhr: RocketPods
	{
		autoFire = false;
		displayName = $STR_A3_A_CfgWeapons_missiles_Vikhr0;
		magazines[] =
		{
			12Rnd_Vikhr_missiles,
			PylonRack_6Rnd_Vikhr_missiles
		};
		aiRateOfFire = 5;
		aiRateOfFireDistance = 500;
		nameSound = MissileLauncher;
		sounds[] = {StandardSound};
		cursor = EmptyCursor;
		cursorAim = missile;
		showAimCursorInternal = false;
		weaponLockDelay = 3;
		weaponLockSystem = 2;
		cmImmunity = 0.4;
		textureType = semi;
		modes[] =
        {
            Player,
            TopDown
        };
		class Player: RocketPods
		{
			textureType = semi;
			reloadTime = 0.1;
			magazineReloadTime = 0.1;
			sounds[] = {StandardSound};
			aiRateOfFire = 5.0;
			aiRateOfFireDistance = 500;
			showToPlayer = true;
			minRange = 200;
			minRangeProbab = 0.5;
			midRange = 400;
			midRangeProbab = 0.85;
			maxRange = 6000;
			maxRangeProbab = 0.9;
		};
		class TopDown: Player
		{
			textureType = topDown;
			//displayName = "Top-down";
			minRange = 400;
			minRangeProbab = 0.4;
			midRange = 800;
			midRangeProbab = 0.9;
			maxRange = 6000;
			maxRangeProbab = 0.95;
		};
	};
    class autocannon_30mm_Heli_Attack_03: CannonCore
    {
		scope = protected;
		displayName = $STR_A3_A_CfgWeapons_autocannon_30mm_Heli_Attack_030;
		nameSound = cannon;
		burst = 5;
		reloadTime = 0.096;
		autoFire = true;
		magazines[] =
        {
            600Rnd_30mm_HE_shells,
            600Rnd_30mm_HE_shells_Tracer_Red,
            600Rnd_30mm_HE_shells_Tracer_Yellow,
            600Rnd_30mm_APDS_shells,
            600Rnd_30mm_APDS_shells_Tracer_Red,
            600Rnd_30mm_APDS_shells_Tracer_Yellow
        };
		shotFromTurret = true;
		cursor = EmptyCursor;
		cursorAim = mg;
		showAimCursorInternal = false;
        canLock = false;
		ballisticsComputer = BallisticsAutoZero + BallisticsManualZero + BallisticsFCS;
		FCSMaxLeadSpeed = 30.5556;
		FCSZeroingDelay = 0.5;
		maxZeroing = 2500;
		aiDispersionCoefY = 0.5;
		aiDispersionCoefX = 0.5;
		class GunParticles
		{
			class Effect
			{
				effectName = MachineGun2;
				positionName = "Usti hlavne";
				directionName = "Konec hlavne";
			};
			class Shell
			{
				positionName = shell_eject_pos;
				directionName = shell_eject_dir;
				effectName = HeavyGunCartridge1;
			};
		};
		muzzles[] =
        {
            HE,
            AP
        };
		class HE: autocannon_Base_F
		{
		    displayName = $STR_A3_A_CfgWeapons_autocannon_30mm_Heli_Attack_030;
            nameSound = cannon;
            burst = 5;
            reloadTime = 0.096;
            autoFire = true;
			magazines[] =
            {
                600Rnd_30mm_HE_shells,
                600Rnd_30mm_HE_shells_Tracer_Red,
                600Rnd_30mm_HE_shells_Tracer_Yellow
            };
            modes[] =
            {
                player,
                close,
                short,
                medium,
                far
            };
            shotFromTurret = true;
            cursor = EmptyCursor;
            cursorAim = mg;
            showAimCursorInternal = false;
            canLock = false;
            ballisticsComputer = BallisticsAutoZero + BallisticsManualZero + BallisticsFCS;
            FCSMaxLeadSpeed = 30.5556;
            FCSZeroingDelay = 0.5;
            maxZeroing = 2500;
            aiDispersionCoefY = 0.5;
            aiDispersionCoefX = 0.5;
			class player: Mode_FullAuto
			{
				burst = 5;
			    sounds[] = {StandardSound};
			    soundContinuous = false;
                flash = gunfire;
                flashSize = 0.1;
                recoil = Empty;
                ffMagnitude = 0.5;
                ffFrequency = 11;
                ffCount = 6;
                reloadTime = 0.096;
			    dispersion = 0.0066;
				aiRateOfFire = 1;
				aiRateOfFireDistance = 10;
				minRange = 0;
				minRangeProbab = 0.01;
				midRange = 1;
				midRangeProbab = 0.01;
				maxRange = 2;
				maxRangeProbab = 0.01;
			};
			class close: player
			{
                aiBurstTerminable = true;
                showToPlayer = false;
                burst = 16;
                burstRangeMax = 37;
                aiRateOfFire = 0.5;
                aiRateOfFireDispersion = 1;
                aiRateOfFireDistance = 50;
                minRange = 0;
                minRangeProbab = 0.1;
                midRange = 50;
                midRangeProbab = 0.65;
                maxRange = 400;
                maxRangeProbab = 0.75;
			};
			class short: close
			{
                aiBurstTerminable = true;
                showToPlayer = false;
                burst = 12;
                burstRangeMax = 32;
                aiRateOfFire = 1;
                aiRateOfFireDispersion = 2;
                aiRateOfFireDistance = 200;
                minRange = 200;
                minRangeProbab = 0.65;
                midRange = 400;
                midRangeProbab = 0.75;
                maxRange = 1000;
                maxRangeProbab = 0.7;
			};
			class medium: close
			{
                aiBurstTerminable = true;
                showToPlayer = false;
                burst = 12;
                burstRangeMax = 28;
                aiRateOfFire = 2;
                aiRateOfFireDispersion = 2;
                aiRateOfFireDistance = 800;
                minRange = 800;
                minRangeProbab = 0.7;
                midRange = 1400;
                midRangeProbab = 0.4;
                maxRange = 1800;
                maxRangeProbab = 0.15;
			};
			class far: close
			{
                aiBurstTerminable = true;
                showToPlayer = false;
                burst = 9;
                burstRangeMax = 20;
                aiRateOfFire = 4;
                aiRateOfFireDispersion = 4;
                aiRateOfFireDistance = 1400;
                minRange = 1400;
                minRangeProbab = 0.5;
                midRange = 1800;
                midRangeProbab = 0.15;
                maxRange = 2500;
                maxRangeProbab = 0.05;
			};
		};
		class AP: autocannon_Base_F
		{
		    displayName = $STR_A3_A_CfgWeapons_autocannon_30mm_Heli_Attack_030;
            nameSound = cannon;
            burst = 5;
            reloadTime = 0.096;
            autoFire = true;
			magazines[] =
            {
                600Rnd_30mm_APDS_shells,
                600Rnd_30mm_APDS_shells_Tracer_Red,
                600Rnd_30mm_APDS_shells_Tracer_Yellow
            };
            modes[] =
            {
                player,
                close,
                short,
                medium,
                far
            };
            shotFromTurret = true;
            cursor = EmptyCursor;
            cursorAim = mg;
            showAimCursorInternal = false;
            canLock = false;
            ballisticsComputer = BallisticsAutoZero + BallisticsManualZero + BallisticsFCS;
            FCSMaxLeadSpeed = 30.5556;
            FCSZeroingDelay = 0.5;
            maxZeroing = 2500;
            aiDispersionCoefY = 0.5;
            aiDispersionCoefX = 0.5;
			class player: Mode_FullAuto
			{
				burst = 5;
			    sounds[] = {StandardSound};
			    soundContinuous = false;
                flash = gunfire;
                flashSize = 0.1;
                recoil = Empty;
                ffMagnitude = 0.5;
                ffFrequency = 11;
                ffCount = 6;
                reloadTime = 0.096;
			    dispersion = 0.0066;
				aiRateOfFire = 1;
				aiRateOfFireDistance = 10;
				minRange = 0;
				minRangeProbab = 0.01;
				midRange = 1;
				midRangeProbab = 0.01;
				maxRange = 2;
				maxRangeProbab = 0.01;
			};
			class close: player
			{
                aiBurstTerminable = true;
                showToPlayer = false;
                burst = 16;
                burstRangeMax = 37;
                aiRateOfFire = 0.5;
                aiRateOfFireDispersion = 1;
                aiRateOfFireDistance = 50;
                minRange = 0;
                minRangeProbab = 0.1;
                midRange = 50;
                midRangeProbab = 0.65;
                maxRange = 400;
                maxRangeProbab = 0.75;
			};
			class short: close
			{
                aiBurstTerminable = true;
                showToPlayer = false;
                burst = 12;
                burstRangeMax = 32;
                aiRateOfFire = 1;
                aiRateOfFireDispersion = 2;
                aiRateOfFireDistance = 200;
                minRange = 200;
                minRangeProbab = 0.65;
                midRange = 400;
                midRangeProbab = 0.75;
                maxRange = 1000;
                maxRangeProbab = 0.7;
			};
			class medium: close
			{
                aiBurstTerminable = true;
                showToPlayer = false;
                burst = 12;
                burstRangeMax = 28;
                aiRateOfFire = 2;
                aiRateOfFireDispersion = 2;
                aiRateOfFireDistance = 800;
                minRange = 800;
                minRangeProbab = 0.7;
                midRange = 1400;
                midRangeProbab = 0.4;
                maxRange = 1800;
                maxRangeProbab = 0.15;
			};
			class far: close
			{
                aiBurstTerminable = true;
                showToPlayer = false;
                burst = 9;
                burstRangeMax = 20;
                aiRateOfFire = 4;
                aiRateOfFireDispersion = 4;
                aiRateOfFireDistance = 1400;
                minRange = 1400;
                minRangeProbab = 0.5;
                midRange = 1800;
                midRangeProbab = 0.15;
                maxRange = 2500;
                maxRangeProbab = 0.05;
			};
		};
    };
	class cannon_20mm_Heli_Light_03: cannon_20mm
	{
		displayName = $STR_A3_cannon_20mm0;
		magazines[] = {PylonWeapon_250Rnd_20mm_shells};
		muzzles[] = {HE};
		class HE: HE
		{
			magazines[] = {PylonWeapon_250Rnd_20mm_shells};
			class player: player
			{
				dispersion = 0.0018;
				reloadTime = 0.1;
			};
		};
	};
	class weapon_AGM_154Launcher: RocketPods
	{
		displayName = $STR_A3_A_Bomb_AGM_154_weapon_name;
		weaponLockDelay = 0.1;
		weaponLockSystem = LockYes + LockLaser;
		cmImmunity = CMImmunity_BAD;
		minRange = 400;
		minRangeProbab = 0.4;
		midRange = 2000;
		midRangeProbab = 0.95;
		maxRange = 16000;
		maxRangeProbab = 0.9;
		magazines[] =
		{
			magazine_Bomb_AGM_154_x1,
			PylonMissile_Bomb_AGM_154_x1
		};
		reloadTime = 0.1; // 600 RPM
		autoFire = false;
		magazineReloadTime = 0.1;
		aiRateOfFire = 5.0;
		aiRateOfFireDistance = 500;
		nameSound = "";
		cursor = EmptyCursor;
		cursorAim = bomb;
		showAimCursorInternal = false;
		ballisticsComputer = BallisticsCCIP;
		textureType = semi;
		lockedTargetSound[] = {"\A3\Sounds_F\weapons\Rockets\locked_3",db-5,2.5};
		lockingTargetSound[] = {"\A3\Sounds_F\weapons\Rockets\locked_1",db-5,1};
	};
	class autocannon_30mm_APC_Wheeled_04: autocannon_30mm_CTWS
	{
        displayName = $STR_A3_GATLING_30MM0;
		class HE: HE
		{
            displayName = $STR_A3_GATLING_30MM0;
            magazines[] =
            {
                340Rnd_30mm_HE_shells,
                340Rnd_30mm_HE_shells_Tracer_Red,
                340Rnd_30mm_HE_shells_Tracer_Green,
                340Rnd_30mm_HE_shells_Tracer_Yellow
            };
			class player: player
			{
			    reloadTime = RPM_450;
			};
		};
		class AP: AP
		{
            displayName = $STR_A3_GATLING_30MM0;
            magazines[] =
            {
                160Rnd_30mm_APFSDS_shells,
                160Rnd_30mm_APFSDS_shells_Tracer_Red,
                160Rnd_30mm_APFSDS_shells_Tracer_Green,
                160Rnd_30mm_APFSDS_shells_Tracer_Yellow
            };
			class player: player
			{
			    reloadTime = RPM_450;
			};
		};
		class GunParticles
		{
			class Effect
			{
				effectName = AutoCannonFired;
				positionName = "Usti hlavne";
				directionName = "Konec hlavne";
			};
		};
	};
	class missiles_Vorona_vehicle: missiles_Vorona
	{
        autoReload = true;
        backgroundReload = true;
		showAimCursorInternal = false;
		magazineReloadTime = 50;
		magazines[] =
        {
            Vorona_HEAT,
            Vorona_HE,
            4rnd_Vorona_HEAT,
            4rnd_Vorona_HE
        };
	};
    #include "cfgAcc.hpp"
    #include "cfgBinocular.hpp"
    #include "cfgLaunchers.hpp"
    #include "cfgLongRangeRifles.hpp"
    #include "cfgMachineguns.hpp"
    #include "cfgPistols.hpp"
    #include "cfgRifles.hpp"
    #include "cfgSMGs.hpp"
	#include "presets.hpp"      // Predefined accessorized weapons
    #include "deprecated.hpp"   // Deprecated / hidden classes
};