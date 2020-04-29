class CfgWeapons
{
	// Arma 3
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
	};
	class LMG_Minigun: LMG_RCWS
	{
		displayName = $STR_A3_A_CfgWeapons_LMG_Minigun0;
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
	class HMG_127;
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
	class HMG_static;
	class HMG_M2: HMG_01
	{
		magazines[] +=
		{
			200Rnd_127x99_mag,
			200Rnd_127x99_mag_Tracer_Red,
			200Rnd_127x99_mag_Tracer_Green,
			200Rnd_127x99_mag_Tracer_Yellow
		};
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
		class manual: GMG_F
		{
			displayName = $STR_A3_A_CfgWeapons_GMG_20mm0;
		};
	};
	class autocannon_Base_F;
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
	class LMG_coax: LMG_RCWS
	{
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
	class HMG_127_MBT: HMG_static{};
	class Launcher_Base_F;
	class UGL_F;
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
			class PointerSlot: PointerSlot_Rail
			{
				iconPosition[] = {0.05,0.38};
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
				iconPosition[] = {0.05,0.38};
				iconScale = 0.2;
			};
		};
	};
	class EBR_base_F;
	class srifle_EBR_F;
	class DMR_01_base_F: Rifle_Long_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: MuzzleSlot
			{
				compatibleItems[] +=
				{
					muzzle_snds_B_arid_F,
					muzzle_snds_B_lush_F,
					muzzle_mzls_B,
					muzzle_snds_B_wdm_F
				};
			};
			class PointerSlot: PointerSlot
			{
				compatibleItems[] =
				{
					acc_flashlight,
					acc_pointer_IR
				};
			};
		};
	};
	class srifle_DMR_01_F;
	class LMG_Mk200_F: Rifle_Long_Base_F
	{
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
			class MuzzleSlot: MuzzleSlot_762
			{
				linkProxy = "\A3\Data_F\proxies\weapon_slots\MUZZLE";
				compatibleItems[] =
				{
					muzzle_snds_B,
					muzzle_snds_B_khk_F,
					muzzle_snds_B_snd_F
				};
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
	class hgun_ACPC2_F: Pistol_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: MuzzleSlot
			{
				compatibleItems[] += {muzzle_mzls_acp};
			};
		};
	};
	class hgun_P07_F: Pistol_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: MuzzleSlot
			{
				compatibleItems[] += {muzzle_mzls_L};
			};
			class PointerSlot: PointerSlot
			{
				linkProxy = "\A3\Data_F\proxies\weapon_slots\SIDE";
				compatibleItems[] = {acc_flashlight_pistol};
				iconPosition[] =
				{
					0.39, // X
					0.48 // Y
				};
				iconScale = 0.2;
			};
		};
	};
	class hgun_Pistol_heavy_01_F: Pistol_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: MuzzleSlot
			{
				compatibleItems[] +=
				{
					muzzle_snds_pistol_heavy_01,
					muzzle_mzls_acp
				};
			};
		};
	};
	class hgun_Rook40_F: Pistol_Base_F
	{
		magazines[] =
		{
			17Rnd_9x21_Mag,
			16Rnd_9x21_Mag,
			16Rnd_9x21_red_Mag,
			16Rnd_9x21_green_Mag,
			16Rnd_9x21_yellow_Mag
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: MuzzleSlot
			{
				compatibleItems[] += {muzzle_mzls_L};
			};
		};
	};
	class arifle_Katiba_Base_F: Rifle_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: MuzzleSlot_65
			{
				compatibleItems[] +=
				{
					muzzle_mzls_H,
					muzzle_snds_65_TI_blk_F,
					muzzle_snds_65_TI_hex_F,
					muzzle_snds_65_TI_ghex_F
				};
			};
		};
	};
	class arifle_Katiba_F;
	class arifle_Katiba_C_F;
	class arifle_Katiba_GL_F;
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
	class arifle_Mk20_plain_F;
	class arifle_Mk20C_plain_F;
	class arifle_Mk20_GL_F;
	class arifle_Mk20_GL_plain_F: arifle_Mk20_GL_F
	{
		hiddenSelections[] =
		{
			camo,
			camo2
		};
		hiddenSelectionsTextures[] =
		{
			"\A3\Weapons_F_Beta\Rifles\MK20\Data\MK20_CO.paa",
			"\A3_Aegis\Weapons_F_Aegis\Rifles\MK20\Data\MK20_utilities_black_CO.paa"
		};
	};
	class arifle_MX_Base_F;
	class arifle_MXC_F: arifle_MX_Base_F
	{
		hiddenSelections[] = {camo1};
		hiddenSelectionsTextures[] = {"\A3_Aegis\Weapons_F_Aegis\Rifles\MX\Data\XMX_Short_CO.paa"};
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
	};
	class arifle_MX_GL_F: arifle_MX_Base_F
	{
		UiPicture = "\A3\Weapons_F\Data\UI\icon_regular_CA.paa";
		cursor = arifle;
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
	};
	class arifle_MX_SW_F: arifle_MX_Base_F
	{
		hiddenSelections[] = {camo1};
		hiddenSelectionsTextures[] = {"\A3_Aegis\Weapons_F_Aegis\Rifles\MX\Data\XMX_LMG_CO.paa"};
	};
	class arifle_MXM_F: arifle_MX_Base_F
	{
		hiddenSelections[] = {camo1};
		hiddenSelectionsTextures[] = {"\A3_Aegis\Weapons_F_Aegis\Rifles\MX\Data\XMX_Long_CO.paa"};
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
	class arifle_MXC_Black_F;
	class arifle_MX_Black_F;
	class arifle_MX_GL_Black_F;
	class arifle_MX_SW_Black_F;
	class arifle_MX_SW_Black_Hamr_pointer_F: arifle_MX_SW_Black_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = CowsSlot;
				item = optic_Hamr;
			};
			class LinkedItemsAcc
			{
				slot = PointerSlot;
				item = acc_pointer_IR;
			};
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
		class Single: Mode_SemiAuto
		{
			reloadTime = 0.066;
		};
		class FullAuto: Mode_FullAuto
		{
			reloadTime = 0.066;
		};
	};
	class arifle_TRG21_F: Tavor_base_F
	{
		hiddenSelections[] = {camo};
	};
	class arifle_TRG20_F;
	class arifle_TRG21_GL_F;
	class pdw2000_base_F: Rifle_Short_Base_F
	{
		magazines[] =
		{
			30Rnd_9x21_Mag,
			30Rnd_9x21_Red_Mag,
			30Rnd_9x21_Yellow_Mag,
			30Rnd_9x21_Green_Mag
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: MuzzleSlot
			{
				compatibleItems[] += {muzzle_mzls_L};
			};
		};
		modes[] =
		{
			Single,
			FullAuto
		};
	};
	class SMG_01_Base: Rifle_Short_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: MuzzleSlot
			{
				compatibleItems[] +=
				{
					muzzle_mzls_acp,
					muzzle_mzls_smg_01
				};
			};
		};
	};
	class SMG_01_F;
	class SMG_02_base_F: Rifle_Short_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: MuzzleSlot
			{
				compatibleItems[] += {muzzle_mzls_L};
			};
		};
	};
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
	class muzzle_snds_acp;
	class muzzle_snds_338_black;
	class acc_pointer_IR;
	// Arma 3 Marksman
	class srifle_DMR_02_F;
	class srifle_DMR_02_sniper_F: srifle_DMR_02_F
	{
		hiddenSelectionsTextures[] =
		{
			"\A3_Aegis\Weapons_F_Aegis\LongRangeRifles\DMR_02\Data\DMR_02_01_tan_CO.paa",
			"\A3_Aegis\Weapons_F_Aegis\LongRangeRifles\DMR_02\Data\DMR_02_02_tan_CO.paa"
		};
	};
	class srifle_DMR_03_F;
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
	class DMR_06_base_F;
	class srifle_DMR_06_camo_F: DMR_06_base_F
	{
		magazines[] = {20Rnd_762x51_weathered_Mag};
	};
	class srifle_DMR_06_olive_F: srifle_DMR_06_camo_F
	{
		magazines[] = {20Rnd_762x51_weathered_Mag};
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
	class arifle_MX_GL_khk_F;
	class arifle_MX_SW_khk_F;
	class arifle_MXC_khk_F;
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
	};
	class LMG_03_base_F;
	class LMG_03_F: LMG_03_base_F
	{
		hiddenSelectionsTextures[] =
		{
			"\A3_Aegis\Weapons_F_Aegis\Machineguns\LMG_03\Data\LMG_03_F_body_CO.paa",
			"\A3_Aegis\Weapons_F_Aegis\Machineguns\LMG_03\Data\LMG_03_F_acc_CO.paa",
			"\A3\Weapons_F_Enoch\Machineguns\M200\Data\grip_black_CO.paa"
		};
	};
	class arifle_AK12_base_F: Rifle_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: MuzzleSlot_762{};
			class CowsSlot: CowsSlot_Rail{};
			class PointerSlot: PointerSlot_Rail{};
			class UnderBarrelSlot: UnderBarrelSlot_rail{};
		};
		class Single: Mode_SemiAuto
		{
			reloadTime = 0.086;
		};
		class Burst: Mode_Burst
		{
	    	reloadTime = 0.06;
		};
		class FullAuto: Mode_FullAuto
		{
			reloadTime = 0.086;
		};
	};
	class arifle_AK12_F: arifle_AK12_base_F
	{
	  	displayName = $STR_A3_A_CfgWeapons_arifle_AK12_F0;
		picture = "\A3_Aegis\Weapons_F_Aegis\Rifles\AK12\Data\UI\icon_arifle_AK12_F_X_CA.paa";
	};
	class arifle_AK12_GL_base_F: arifle_AK12_base_F{};
	class arifle_AK12_GL_F: arifle_AK12_GL_base_F
	{
	  	displayName = $STR_A3_A_CfgWeapons_arifle_AK12_GL_F0;
		picture = "\A3_Aegis\Weapons_F_Aegis\Rifles\AK12\Data\UI\icon_arifle_AK12_GL_F_X_CA.paa";
	};
	class arifle_ARX_hex_F;
	class arifle_ARX_hex_DMS_Pointer_Snds_Bipod_F: arifle_ARX_hex_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = CowsSlot;
				item = optic_DMS;
			};
			class LinkedItemsAcc
			{
				slot = PointerSlot;
				item = acc_pointer_IR;
			};
			class LinkedItemsMuzzle
			{
				slot = MuzzleSlot;
				item = muzzle_snds_65_TI_hex_F;
			};
			class LinkedItemsUnder
			{
				slot = UnderBarrelSlot;
				item = bipod_02_F_hex;
			};
		};
	};
	class arifle_CTAR_base_F: Rifle_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: MuzzleSlot
			{
				compatibleItems[] += {muzzle_mzls_58_F};
			};
		};
	};
	class arifle_CTAR_GL_blk_F;
	class arifle_CTARS_base_F: Rifle_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: MuzzleSlot
			{
				compatibleItems[] += {muzzle_mzls_58_F};
			};
		};
	};
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
	class SMG_05_base_F: Rifle_Short_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: MuzzleSlot
			{
				compatibleItems[] += {muzzle_mzls_L};
			};
		};
	};
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
	class launcher_SPG9: MissileLauncher
	{
		reloadSound[] = {"\A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\reload_Missile_Launcher",db-1,1,10};
	};
	class autocannon_30mm_RCWS: autocannon_Base_F
	{
		magazines[] +=
		{
			60Rnd_30mm_MP_shells_Tracer_Red,
			60Rnd_30mm_MP_shells_Tracer_Yellow
		};
	};
	class HMG_127_LT: HMG_M2
	{
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
	class HMG_127_AFV: HMG_M2{};
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
	class launch_RPG32_camo_F: launch_RPG32_F
	{
		scope = public;
	};
	class LMG_Mk200_black_F;
	class hgun_Pistol_heavy_01_green_F;
	class arifle_AK12_lush_F: arifle_AK12_base_F
	{
	  	displayName = $STR_A3_A_CfgWeapons_arifle_AK12_lush_F0;
	};
	class arifle_AK12_arid_F: arifle_AK12_base_F
	{
	  	displayName = $STR_A3_A_CfgWeapons_arifle_AK12_arid_F0;
	};
	class arifle_AK12_GL_lush_F: arifle_AK12_GL_base_F
	{
	  	displayName = $STR_A3_A_CfgWeapons_arifle_AK12_GL_lush_F0;
	};
	class arifle_AK12_GL_arid_F: arifle_AK12_GL_base_F
	{
	  	displayName = $STR_A3_A_CfgWeapons_arifle_AK12_GL_arid_F0;
	};
	class arifle_AK12U_base_F: arifle_AK12_base_F{};
	class arifle_AK12U_F: arifle_AK12U_base_F
	{
	  	displayName = $STR_A3_A_CfgWeapons_arifle_AK12U_F0;
	};
	class arifle_AK12U_lush_F: arifle_AK12U_base_F
	{
	  	displayName = $STR_A3_A_CfgWeapons_arifle_AK12U_lush_F0;
	};
	class arifle_AK12U_arid_F: arifle_AK12U_base_F
	{
	  	displayName = $STR_A3_A_CfgWeapons_arifle_AK12U_arid_F0;
	};
	class arifle_RPK12_base_F;
	class arifle_RPK12_F;
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
	class arifle_MSBS65_UBS_F: arifle_MSBS65_UBS_base_F{};
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
		modes[] = {TopDown};
		class TopDown: RocketPods
		{
			textureType = topDown;
			displayName = $STR_A3_A_CfgWeapons_missiles_Vikhr0;
			reloadTime = 0.1;
			magazineReloadTime = 0.1;
			sounds[] = {StandardSound};
			aiRateOfFire = 5.0;
			aiRateOfFireDistance = 500;
			showToPlayer = true;
			minRange = 400;
			minRangeProbab = 0.2;
			midRange = 800;
			midRangeProbab = 0.96;
			maxRange = 6000;
			maxRangeProbab = 0.92;
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
	/*
	class Laserdesignator_02_blk_F: Laserdesignator_02
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgWeapons_Laserdesignator_02_blk_F0;
		model = "\A3_Aegis\Hexedit_F_Aegis\Laserdesignator_02_blk_F.p3d";
		picture = "\A3_Aegis\Weapons_F_Aegis\Binocular\Data\UI\icon_Laserdesignator_02_blk_F_X_CA.paa";
	};
	class Laserdesignator_02_grn_F: Laserdesignator_02
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgWeapons_Laserdesignator_02_grn_F0;
		model = "\A3_Aegis\Hexedit_F_Aegis\Laserdesignator_02_grn_F.p3d";
		picture = "\A3_Aegis\Weapons_F_Aegis\Binocular\Data\UI\icon_Laserdesignator_02_grn_F_X_CA.paa";
	};
	*/
	class Laserdesignator_04: Laserdesignator
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgWeapons_Laserdesignator_040;
		model = "\A3\Weapons_F_Beta\Binocular\LTLM.p3d";
		picture = "\A3\Weapons_F\Data\UI\gear_Lasermarker_CA.paa";
	};
	class launch_RPG32_black_F: launch_RPG32_F
	{
		author = $STR_A3_A_AveryTheKitty;
		baseWeapon = launch_RPG32_black_F;
		displayName = $STR_A3_A_CfgWeapons_launch_RPG32_black_F0;
		hiddenSelectionsTextures[] =
		{
			"\A3_Aegis\Weapons_F_Aegis\Launchers\RPG32\Data\RPG_32_body_black_CO.paa",
			"\A3\Weapons_F\Launchers\RPG32\Data\RPG_32_optics_CO.paa"
		};
		picture = "\A3_Aegis\Weapons_F_Aegis\Launchers\RPG32\Data\UI\icon_launch_RPG32_black_F_X_CA.paa";
	};
	class launch_Titan_blk_F: launch_Titan_base
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_launch_Titan_blk_F0;
		hiddenSelectionsTextures[] =
		{
			"\A3_Aegis\Weapons_F_Aegis\Launchers\Titan\Data\launcher_blk_CO.paa",
			"\A3_Aegis\Weapons_F_Aegis\Launchers\Titan\Data\tubeL_blk_CO.paa"
		};
		picture = "\A3_Aegis\Weapons_F_Aegis\Launchers\Titan\Data\UI\icon_launch_Titan_blk_F_X_CA.paa";
	};
	class launch_Titan_short_blk_F: launch_Titan_short_base
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_launch_Titan_short_blk_F0;
		hiddenSelectionsTextures[] =
		{
			"\A3_Aegis\Weapons_F_Aegis\Launchers\Titan\Data\launcher_blk_CO.paa",
			"\A3_Aegis\Weapons_F_Aegis\Launchers\Titan\Data\tubeM_blk_CO.paa"
		};
		picture = "\A3_Aegis\Weapons_F_Aegis\Launchers\Titan\Data\UI\icon_launch_Titan_short_blk_F_X_CA.paa";
	};
	class srifle_EBR_blk_F: srifle_EBR_F
	{
		author = $STR_A3_A_AveryTheKitty;
		baseWeapon = srifle_EBR_blk_F;
		displayName = $STR_A3_A_CfgWeapons_srifle_EBR_blk_F0;
		hiddenSelectionsTextures[] =
		{
			"\A3_Aegis\Weapons_F_Aegis\LongRangeRifles\EBR\Data\srifle_EBR_blk_F_1_CO.paa",
			"\A3_Aegis\Weapons_F_Aegis\LongRangeRifles\EBR\Data\srifle_EBR_blk_F_2_CO.paa"
		};
		picture = "\A3_Aegis\Weapons_F_Aegis\LongRangeRifles\EBR\Data\UI\icon_srifle_EBR_blk_F_X_CA.paa";
	};
	class srifle_EBR_khk_F: srifle_EBR_F
	{
		author = $STR_A3_A_AveryTheKitty;
		baseWeapon = srifle_EBR_khk_F;
		displayName = $STR_A3_A_CfgWeapons_srifle_EBR_khk_F0;
		hiddenSelectionsTextures[] =
		{
			"\A3_Aegis\Weapons_F_Aegis\LongRangeRifles\EBR\Data\srifle_EBR_khk_F_1_CO.paa",
			"\A3_Aegis\Weapons_F_Aegis\LongRangeRifles\EBR\Data\srifle_EBR_khk_F_2_CO.paa"
		};
		picture = "\A3_Aegis\Weapons_F_Aegis\LongRangeRifles\EBR\Data\UI\icon_srifle_EBR_khk_F_X_CA.paa";
	};
	class srifle_EBR_MOS_LP_BI_F: srifle_EBR_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = CowsSlot;
				item = optic_SOS;
			};
			class LinkedItemsAcc
			{
				slot = PointerSlot;
				item = acc_pointer_IR;
			};
			class LinkedItemsUnder
			{
				slot = UnderBarrelSlot;
				item = bipod_03_F_blk;
			};
		};
	};
	class srifle_EBR_blk_DMS_LP_BI_S_F: srifle_EBR_blk_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = CowsSlot;
				item = optic_DMS;
			};
			class LinkedItemsAcc
			{
				slot = PointerSlot;
				item = acc_pointer_IR;
			};
			class LinkedItemsMuzzle
			{
				slot = MuzzleSlot;
				item = muzzle_snds_B;
			};
			class LinkedItemsUnder
			{
				slot = UnderBarrelSlot;
				item = bipod_01_F_blk;
			};
		};
	};
	class srifle_EBR_khk_DMS_LP_BI_S_F: srifle_EBR_khk_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = CowsSlot;
				item = optic_DMS;
			};
			class LinkedItemsAcc
			{
				slot = PointerSlot;
				item = acc_pointer_IR;
			};
			class LinkedItemsMuzzle
			{
				slot = MuzzleSlot;
				item = muzzle_snds_B_khk_F;
			};
			class LinkedItemsUnder
			{
				slot = UnderBarrelSlot;
				item = bipod_01_F_khk;
			};
		};
	};
	class srifle_DMR_01_black_F: srifle_DMR_01_F
	{
		author = $STR_A3_A_AveryTheKitty;
		baseWeapon = srifle_DMR_01_black_F;
		displayName = $STR_A3_A_CfgWeapons_srifle_DMR_01_black_F0;
		hiddenSelectionsTextures[] =
		{
			"\A3_Aegis\Weapons_F_Aegis\LongRangeRifles\DMR_01\Data\DMR_01_black_CO.paa",
			"\A3_Aegis\Weapons_F_Aegis\LongRangeRifles\DMR_01\Data\DMR_02_black_CO.paa"
		};
		picture = "\A3_Aegis\Weapons_F_Aegis\LongRangeRifles\DMR_01\Data\UI\icon_srifle_DMR_01_black_F_X_CA.paa";
	};
	class srifle_DMR_01_arid_F: srifle_DMR_01_F
	{
		author = $STR_A3_A_AveryTheKitty;
		baseWeapon = srifle_DMR_01_arid_F;
		displayName = $STR_A3_A_CfgWeapons_srifle_DMR_01_arid_F0;
		hiddenSelectionsTextures[] =
		{
			"\A3_Aegis\Weapons_F_Aegis\LongRangeRifles\DMR_01\Data\DMR_01_camo_CO.paa",
			"\A3_Aegis\Weapons_F_Aegis\LongRangeRifles\DMR_01\Data\DMR_02_camo_CO.paa"
		};
		hiddenSelectionsMaterials[] =
		{
			"\A3_Aegis\Weapons_F_Aegis\LongRangeRifles\DMR_01\Data\DMR_01_camo.rvmat",
			"\A3_Aegis\Weapons_F_Aegis\LongRangeRifles\DMR_01\Data\DMR_02_camo.rvmat"
		};
		picture = "\A3_Aegis\Weapons_F_Aegis\LongRangeRifles\DMR_01\Data\UI\icon_srifle_DMR_01_arid_F_X_CA.paa";
	};
	class srifle_DMR_01_lush_F: srifle_DMR_01_F
	{
		author = $STR_A3_A_AveryTheKitty;
		baseWeapon = srifle_DMR_01_lush_F;
		displayName = $STR_A3_A_CfgWeapons_srifle_DMR_01_lush_F0;
		hiddenSelectionsTextures[] =
		{
			"\A3_Aegis\Weapons_F_Aegis\LongRangeRifles\DMR_01\Data\DMR_01_khaki_CO.paa",
			"\A3_Aegis\Weapons_F_Aegis\LongRangeRifles\DMR_01\Data\DMR_02_khaki_CO.paa"
		};
		hiddenSelectionsMaterials[] =
		{
			"\A3_Aegis\Weapons_F_Aegis\LongRangeRifles\DMR_01\Data\DMR_01_khaki.rvmat",
			"\A3_Aegis\Weapons_F_Aegis\LongRangeRifles\DMR_01\Data\DMR_02_khaki.rvmat"
		};
		picture = "\A3_Aegis\Weapons_F_Aegis\LongRangeRifles\DMR_01\Data\UI\icon_srifle_DMR_01_lush_F_X_CA.paa";
	};
	class srifle_DMR_01_DMS_LP_BI_F: srifle_DMR_01_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = CowsSlot;
				item = optic_DMS;
			};
			class LinkedItemsAcc
			{
				slot = PointerSlot;
				item = acc_pointer_IR;
			};
			class LinkedItemsUnder
			{
				slot = UnderBarrelSlot;
				item = bipod_02_F_hex;
			};
		};
	};
	class srifle_DMR_01_DMS_LP_BI_S_F: srifle_DMR_01_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = CowsSlot;
				item = optic_DMS;
			};
			class LinkedItemsAcc
			{
				slot = PointerSlot;
				item = acc_pointer_IR;
			};
			class LinkedItemsMuzzle
			{
				slot = MuzzleSlot;
				item = muzzle_snds_B;
			};
			class LinkedItemsUnder
			{
				slot = UnderBarrelSlot;
				item = bipod_02_F_hex;
			};
		};
	};
	class srifle_DMR_01_black_DMS_LP_BI_F: srifle_DMR_01_black_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = CowsSlot;
				item = optic_DMS;
			};
			class LinkedItemsAcc
			{
				slot = PointerSlot;
				item = acc_pointer_IR;
			};
			class LinkedItemsUnder
			{
				slot = UnderBarrelSlot;
				item = bipod_02_F_blk;
			};
		};
	};
	class srifle_DMR_02_sniper_AMS_LP_BI_F: srifle_DMR_02_sniper_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = CowsSlot;
				item = optic_AMS_snd;
			};
			class LinkedItemsAcc
			{
				slot = PointerSlot;
				item = acc_pointer_IR;
			};
			class LinkedItemsUnder
			{
				slot = UnderBarrelSlot;
				item = bipod_01_F_snd;
			};
		};
	};
	class srifle_DMR_02_AMS_LP_BI_F: srifle_DMR_02_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = CowsSlot;
				item = optic_AMS;
			};
			class LinkedItemsAcc
			{
				slot = PointerSlot;
				item = acc_pointer_IR;
			};
			class LinkedItemsUnder
			{
				slot = UnderBarrelSlot;
				item = bipod_01_F_blk;
			};
		};
	};
	class srifle_DMR_03_AMS_LP_BI_F: srifle_DMR_03_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = CowsSlot;
				item = optic_AMS;
			};
			class LinkedItemsAcc
			{
				slot = PointerSlot;
				item = acc_pointer_IR;
			};
			class LinkedItemsUnder
			{
				slot = UnderBarrelSlot;
				item = bipod_01_F_blk;
			};
		};
	};
	class srifle_DMR_03_khaki_AMS_LP_BI_F: srifle_DMR_03_khaki_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = CowsSlot;
				item = optic_AMS_khk;
			};
			class LinkedItemsAcc
			{
				slot = PointerSlot;
				item = acc_pointer_IR;
			};
			class LinkedItemsUnder
			{
				slot = UnderBarrelSlot;
				item = bipod_01_F_khk;
			};
		};
	};
	class srifle_DMR_05_blk_LRPS_LP_BI_F: srifle_DMR_05_blk_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = CowsSlot;
				item = optic_LRPS;
			};
			class LinkedItemsAcc
			{
				slot = PointerSlot;
				item = acc_pointer_IR;
			};
			class LinkedItemsUnder
			{
				slot = UnderBarrelSlot;
				item = bipod_02_F_blk;
			};
		};
	};
	class srifle_DMR_05_hex_KHS_LP_BI_F: srifle_DMR_05_hex_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = CowsSlot;
				item = optic_KHS_hex;
			};
			class LinkedItemsAcc
			{
				slot = PointerSlot;
				item = acc_pointer_IR;
			};
			class LinkedItemsUnder
			{
				slot = UnderBarrelSlot;
				item = bipod_02_F_hex;
			};
		};
	};
	class LMG_Mk200_MRCO_LP_BI_F: LMG_Mk200_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = CowsSlot;
				item = optic_MRCO;
			};
			class LinkedItemsAcc
			{
				slot = PointerSlot;
				item = acc_pointer_IR;
			};
			class LinkedItemsUnder
			{
				slot = UnderBarrelSlot;
				item = bipod_03_F_blk;
			};
		};
	};
	class LMG_Mk200_plain_F: LMG_Mk200_F
	{
		author = $STR_A3_A_AveryTheKitty;
		baseWeapon = LMG_Mk200_plain_F;
		displayName = $STR_A3_A_CfgWeapons_LMG_Mk200_plain_F0;
		hiddenSelectionsTextures[] =
		{
			"\A3_Aegis\Weapons_F_Aegis\Machineguns\M200\Data\1st_person_CO.paa",
			"\A3_Aegis\Weapons_F_Aegis\Machineguns\M200\Data\body_CO.paa",
			"\A3_Aegis\Weapons_F_Aegis\Machineguns\M200\Data\grip_CO.paa"
		};
		picture = "\A3_Aegis\Weapons_F_Aegis\Machineguns\M200\Data\UI\icon_LMG_Mk200_plain_F_X_CA.paa";
	};
	class LMG_Mk200_khk_F: LMG_Mk200_F
	{
		author = $STR_A3_A_AveryTheKitty;
		baseWeapon = LMG_Mk200_khk_F;
		displayName = $STR_A3_A_CfgWeapons_LMG_Mk200_khk_F0;
		hiddenSelectionsTextures[] =
		{
			"\A3_Aegis\Weapons_F_Aegis\Machineguns\M200\Data\LMG_Mk200_khk_F_1_CO.paa",
			"\A3_Aegis\Weapons_F_Aegis\Machineguns\M200\Data\LMG_Mk200_khk_F_2_CO.paa",
			"\A3_Aegis\Weapons_F_Aegis\Machineguns\M200\Data\LMG_Mk200_khk_F_3_CO.paa"
		};
		picture = "\A3_Aegis\Weapons_F_Aegis\Machineguns\M200\Data\UI\icon_LMG_Mk200_khk_F_X_CA.paa";
	};
	class LMG_Mk200_plain_ARCO_LP_BI_F: LMG_Mk200_plain_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = CowsSlot;
				item = optic_Arco;
			};
			class LinkedItemsAcc
			{
				slot = PointerSlot;
				item = acc_pointer_IR;
			};
			class LinkedItemsUnder
			{
				slot = UnderBarrelSlot;
				item = bipod_01_F_snd;
			};
		};
	};
	class LMG_Mk200_plain_RCO_LP_BI_F: LMG_Mk200_plain_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = CowsSlot;
				item = optic_Hamr;
			};
			class LinkedItemsAcc
			{
				slot = PointerSlot;
				item = acc_pointer_IR;
			};
			class LinkedItemsUnder
			{
				slot = UnderBarrelSlot;
				item = bipod_01_F_snd;
			};
		};
	};
	class LMG_Mk200_khk_ARCO_Pointer_Bipod_F: LMG_Mk200_khk_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = CowsSlot;
				item = optic_Arco_blk_F;
			};
			class LinkedItemsAcc
			{
				slot = PointerSlot;
				item = acc_pointer_IR;
			};
			class LinkedItemsUnder
			{
				slot = UnderBarrelSlot;
				item = bipod_01_F_khk;
			};
		};
	};
	class LMG_Mk200_khk_Hamr_Pointer_Bipod_F: LMG_Mk200_khk_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = CowsSlot;
				item = optic_Hamr_khk_F;
			};
			class LinkedItemsAcc
			{
				slot = PointerSlot;
				item = acc_pointer_IR;
			};
			class LinkedItemsUnder
			{
				slot = UnderBarrelSlot;
				item = bipod_01_F_khk;
			};
		};
	};
	class LMG_Zafir_black_F: LMG_Zafir_F
	{
		author = $STR_A3_A_AveryTheKitty;
		baseWeapon = LMG_Zafir_black_F;
		displayName = $STR_A3_A_CfgWeapons_LMG_Zafir_black_F0;
		descriptionShort = $STR_A3_A_CfgWeapons_LMG_Zafir_black_F1;
		hiddenSelectionsTextures[] =
		{
			"\A3_Aegis\Weapons_F_Aegis\Machineguns\Zafir\Data\Zafir01_black_CO.paa",
			"\A3_Aegis\Weapons_F_Aegis\Machineguns\Zafir\Data\Zafir02_black_CO.paa"
		};
		picture = "\A3_Aegis\Weapons_F_Aegis\Machineguns\Zafir\Data\UI\icon_LMG_Zafir_black_F_X_CA.paa";
	};
	class LMG_Zafir_ghex_F: LMG_Zafir_F
	{
		author = $STR_A3_A_AveryTheKitty;
		baseWeapon = LMG_Zafir_ghex_F;
		displayName = $STR_A3_A_CfgWeapons_LMG_Zafir_ghex_F0;
		hiddenSelectionsTextures[] =
		{
			"\A3_Aegis\Weapons_F_Aegis\Machineguns\Zafir\Data\LMG_Zafir_ghex_F_1_CO.paa",
			"\A3_Aegis\Weapons_F_Aegis\Machineguns\Zafir\Data\LMG_Zafir_ghex_F_2_CO.paa"
		};
		picture = "\A3_Aegis\Weapons_F_Aegis\Machineguns\Zafir\Data\UI\icon_LMG_Zafir_ghex_F_X_CA.paa";
	};
	class LMG_Zafir_ARCO_pointer_F: LMG_Zafir_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = CowsSlot;
				item = optic_Arco;
			};
			class LinkedItemsAcc
			{
				slot = PointerSlot;
				item = acc_pointer_IR;
			};
		};
	};
	class LMG_Zafir_ARCO_pointer_snds_F: LMG_Zafir_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = CowsSlot;
				item = optic_Arco;
			};
			class LinkedItemsAcc
			{
				slot = PointerSlot;
				item = acc_pointer_IR;
			};
			class LinkedItemsMuzzle
			{
				slot = MuzzleSlot;
				item = muzzle_snds_B;
			};
		};
	};
	class LMG_Zafir_black_ARCO_pointer_F: LMG_Zafir_black_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = CowsSlot;
				item = optic_Arco_blk_F;
			};
			class LinkedItemsAcc
			{
				slot = PointerSlot;
				item = acc_pointer_IR;
			};
		};
	};
	class MMG_01_hex_ARCO_LP_F: MMG_01_hex_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = CowsSlot;
				item = optic_Arco;
			};
			class LinkedItemsAcc
			{
				slot = PointerSlot;
				item = acc_pointer_IR;
			};
			class LinkedItemsUnder
			{
				slot = UnderBarrelSlot;
				item = bipod_02_F_hex;
			};
		};
	};
	class MMG_02_black_RCO_LP_F: MMG_02_black_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = CowsSlot;
				item = optic_Hamr;
			};
			class LinkedItemsAcc
			{
				slot = PointerSlot;
				item = acc_pointer_IR;
			};
			class LinkedItemsUnder
			{
				slot = UnderBarrelSlot;
				item = bipod_01_F_blk;
			};
		};
	};
	class hgun_P07_blk_F: hgun_P07_F
	{
		author = $STR_A3_A_AveryTheKitty;
		baseWeapon = hgun_P07_blk_F;
		displayName = $STR_A3_A_CfgWeapons_hgun_P07_blk_F0;
		hiddenSelectionsTextures[] = {"\A3_Aegis\Weapons_F_Aegis\Pistols\P07\Data\hgun_P07_blk_F.paa"};
		picture = "\A3_Aegis\Weapons_F_Aegis\Pistols\P07\Data\UI\icon_hgun_P07_blk_F_X_CA.paa";
	};
	class hgun_P07_blk_snds_F: hgun_P07_blk_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class LinkedItems
		{
			class LinkedItemsMuzzle
			{
				slot = MuzzleSlot;
				item = muzzle_snds_L;
			};
		};
	};
	class hgun_Pistol_heavy_01_black_F: hgun_Pistol_heavy_01_F
	{
		author = $STR_A3_A_AveryTheKitty;
		baseWeapon = hgun_Pistol_heavy_01_black_F;
		displayname = $STR_A3_A_CfgWeapons_hgun_Pistol_heavy_01_black_F0;
		hiddenSelectionsTextures[] = {"\A3_Aegis\Weapons_F_Aegis\Pistols\Pistol_Heavy_01\Data\Pistol_heavy_01_black_CO.paa"};
		picture = "\A3_Aegis\Weapons_F_Aegis\Pistols\Pistol_Heavy_01\Data\UI\icon_hgun_Pistol_heavy_01_black_F_X_CA.paa";
	};
	class hgun_Pistol_heavy_01_black_MRD_F: hgun_Pistol_heavy_01_black_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = CowsSlot;
				item = optic_MRD_black;
			};
		};
	};
	class arifle_Mk20_black_F: arifle_Mk20_plain_F
	{
		author = $STR_A3_A_AveryTheKitty;
		baseWeapon = arifle_Mk20_black_F;
		displayName = $STR_A3_A_CfgWeapons_arifle_Mk20_black_F0;
		hiddenSelectionsTextures[] = {"\A3_Aegis\Weapons_F_Aegis\Rifles\MK20\Data\MK20_black_CO.paa"};
		picture = "\A3_Aegis\Weapons_F_Aegis\Rifles\MK20\Data\UI\icon_arifle_Mk20_black_F_X_CA.paa";
	};
	class arifle_Mk20_hex_F: arifle_Mk20_plain_F
	{
		author = $STR_A3_A_AveryTheKitty;
		baseWeapon = arifle_Mk20_hex_F;
		displayName = $STR_A3_A_CfgWeapons_arifle_Mk20_hex_F0;
		hiddenSelectionsTextures[] = {"\A3_Aegis\Weapons_F_Aegis\Rifles\MK20\Data\MK20_OPFOR_CO.paa"};
		picture = "\A3_Aegis\Weapons_F_Aegis\Rifles\MK20\Data\UI\icon_arifle_Mk20_hex_F_X_CA.paa";
	};
	class arifle_Mk20C_black_F: arifle_Mk20C_plain_F
	{
		author = $STR_A3_A_AveryTheKitty;
		baseWeapon = arifle_Mk20C_black_F;
		displayName = $STR_A3_A_CfgWeapons_arifle_Mk20C_black_F0;
		hiddenSelectionsTextures[] = {"\A3_Aegis\Weapons_F_Aegis\Rifles\MK20\Data\MK20_black_CO.paa"};
		picture = "\A3_Aegis\Weapons_F_Aegis\Rifles\MK20\Data\UI\icon_arifle_Mk20C_black_F_X_CA.paa";
	};
	class arifle_Mk20C_hex_F: arifle_Mk20C_plain_F
	{
		author = $STR_A3_A_AveryTheKitty;
		baseWeapon = arifle_Mk20C_hex_F;
		displayName = $STR_A3_A_CfgWeapons_arifle_Mk20C_hex_F0;
		hiddenSelectionsTextures[] = {"\A3_Aegis\Weapons_F_Aegis\Rifles\MK20\Data\MK20_OPFOR_CO.paa"};
		picture = "\A3_Aegis\Weapons_F_Aegis\Rifles\MK20\Data\UI\icon_arifle_Mk20C_hex_F_X_CA.paa";
	};
	class arifle_Mk20_GL_black_F: arifle_Mk20_GL_plain_F
	{
		author = $STR_A3_A_AveryTheKitty;
		baseWeapon = arifle_Mk20_GL_black_F;
		displayName = $STR_A3_A_CfgWeapons_arifle_Mk20_GL_black_F0;
		hiddenSelectionsTextures[] =
		{
			"\A3_Aegis\Weapons_F_Aegis\Rifles\MK20\Data\MK20_black_CO.paa",
			"\A3_Aegis\Weapons_F_Aegis\Rifles\MK20\Data\MK20_utilities_black_CO.paa"
		};
		picture = "\A3_Aegis\Weapons_F_Aegis\Rifles\MK20\Data\UI\icon_arifle_Mk20_GL_black_F_X_CA.paa";
	};
	class arifle_Mk20_GL_hex_F: arifle_Mk20_GL_plain_F
	{
		author = $STR_A3_A_AveryTheKitty;
		baseWeapon = arifle_Mk20_GL_hex_F;
		displayName = $STR_A3_A_CfgWeapons_arifle_Mk20_GL_hex_F0;
		hiddenSelectionsTextures[] =
		{
			"\A3_Aegis\Weapons_F_Aegis\Rifles\MK20\Data\MK20_OPFOR_CO.paa",
			"\A3_Aegis\Weapons_F_Aegis\Rifles\MK20\Data\MK20_utilities_black_CO.paa"
		};
		picture = "\A3_Aegis\Weapons_F_Aegis\Rifles\MK20\Data\UI\icon_arifle_Mk20_GL_hex_F_X_CA.paa";
	};
	class arifle_Mk20_GL_ACO_pointer_F: arifle_Mk20_GL_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = CowsSlot;
				item = optic_ACO_grn;
			};
			class LinkedItemsAcc
			{
				slot = PointerSlot;
				item = acc_pointer_IR;
			};
		};
	};
	class arifle_MX_SW_RCO_LP_F: arifle_MX_SW_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = CowsSlot;
				item = optic_Hamr;
			};
			class LinkedItemsAcc
			{
				slot = PointerSlot;
				item = acc_pointer_IR;
			};
			class LinkedItemsUnder
			{
				slot = UnderBarrelSlot;
				item = bipod_01_F_snd;
			};
		};
	};
	class arifle_MXM_MOS_LP_BI_F: arifle_MXM_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = CowsSlot;
				item = optic_SOS;
			};
			class LinkedItemsAcc
			{
				slot = PointerSlot;
				item = acc_pointer_IR;
			};
			class LinkedItemsUnder
			{
				slot = UnderBarrelSlot;
				item = bipod_01_F_snd;
			};
		};
	};
	class arifle_MXC_Black_Hamr_pointer_F: arifle_MXC_Black_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = CowsSlot;
				item = optic_Hamr;
			};
			class LinkedItemsAcc
			{
				slot = PointerSlot;
				item = acc_pointer_IR;
			};
		};
	};
	class arifle_MXC_Black_ACO_F: arifle_MXC_Black_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = CowsSlot;
				item = optic_ACO;
			};
		};
	};
	class arifle_MXC_Black_Holo_F: arifle_MXC_Black_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = CowsSlot;
				item = optic_Holosight_blk_F;
			};
		};
	};
	class arifle_MXC_Black_ACO_FL_F: arifle_MXC_Black_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = CowsSlot;
				item = optic_ACO;
			};
			class LinkedItemsAcc
			{
				slot = PointerSlot;
				item = acc_flashlight;
			};
		};
	};
	class arifle_MX_Black_RCO_FL_F: arifle_MX_Black_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = CowsSlot;
				item = optic_Hamr;
			};
			class LinkedItemsAcc
			{
				slot = PointerSlot;
				item = acc_flashlight;
			};
		};
	};
	class arifle_MX_GL_Black_ACO_F: arifle_MX_GL_Black_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = CowsSlot;
				item = optic_ACO_grn;
			};
		};
	};
	class arifle_MX_GL_Black_ACO_Pointer_F: arifle_MX_GL_Black_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = CowsSlot;
				item = optic_ACO;
			};
			class LinkedItemsAcc
			{
				slot = PointerSlot;
				item = acc_pointer_IR;
			};
		};
	};
	class arifle_MX_GL_Black_ACO_FL_F: arifle_MX_GL_Black_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = CowsSlot;
				item = optic_ACO;
			};
			class LinkedItemsAcc
			{
				slot = PointerSlot;
				item = acc_flashlight;
			};
		};
	};
	class arifle_MX_SW_Black_FL_F: arifle_MX_SW_Black_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class LinkedItems
		{
			class LinkedItemsAcc
			{
				slot = PointerSlot;
				item = acc_flashlight;
			};
			class LinkedItemsUnder
			{
				slot = UnderBarrelSlot;
				item = bipod_01_F_blk;
			};
		};
	};
	class arifle_MXM_Black_MOS_LP_BI_F: arifle_MXM_Black_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = CowsSlot;
				item = optic_SOS;
			};
			class LinkedItemsAcc
			{
				slot = PointerSlot;
				item = acc_pointer_IR;
			};
			class LinkedItemsUnder
			{
				slot = UnderBarrelSlot;
				item = bipod_01_F_blk;
			};
		};
	};
	class arifle_MXM_Black_RCO_BI_F: arifle_MXM_Black_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = CowsSlot;
				item = optic_Hamr;
			};
			class LinkedItemsUnder
			{
				slot = UnderBarrelSlot;
				item = bipod_01_F_blk;
			};
		};
	};
	class arifle_MX_GL_khk_ACO_Pointer_F: arifle_MX_GL_khk_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = CowsSlot;
				item = optic_ACO;
			};
			class LinkedItemsAcc
			{
				slot = PointerSlot;
				item = acc_pointer_IR;
			};
		};
	};
	class arifle_MXC_khk_Holo_F: arifle_MXC_khk_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = CowsSlot;
				item = optic_Holosight_khk_F;
			};
		};
	};
	class arifle_MX_SW_khk_Hamr_Pointer_F: arifle_MX_SW_khk_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = CowsSlot;
				item = optic_Hamr_khk_F;
			};
			class LinkedItemsAcc
			{
				slot = PointerSlot;
				item = acc_pointer_IR;
			};
			class LinkedItemsUnder
			{
				slot = UnderBarrelSlot;
				item = bipod_01_F_khk;
			};
		};
	};
	class arifle_TRG21_black_F: arifle_TRG21_F
	{
		author = $STR_A3_A_AveryTheKitty;
		baseWeapon = arifle_TRG21_black_F;
		displayName = $STR_A3_A_CfgWeapons_arifle_TRG21_black_F0;
		hiddenSelectionsTextures[] = {"\A3_Aegis\Weapons_F_Aegis\Rifles\TRG20\Data\TAR21_black_CO.paa"};
		picture = "\A3_Aegis\Weapons_F_Aegis\Rifles\TRG20\Data\UI\icon_arifle_TRG21_black_F_X_CA.paa";
	};
	class arifle_TRG20_black_F: arifle_TRG20_F
	{
		author = $STR_A3_A_AveryTheKitty;
		baseWeapon = arifle_TRG20_black_F;
		displayName = $STR_A3_A_CfgWeapons_arifle_TRG20_black_F0;
		hiddenSelectionsTextures[] = {"\A3_Aegis\Weapons_F_Aegis\Rifles\TRG20\Data\TAR21_black_CO.paa"};
		picture = "\A3_Aegis\Weapons_F_Aegis\Rifles\TRG20\Data\UI\icon_arifle_TRG20_black_F_X_CA.paa";
	};
	class arifle_TRG21_GL_black_F: arifle_TRG21_GL_F
	{
		author = $STR_A3_A_AveryTheKitty;
		baseWeapon = arifle_TRG21_GL_black_F;
		displayName = $STR_A3_A_CfgWeapons_arifle_TRG21_GL_black_F0;
		hiddenSelectionsTextures[] =
		{
			"\A3_Aegis\Weapons_F_Aegis\Rifles\TRG20\Data\TAR21_black_CO.paa",
			"\A3\Weapons_F\Rifles\TRG20\Data\TAR21_EGLM_CO.paa",
			"\A3\Weapons_F\Data\GL_holo_CO.paa"
		};
		picture = "\A3_Aegis\Weapons_F_Aegis\Rifles\TRG20\Data\UI\icon_arifle_TRG21_GL_black_F_X_CA.paa";
	};
	class arifle_AK12_arco_pointer_F: arifle_AK12_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = CowsSlot;
				item = optic_Arco_AK_blk_F;
			};
			class LinkedItemsAcc
			{
				slot = PointerSlot;
				item = acc_pointer_IR;
			};
		};
	};
	class arifle_AK12_545_F: arifle_AK12_F
	{
		author = $STR_A3_A_AveryTheKitty;
		baseWeapon = arifle_AK12_545_F;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_arifle_AK12_545_F0;
	  	descriptionShort = $STR_A3_A_CfgWeapons_arifle_AK12_545_F1;
		magazines[] = {30Rnd_545x39_black_Mag_F};
		magazineWell[] = {AK_545x39};
	  	initSpeed = 900;
	  	recoil = recoil_ak12_545;
		picture = "\A3_Aegis\Weapons_F_Aegis\Rifles\AK12\Data\UI\icon_arifle_AK12_545_F_X_CA.paa";
	  	class WeaponSlotsInfo: WeaponSlotsInfo
	  	{
			class MuzzleSlot: MuzzleSlot
			{
				compatibleItems[] =
				{
					muzzle_snds_545,
					muzzle_snds_545_wdm_F,
					muzzle_snds_545_lush_F,
					muzzle_snds_545_arid_F,
					muzzle_mzls_545
				};
			};
			class CowsSlot: CowsSlot{};
			class PointerSlot: PointerSlot{};
			class UnderBarrelSlot: UnderBarrelSlot{};
	  	};
		class Single: Single
		{
			reloadTime = 0.086;
			dispersion = 0.00073;
		};
		class Burst: Burst
		{
			textureType = dual;
			burst = 2;
	    	reloadTime = 0.06;
			dispersion = 0.00073;
		};
		class FullAuto: FullAuto
		{
			reloadTime = 0.086;
			dispersion = 0.00073;
		};
	};
	class arifle_AK12_GL_545_F: arifle_AK12_GL_F
	{
		author = $STR_A3_A_AveryTheKitty;
		baseWeapon = arifle_AK12_GL_545_F;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_arifle_AK12_GL_545_F0;
	  	descriptionShort = $STR_A3_A_CfgWeapons_arifle_AK12_545_F1;
		magazines[] = {30Rnd_545x39_black_Mag_F};
		magazineWell[] = {AK_545x39};
	 	initSpeed = 900;
	  	recoil = recoil_ak12_545;
		picture = "\A3_Aegis\Weapons_F_Aegis\Rifles\AK12\Data\UI\icon_arifle_AK12_GL_545_F_X_CA.paa";
	  	class WeaponSlotsInfo: WeaponSlotsInfo
	  	{
			class MuzzleSlot: MuzzleSlot
			{
				compatibleItems[] =
				{
					muzzle_snds_545,
					muzzle_snds_545_wdm_F,
					muzzle_snds_545_lush_F,
					muzzle_snds_545_arid_F,
					muzzle_mzls_545
				};
			};
			class CowsSlot: CowsSlot{};
			class PointerSlot: PointerSlot{};
			class UnderBarrelSlot: UnderBarrelSlot{};
	  	};
		class Single: Single
		{
			reloadTime = 0.086;
			dispersion = 0.00073;
		};
		class Burst: Burst
		{
			textureType = dual;
			burst = 2;
	    	reloadTime = 0.06;
			dispersion = 0.00073;
		};
		class FullAuto: FullAuto
		{
			reloadTime = 0.086;
			dispersion = 0.00073;
		};
	};
	class arifle_AK12_545_aco_pointer_F: arifle_AK12_545_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = CowsSlot;
				item = optic_ACO_grn_AK_F;
			};
			class LinkedItemsAcc
			{
				slot = PointerSlot;
				item = acc_pointer_IR;
			};
		};
	};
	class arifle_AK12_545_arco_pointer_F: arifle_AK12_545_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = CowsSlot;
				item = optic_Arco_blk_F;
			};
			class LinkedItemsAcc
			{
				slot = PointerSlot;
				item = acc_pointer_IR;
			};
		};
	};
	class arifle_AK12_GL_aco_pointer_F: arifle_AK12_GL_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = CowsSlot;
				item = optic_ACO_grn_AK_F;
			};
			class LinkedItemsAcc
			{
				slot = PointerSlot;
				item = acc_pointer_IR;
			};
		};
	};
	class arifle_AK12_GL_545_aco_pointer_F: arifle_AK12_GL_545_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = CowsSlot;
				item = optic_ACO_grn_AK_F;
			};
			class LinkedItemsAcc
			{
				slot = PointerSlot;
				item = acc_pointer_IR;
			};
		};
	};
	class arifle_AK12_GL_545_arco_pointer_F: arifle_AK12_GL_545_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = CowsSlot;
				item = optic_Arco_blk_F;
			};
			class LinkedItemsAcc
			{
				slot = PointerSlot;
				item = acc_pointer_IR;
			};
		};
	};
	class arifle_CTAR_GL_blk_ACO_flash_F: arifle_CTAR_GL_blk_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = CowsSlot;
				item = optic_ACO_grn;
			};
			class LinkedItemsAcc
			{
				slot = PointerSlot;
				item = acc_flashlight;
			};
		};
	};
	class arifle_CTAR_GL_blk_ACO_Pointer_F: arifle_CTAR_GL_blk_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = CowsSlot;
				item = optic_ACO_grn;
			};
			class LinkedItemsAcc
			{
				slot = PointerSlot;
				item = acc_pointer_IR;
			};
		};
	};
	class arifle_CTARS_blk_ARCO_Pointer_F: arifle_CTARS_blk_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = CowsSlot;
				item = optic_Arco_blk_F;
			};
			class LinkedItemsAcc
			{
				slot = PointerSlot;
				item = acc_pointer_IR;
			};
		};
	};
	class arifle_CTARS_blk_ARCO_Pointer_Snds_F: arifle_CTARS_blk_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = CowsSlot;
				item = optic_Arco_blk_F;
			};
			class LinkedItemsAcc
			{
				slot = PointerSlot;
				item = acc_pointer_IR;
			};
			class LinkedItemsMuzzle
			{
				slot = MuzzleSlot;
				item = muzzle_snds_58_blk_F;
			};
		};
	};
	class arifle_SPAR_01_blk_ERCO_Pointer_Snds_F: arifle_SPAR_01_blk_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = CowsSlot;
				item = optic_ERCO_blk_F;
			};
			class LinkedItemsAcc
			{
				slot = PointerSlot;
				item = acc_pointer_IR;
			};
			class LinkedItemsMuzzle
			{
				slot = MuzzleSlot;
				item = muzzle_snds_M;
			};
		};
	};
	class arifle_SPAR_01_blk_Holo_Pointer_Snds_F: arifle_SPAR_01_blk_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = CowsSlot;
				item = optic_ACO;
			};
			class LinkedItemsAcc
			{
				slot = PointerSlot;
				item = acc_pointer_IR;
			};
			class LinkedItemsMuzzle
			{
				slot = MuzzleSlot;
				item = muzzle_snds_M;
			};
		};
	};
	class arifle_SPAR_01_blk_ACO_Pointer_Snds_F: arifle_SPAR_01_blk_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = CowsSlot;
				item = optic_ACO;
			};
			class LinkedItemsAcc
			{
				slot = PointerSlot;
				item = acc_pointer_IR;
			};
			class LinkedItemsMuzzle
			{
				slot = MuzzleSlot;
				item = muzzle_snds_M;
			};
		};
	};
	class arifle_SPAR_01_khk_ERCO_Pointer_Snds_F: arifle_SPAR_01_khk_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = CowsSlot;
				item = optic_ERCO_khk_F;
			};
			class LinkedItemsAcc
			{
				slot = PointerSlot;
				item = acc_pointer_IR;
			};
			class LinkedItemsMuzzle
			{
				slot = MuzzleSlot;
				item = muzzle_snds_M_khk_F;
			};
		};
	};
	class arifle_SPAR_01_khk_Holo_Pointer_Snds_F: arifle_SPAR_01_khk_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = CowsSlot;
				item = optic_Holosight_khk_F;
			};
			class LinkedItemsAcc
			{
				slot = PointerSlot;
				item = acc_pointer_IR;
			};
			class LinkedItemsMuzzle
			{
				slot = MuzzleSlot;
				item = muzzle_snds_M_khk_F;
			};
		};
	};
	class arifle_SPAR_01_khk_ACO_Pointer_Snds_F: arifle_SPAR_01_khk_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = CowsSlot;
				item = optic_ACO;
			};
			class LinkedItemsAcc
			{
				slot = PointerSlot;
				item = acc_pointer_IR;
			};
			class LinkedItemsMuzzle
			{
				slot = MuzzleSlot;
				item = muzzle_snds_M_khk_F;
			};
		};
	};
	class arifle_SPAR_01_snd_ERCO_Pointer_Snds_F: arifle_SPAR_01_snd_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = CowsSlot;
				item = optic_ERCO_snd_F;
			};
			class LinkedItemsAcc
			{
				slot = PointerSlot;
				item = acc_pointer_IR;
			};
			class LinkedItemsMuzzle
			{
				slot = MuzzleSlot;
				item = muzzle_snds_M_snd_F;
			};
		};
	};
	class arifle_SPAR_01_snd_Holo_Pointer_Snds_F: arifle_SPAR_01_snd_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = CowsSlot;
				item = optic_Holosight;
			};
			class LinkedItemsAcc
			{
				slot = PointerSlot;
				item = acc_pointer_IR;
			};
			class LinkedItemsMuzzle
			{
				slot = MuzzleSlot;
				item = muzzle_snds_M_snd_F;
			};
		};
	};
	class arifle_SPAR_01_snd_ACO_Pointer_Snds_F: arifle_SPAR_01_snd_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = CowsSlot;
				item = optic_ACO;
			};
			class LinkedItemsAcc
			{
				slot = PointerSlot;
				item = acc_pointer_IR;
			};
			class LinkedItemsMuzzle
			{
				slot = MuzzleSlot;
				item = muzzle_snds_M_snd_F;
			};
		};
	};
	class arifle_SPAR_01_GL_blk_ERCO_Pointer_Snds_F: arifle_SPAR_01_GL_blk_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = CowsSlot;
				item = optic_ERCO_blk_F;
			};
			class LinkedItemsAcc
			{
				slot = PointerSlot;
				item = acc_pointer_IR;
			};
			class LinkedItemsMuzzle
			{
				slot = MuzzleSlot;
				item = muzzle_snds_M;
			};
		};
	};
	class arifle_SPAR_01_GL_blk_ACO_Pointer_Snds_F: arifle_SPAR_01_GL_blk_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = CowsSlot;
				item = optic_ACO;
			};
			class LinkedItemsAcc
			{
				slot = PointerSlot;
				item = acc_pointer_IR;
			};
			class LinkedItemsMuzzle
			{
				slot = MuzzleSlot;
				item = muzzle_snds_M;
			};
		};
	};
	class arifle_SPAR_01_GL_blk_Holo_Pointer_Snds_F: arifle_SPAR_01_GL_blk_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = CowsSlot;
				item = optic_Holosight_blk_F;
			};
			class LinkedItemsAcc
			{
				slot = PointerSlot;
				item = acc_pointer_IR;
			};
			class LinkedItemsMuzzle
			{
				slot = MuzzleSlot;
				item = muzzle_snds_M;
			};
		};
	};
	class arifle_SPAR_01_GL_khk_ACO_Pointer_Snds_F: arifle_SPAR_01_GL_khk_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = CowsSlot;
				item = optic_ACO;
			};
			class LinkedItemsAcc
			{
				slot = PointerSlot;
				item = acc_pointer_IR;
			};
			class LinkedItemsMuzzle
			{
				slot = MuzzleSlot;
				item = muzzle_snds_M_khk_F;
			};
		};
	};
	class arifle_SPAR_01_GL_khk_Holo_Pointer_Snds_F: arifle_SPAR_01_GL_khk_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = CowsSlot;
				item = optic_Holosight_khk_F;
			};
			class LinkedItemsAcc
			{
				slot = PointerSlot;
				item = acc_pointer_IR;
			};
			class LinkedItemsMuzzle
			{
				slot = MuzzleSlot;
				item = muzzle_snds_M_khk_F;
			};
		};
	};
	class arifle_SPAR_01_GL_snd_ACO_Pointer_Snds_F: arifle_SPAR_01_GL_snd_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = CowsSlot;
				item = optic_ACO;
			};
			class LinkedItemsAcc
			{
				slot = PointerSlot;
				item = acc_pointer_IR;
			};
			class LinkedItemsMuzzle
			{
				slot = MuzzleSlot;
				item = muzzle_snds_M_snd_F;
			};
		};
	};
	class arifle_SPAR_01_GL_snd_Holo_Pointer_Snds_F: arifle_SPAR_01_GL_snd_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = CowsSlot;
				item = optic_Holosight;
			};
			class LinkedItemsAcc
			{
				slot = PointerSlot;
				item = acc_pointer_IR;
			};
			class LinkedItemsMuzzle
			{
				slot = MuzzleSlot;
				item = muzzle_snds_M_snd_F;
			};
		};
	};
	class arifle_SPAR_01_C_base_F: arifle_SPAR_01_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = private;
	};
	class arifle_SPAR_01_C_blk_F: arifle_SPAR_01_C_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		baseWeapon = arifle_SPAR_01_C_blk_F;
		scope = protected;
	};
	class arifle_SPAR_01_C_khk_F: arifle_SPAR_01_C_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		baseWeapon = arifle_SPAR_01_C_khk_F;
		scope = protected;
	};
	class arifle_SPAR_01_C_snd_F: arifle_SPAR_01_C_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		baseWeapon = arifle_SPAR_01_C_snd_F;
		scope = protected;
	};
	class arifle_SPAR_02_blk_Holo_Pointer_Bipod_Snds_F: arifle_SPAR_02_blk_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = CowsSlot;
				item = optic_Holosight_blk_F;
			};
			class LinkedItemsAcc
			{
				slot = PointerSlot;
				item = acc_pointer_IR;
			};
			class LinkedItemsMuzzle
			{
				slot = MuzzleSlot;
				item = muzzle_snds_M;
			};
			class LinkedItemsUnder
			{
				slot = UnderBarrelSlot;
				item = bipod_01_F_blk;
			};
		};
	};
	class arifle_SPAR_02_blk_ERCO_Pointer_Bipod_Snds_F: arifle_SPAR_02_blk_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = CowsSlot;
				item = optic_ERCO_blk_F;
			};
			class LinkedItemsAcc
			{
				slot = PointerSlot;
				item = acc_pointer_IR;
			};
			class LinkedItemsMuzzle
			{
				slot = MuzzleSlot;
				item = muzzle_snds_M;
			};
			class LinkedItemsUnder
			{
				slot = UnderBarrelSlot;
				item = bipod_01_F_blk;
			};
		};
	};
	class arifle_SPAR_02_khk_ERCO_Pointer_Bipod_Snds_F: arifle_SPAR_02_khk_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = CowsSlot;
				item = optic_ERCO_khk_F;
			};
			class LinkedItemsAcc
			{
				slot = PointerSlot;
				item = acc_pointer_IR;
			};
			class LinkedItemsMuzzle
			{
				slot = MuzzleSlot;
				item = muzzle_snds_M_khk_F;
			};
			class LinkedItemsUnder
			{
				slot = UnderBarrelSlot;
				item = bipod_01_F_khk;
			};
		};
	};
	class arifle_SPAR_02_snd_ERCO_Pointer_Bipod_Snds_F: arifle_SPAR_02_snd_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = CowsSlot;
				item = optic_ERCO_snd_F;
			};
			class LinkedItemsAcc
			{
				slot = PointerSlot;
				item = acc_pointer_IR;
			};
			class LinkedItemsMuzzle
			{
				slot = MuzzleSlot;
				item = muzzle_snds_M_snd_F;
			};
			class LinkedItemsUnder
			{
				slot = UnderBarrelSlot;
				item = bipod_01_F_snd;
			};
		};
	};
	class arifle_SPAR_03_blk_MOS_Pointer_Bipod_Snds_F: arifle_SPAR_03_blk_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = CowsSlot;
				item = optic_SOS;
			};
			class LinkedItemsAcc
			{
				slot = PointerSlot;
				item = acc_pointer_IR;
			};
			class LinkedItemsMuzzle
			{
				slot = MuzzleSlot;
				item = muzzle_snds_B;
			};
			class LinkedItemsUnder
			{
				slot = UnderBarrelSlot;
				item = bipod_01_F_blk;
			};
		};
	};
	class arifle_SPAR_03_khk_MOS_Pointer_Bipod_Snds_F: arifle_SPAR_03_khk_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = CowsSlot;
				item = optic_SOS_khk_F;
			};
			class LinkedItemsAcc
			{
				slot = PointerSlot;
				item = acc_pointer_IR;
			};
			class LinkedItemsMuzzle
			{
				slot = MuzzleSlot;
				item = muzzle_snds_B_khk_F;
			};
			class LinkedItemsUnder
			{
				slot = UnderBarrelSlot;
				item = bipod_01_F_khk;
			};
		};
	};
	class arifle_SPAR_03_snd_MOS_Pointer_Bipod_Snds_F: arifle_SPAR_03_snd_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = CowsSlot;
				item = optic_SOS;
			};
			class LinkedItemsAcc
			{
				slot = PointerSlot;
				item = acc_pointer_IR;
			};
			class LinkedItemsMuzzle
			{
				slot = MuzzleSlot;
				item = muzzle_snds_B_snd_F;
			};
			class LinkedItemsUnder
			{
				slot = UnderBarrelSlot;
				item = bipod_01_F_snd;
			};
		};
	};
	class LMG_Mk200_black_FL_F: LMG_Mk200_black_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class LinkedItems
		{
			class LinkedItemsAcc
			{
				slot = PointerSlot;
				item = acc_flashlight;
			};
			class LinkedItemsUnder
			{
				slot = UnderBarrelSlot;
				item = bipod_01_F_blk;
			};
		};
	};
	class LMG_Mk200_black_ARCO_LP_BI_F: LMG_Mk200_black_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = CowsSlot;
				item = optic_Arco_blk_F;
			};
			class LinkedItemsAcc
			{
				slot = PointerSlot;
				item = acc_pointer_IR;
			};
			class LinkedItemsUnder
			{
				slot = UnderBarrelSlot;
				item = bipod_01_F_blk;
			};
		};
	};
	class LMG_Mk200_black_RCO_LP_BI_F: LMG_Mk200_black_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = CowsSlot;
				item = optic_Hamr;
			};
			class LinkedItemsAcc
			{
				slot = PointerSlot;
				item = acc_pointer_IR;
			};
			class LinkedItemsUnder
			{
				slot = UnderBarrelSlot;
				item = bipod_01_F_blk;
			};
		};
	};
	class hgun_Pistol_heavy_01_green_MRD_F: hgun_Pistol_heavy_01_green_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = CowsSlot;
				item = optic_MRD_black;
			};
		};
	};
	class arifle_AK12_lush_aco_snds_pointer_F: arifle_AK12_lush_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = CowsSlot;
				item = optic_ACO_grn_AK_F;
			};
			class LinkedItemsAcc
			{
				slot = PointerSlot;
				item = acc_pointer_IR;
			};
			class LinkedItemsMuzzle
			{
				slot = MuzzleSlot;
				item = muzzle_snds_B_lush_F;
			};
		};
	};
	class arifle_AK12_GL_lush_aco_snds_pointer_F: arifle_AK12_GL_lush_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = CowsSlot;
				item = optic_ACO_grn_AK_F;
			};
			class LinkedItemsAcc
			{
				slot = PointerSlot;
				item = acc_pointer_IR;
			};
			class LinkedItemsMuzzle
			{
				slot = MuzzleSlot;
				item = muzzle_snds_B_lush_F;
			};
		};
	};
	class arifle_AK12_545_lush_F: arifle_AK12_lush_F
	{
		author = $STR_A3_A_AveryTheKitty;
		baseWeapon = arifle_AK12_545_lush_F;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_arifle_AK12_545_lush_F0;
	  	descriptionShort = $STR_A3_A_CfgWeapons_arifle_AK12_545_F1;
		magazines[] = {30Rnd_545x39_lush_Mag_F};
		magazineWell[] = {AK_545x39};
	  	initSpeed = 900;
	  	recoil = recoil_ak12_545;
		picture = "\A3_Aegis\Weapons_F_Aegis\Rifles\AK12\Data\UI\icon_arifle_AK12_545_lush_F_X_CA.paa";
	  	class WeaponSlotsInfo: WeaponSlotsInfo
	  	{
			class MuzzleSlot: MuzzleSlot
			{
				compatibleItems[] =
				{
					muzzle_snds_545,
					muzzle_snds_545_wdm_F,
					muzzle_snds_545_lush_F,
					muzzle_snds_545_arid_F,
					muzzle_mzls_545
				};
			};
			class CowsSlot: CowsSlot{};
			class PointerSlot: PointerSlot{};
			class UnderBarrelSlot: UnderBarrelSlot{};
	  	};
		class Single: Single
		{
			reloadTime = 0.086;
			dispersion = 0.00073;
		};
		class Burst: Burst
		{
			textureType = dual;
			burst = 2;
	    	reloadTime = 0.06;
			dispersion = 0.00073;
		};
		class FullAuto: FullAuto
		{
			reloadTime = 0.086;
			dispersion = 0.00073;
		};
	};
	class arifle_AK12_545_arid_F: arifle_AK12_arid_F
	{
		author = $STR_A3_A_AveryTheKitty;
		baseWeapon = arifle_AK12_545_arid_F;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_arifle_AK12_545_arid_F0;
	  	descriptionShort = $STR_A3_A_CfgWeapons_arifle_AK12_545_F1;
		magazines[] = {30Rnd_545x39_arid_Mag_F};
		magazineWell[] = {AK_545x39};
	  	initSpeed = 900;
	  	recoil = recoil_ak12_545;
		picture = "\A3_Aegis\Weapons_F_Aegis\Rifles\AK12\Data\UI\icon_arifle_AK12_545_arid_F_X_CA.paa";
	  	class WeaponSlotsInfo: WeaponSlotsInfo
	  	{
			class MuzzleSlot: MuzzleSlot
			{
				compatibleItems[] =
				{
					muzzle_snds_545,
					muzzle_snds_545_wdm_F,
					muzzle_snds_545_lush_F,
					muzzle_snds_545_arid_F,
					muzzle_mzls_545
				};
			};
			class CowsSlot: CowsSlot{};
			class PointerSlot: PointerSlot{};
			class UnderBarrelSlot: UnderBarrelSlot{};
	  	};
		class Single: Single
		{
			reloadTime = 0.086;
			dispersion = 0.00073;
		};
		class Burst: Burst
		{
			textureType = dual;
			burst = 2;
	    	reloadTime = 0.06;
			dispersion = 0.00073;
		};
		class FullAuto: FullAuto
		{
			reloadTime = 0.086;
			dispersion = 0.00073;
		};
	};
	class arifle_AK12_GL_545_lush_F: arifle_AK12_GL_lush_F
	{
		author = $STR_A3_A_AveryTheKitty;
		baseWeapon = arifle_AK12_GL_545_lush_F;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_arifle_AK12_545_GL_lush_F0;
	  	descriptionShort = $STR_A3_A_CfgWeapons_arifle_AK12_545_F1;
		magazines[] = {30Rnd_545x39_lush_Mag_F};
		magazineWell[] = {AK_545x39};
	 	initSpeed = 900;
	  	recoil = recoil_ak12_545;
		picture = "\A3_Aegis\Weapons_F_Aegis\Rifles\AK12\Data\UI\icon_arifle_AK12_GL_545_lush_F_X_CA.paa";
	  	class WeaponSlotsInfo: WeaponSlotsInfo
	  	{
			class MuzzleSlot: MuzzleSlot
			{
				compatibleItems[] =
				{
					muzzle_snds_545,
					muzzle_snds_545_wdm_F,
					muzzle_snds_545_lush_F,
					muzzle_snds_545_arid_F,
					muzzle_mzls_545
				};
			};
			class CowsSlot: CowsSlot{};
			class PointerSlot: PointerSlot{};
			class UnderBarrelSlot: UnderBarrelSlot{};
	  	};
		class Single: Single
		{
			reloadTime = 0.086;
			dispersion = 0.00073;
		};
		class Burst: Burst
		{
			textureType = dual;
			burst = 2;
	    	reloadTime = 0.06;
			dispersion = 0.00073;
		};
		class FullAuto: FullAuto
		{
			reloadTime = 0.086;
			dispersion = 0.00073;
		};
	};
	class arifle_AK12_GL_545_arid_F: arifle_AK12_GL_arid_F
	{
		author = $STR_A3_A_AveryTheKitty;
		baseWeapon = arifle_AK12_GL_545_arid_F;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_arifle_AK12_545_GL_arid_F0;
	  	descriptionShort = $STR_A3_A_CfgWeapons_arifle_AK12_545_F1;
		magazines[] = {30Rnd_545x39_arid_Mag_F};
		magazineWell[] = {AK_545x39};
	 	initSpeed = 900;
	  	recoil = recoil_ak12_545;
		picture = "\A3_Aegis\Weapons_F_Aegis\Rifles\AK12\Data\UI\icon_arifle_AK12_GL_545_arid_F_X_CA.paa";
	  	class WeaponSlotsInfo: WeaponSlotsInfo
	  	{
			class MuzzleSlot: MuzzleSlot
			{
				compatibleItems[] =
				{
					muzzle_snds_545,
					muzzle_snds_545_wdm_F,
					muzzle_snds_545_lush_F,
					muzzle_snds_545_arid_F,
					muzzle_mzls_545
				};
			};
			class CowsSlot: CowsSlot{};
			class PointerSlot: PointerSlot{};
			class UnderBarrelSlot: UnderBarrelSlot{};
	  	};
		class Single: Single
		{
			reloadTime = 0.086;
			dispersion = 0.00073;
		};
		class Burst: Burst
		{
			textureType = dual;
			burst = 2;
	    	reloadTime = 0.06;
			dispersion = 0.00073;
		};
		class FullAuto: FullAuto
		{
			reloadTime = 0.086;
			dispersion = 0.00073;
		};
	};
	class arifle_AK12U_aco_pointer_F: arifle_AK12U_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = CowsSlot;
				item = optic_ACO_grn_AK_F;
			};
			class LinkedItemsAcc
			{
				slot = PointerSlot;
				item = acc_pointer_IR;
			};
		};
	};
	class arifle_AK12U_545_F: arifle_AK12U_F
	{
		author = $STR_A3_A_AveryTheKitty;
		baseWeapon = arifle_AK12U_545_F;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_arifle_AK12U_545_F0;
	  	descriptionShort = $STR_A3_A_CfgWeapons_arifle_AK12_545_F1;
		magazines[] = {30Rnd_545x39_black_Mag_F};
		magazineWell[] = {AK_545x39};
	  	initSpeed = 735;
	  	recoil = recoil_ak12u_545;
		picture = "\A3_Aegis\Weapons_F_Aegis\Rifles\AK12\Data\UI\icon_arifle_AK12U_545_F_X_CA.paa";
	  	class WeaponSlotsInfo: WeaponSlotsInfo
	  	{
			class MuzzleSlot: MuzzleSlot
			{
				compatibleItems[] =
				{
					muzzle_snds_545,
					muzzle_snds_545_wdm_F,
					muzzle_snds_545_lush_F,
					muzzle_snds_545_arid_F,
					muzzle_mzls_545
				};
			};
			class CowsSlot: CowsSlot{};
			class PointerSlot: PointerSlot{};
			class UnderBarrelSlot: UnderBarrelSlot{};
	  	};
		class Single: Single
		{
			reloadTime = 0.086;
			dispersion = 0.00087;
		};
		class Burst: Burst
		{
			textureType = dual;
			burst = 2;
	    	reloadTime = 0.06;
			dispersion = 0.00087;
		};
		class FullAuto: FullAuto
		{
			reloadTime = 0.086;
			dispersion = 0.00087;
		};
	};
	class arifle_AK12U_545_aco_F: arifle_AK12U_545_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = CowsSlot;
				item = optic_ACO_grn_AK_F;
			};
		};
	};
	class arifle_AK12U_545_aco_pointer_F: arifle_AK12U_545_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = CowsSlot;
				item = optic_ACO_grn_AK_F;
			};
			class LinkedItemsAcc
			{
				slot = PointerSlot;
				item = acc_pointer_IR;
			};
		};
	};
	class arifle_AK12U_545_lush_F: arifle_AK12U_lush_F
	{
		author = $STR_A3_A_AveryTheKitty;
		baseWeapon = arifle_AK12U_545_lush_F;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_arifle_AK12U_545_lush_F0;
	  	descriptionShort = $STR_A3_A_CfgWeapons_arifle_AK12_545_F1;
		magazines[] = {30Rnd_545x39_lush_Mag_F};
		magazineWell[] = {AK_545x39};
	  	initSpeed = 735;
	  	recoil = recoil_ak12u_545;
		picture = "\A3_Aegis\Weapons_F_Aegis\Rifles\AK12\Data\UI\icon_arifle_AK12U_545_lush_F_X_CA.paa";
	  	class WeaponSlotsInfo: WeaponSlotsInfo
	  	{
			class MuzzleSlot: MuzzleSlot
			{
				compatibleItems[] =
				{
					muzzle_snds_545,
					muzzle_snds_545_wdm_F,
					muzzle_snds_545_lush_F,
					muzzle_snds_545_arid_F,
					muzzle_mzls_545
				};
			};
			class CowsSlot: CowsSlot{};
			class PointerSlot: PointerSlot{};
			class UnderBarrelSlot: UnderBarrelSlot{};
	  	};
		class Single: Single
		{
			reloadTime = 0.086;
			dispersion = 0.00087;
		};
		class Burst: Burst
		{
			textureType = dual;
			burst = 2;
	    	reloadTime = 0.06;
			dispersion = 0.00087;
		};
		class FullAuto: FullAuto
		{
			reloadTime = 0.086;
			dispersion = 0.00087;
		};
	};
	class arifle_AK12U_545_arid_F: arifle_AK12U_arid_F
	{
		author = $STR_A3_A_AveryTheKitty;
		baseWeapon = arifle_AK12U_545_arid_F;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_arifle_AK12U_545_arid_F0;
	  	descriptionShort = $STR_A3_A_CfgWeapons_arifle_AK12_545_F1;
		magazines[] = {30Rnd_545x39_arid_Mag_F};
		magazineWell[] = {AK_545x39};
	  	initSpeed = 735;
	  	recoil = recoil_ak12u_545;
		picture = "\A3_Aegis\Weapons_F_Aegis\Rifles\AK12\Data\UI\icon_arifle_AK12U_545_arid_F_X_CA.paa";
	  	class WeaponSlotsInfo: WeaponSlotsInfo
	  	{
			class MuzzleSlot: MuzzleSlot
			{
				compatibleItems[] =
				{
					muzzle_snds_545,
					muzzle_snds_545_wdm_F,
					muzzle_snds_545_lush_F,
					muzzle_snds_545_arid_F,
					muzzle_mzls_545
				};
			};
			class CowsSlot: CowsSlot{};
			class PointerSlot: PointerSlot{};
			class UnderBarrelSlot: UnderBarrelSlot{};
	  	};
		class Single: Single
		{
			reloadTime = 0.086;
			dispersion = 0.00087;
		};
		class Burst: Burst
		{
			textureType = dual;
			burst = 2;
	    	reloadTime = 0.06;
			dispersion = 0.00087;
		};
		class FullAuto: FullAuto
		{
			reloadTime = 0.086;
			dispersion = 0.00087;
		};
	};
	class arifle_RPK12_aco_pointer_F: arifle_RPK12_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = CowsSlot;
				item = optic_ACO_grn_AK_F;
			};
			class LinkedItemsAcc
			{
				slot = PointerSlot;
				item = acc_pointer_IR;
			};
		};
	};
	class arifle_RPK12_arco_pointer_F: arifle_RPK12_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = CowsSlot;
				item = optic_Arco_AK_blk_F;
			};
			class LinkedItemsAcc
			{
				slot = PointerSlot;
				item = acc_pointer_IR;
			};
		};
	};
	class arifle_MSBS65_aco_pointer_F: arifle_MSBS65_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = CowsSlot;
				item = optic_ACO;
			};
			class LinkedItemsAcc
			{
				slot = PointerSlot;
				item = acc_pointer_IR;
			};
		};
	};
	class arifle_MSBS65_aco_f: arifle_MSBS65_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = CowsSlot;
				item = optic_ACO;
			};
		};
	};
	class arifle_MSBS65_ico_FL_f: arifle_MSBS65_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = CowsSlot;
				item = optic_ico_01_f;
			};
			class LinkedItemsAcc
			{
				slot = PointerSlot;
				item = acc_flashlight;
			};
		};
	};
	class arifle_MSBS65_GL_aco_pointer_f: arifle_MSBS65_GL_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = CowsSlot;
				item = optic_ACO;
			};
			class LinkedItemsAcc
			{
				slot = PointerSlot;
				item = acc_pointer_IR;
			};
		};
	};
	class arifle_MSBS65_GL_ico_FL_f: arifle_MSBS65_GL_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = CowsSlot;
				item = optic_ico_01_f;
			};
			class LinkedItemsAcc
			{
				slot = PointerSlot;
				item = acc_flashlight;
			};
		};
	};
	class arifle_MSBS65_UBS_aco_pointer_f: arifle_MSBS65_UBS_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = CowsSlot;
				item = optic_ACO;
			};
			class LinkedItemsAcc
			{
				slot = PointerSlot;
				item = acc_pointer_IR;
			};
		};
	};
	class arifle_MSBS556_F: arifle_MSBS65_F
	{
		author = $STR_A3_A_AveryTheKitty;
		baseWeapon = arifle_MSBS556_F;
		scope = public;
		displayName = "Grot 5.56 mm";
	  	descriptionShort = "Assault Rifle< br/>Caliber: 5.56x45 mm";
		magazines[] = {30Rnd_556x45_msbs_mag};
		magazineWell[] =
		{
			STANAG_556x45_MSBS,
			STANAG_556x45
		};
	  	recoil = recoil_MSBS556;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: MuzzleSlot_556{};
			class CowsSlot: CowsSlot{};
			class PointerSlot: PointerSlot{};
	  	};
		class GunParticles: GunParticles
		{
			delete SecondEffect;
		};
	};
	class arifle_MSBS556_Mark_F: arifle_MSBS65_Mark_F
	{
		author = $STR_A3_A_AveryTheKitty;
		baseWeapon = arifle_MSBS556_Mark_F;
		scope = public;
		displayName = "Grot MR 5.56 mm";
	  	descriptionShort = "Assault Rifle< br/>Caliber: 5.56x45 mm";
		magazines[] = {30Rnd_556x45_msbs_mag};
		magazineWell[] =
		{
			STANAG_556x45_MSBS,
			STANAG_556x45
		};
	  	recoil = recoil_MSBS556;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: MuzzleSlot_556{};
			class CowsSlot: CowsSlot{};
			class PointerSlot: PointerSlot{};
			class UnderBarrelSlot: UnderBarrelSlot{};
	  	};
		class GunParticles: GunParticles
		{
			delete SecondEffect;
		};
	};
	class arifle_MSBS556_GL_F: arifle_MSBS65_GL_F
	{
		author = $STR_A3_A_AveryTheKitty;
		baseWeapon = arifle_MSBS556_GL_F;
		scope = public;
		displayName = "Grot GL 5.56 mm";
	  	descriptionShort = "Assault Rifle< br/>Caliber: 5.56x45 mm";
		magazines[] = {30Rnd_556x45_msbs_mag};
		magazineWell[] =
		{
			STANAG_556x45_MSBS,
			STANAG_556x45
		};
	  	recoil = recoil_MSBS556;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: MuzzleSlot_556{};
			class CowsSlot: CowsSlot{};
			class PointerSlot: PointerSlot{};
	  	};
		class GunParticles: GunParticles
		{
			delete SecondEffect;
		};
	};
	class arifle_MSBS556_UBS_F: arifle_MSBS65_UBS_F
	{
		author = $STR_A3_A_AveryTheKitty;
		baseWeapon = arifle_MSBS556_UBS_F;
		scope = public;
		displayName = "Grot SG 5.56 mm";
	  	descriptionShort = "Assault Rifle< br/>Caliber: 5.56x45 mm";
		magazines[] = {30Rnd_556x45_msbs_mag};
		magazineWell[] =
		{
			STANAG_556x45_MSBS,
			STANAG_556x45
		};
	  	recoil = recoil_MSBS556;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: MuzzleSlot_556{};
			class CowsSlot: CowsSlot{};
			class PointerSlot: PointerSlot{};
	  	};
		class GunParticles: GunParticles
		{
			delete SecondEffect;
		};
	};
	class arifle_MSBS556_black_F: arifle_MSBS65_black_F
	{
		author = $STR_A3_A_AveryTheKitty;
		baseWeapon = arifle_MSBS556_black_F;
		scope = public;
		displayName = "Grot 5.56 mm (Black)";
	  	descriptionShort = "Assault Rifle< br/>Caliber: 5.56x45 mm";
		magazines[] = {30Rnd_556x45_msbs_mag};
		magazineWell[] =
		{
			STANAG_556x45_MSBS,
			STANAG_556x45
		};
	  	recoil = recoil_MSBS556;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: MuzzleSlot_556{};
			class CowsSlot: CowsSlot{};
			class PointerSlot: PointerSlot{};
	  	};
		class GunParticles: GunParticles
		{
			delete SecondEffect;
		};
	};
	class arifle_MSBS556_Mark_black_F: arifle_MSBS65_Mark_black_F
	{
		author = $STR_A3_A_AveryTheKitty;
		baseWeapon = arifle_MSBS556_Mark_black_F;
		scope = public;
		displayName = "Grot MR 5.56 mm (Black)";
	  	descriptionShort = "Assault Rifle< br/>Caliber: 5.56x45 mm";
		magazines[] = {30Rnd_556x45_msbs_mag};
		magazineWell[] =
		{
			STANAG_556x45_MSBS,
			STANAG_556x45
		};
	  	recoil = recoil_MSBS556;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: MuzzleSlot_556{};
			class CowsSlot: CowsSlot{};
			class PointerSlot: PointerSlot{};
			class UnderBarrelSlot: UnderBarrelSlot{};
	  	};
		class GunParticles: GunParticles
		{
			delete SecondEffect;
		};
	};
	class arifle_MSBS556_GL_black_F: arifle_MSBS65_GL_black_F
	{
		author = $STR_A3_A_AveryTheKitty;
		baseWeapon = arifle_MSBS556_GL_black_F;
		scope = public;
		displayName = "Grot GL 5.56 mm (Black)";
	  	descriptionShort = "Assault Rifle< br/>Caliber: 5.56x45 mm";
		magazines[] = {30Rnd_556x45_msbs_mag};
		magazineWell[] =
		{
			STANAG_556x45_MSBS,
			STANAG_556x45
		};
	  	recoil = recoil_MSBS556;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: MuzzleSlot_556{};
			class CowsSlot: CowsSlot{};
			class PointerSlot: PointerSlot{};
	  	};
		class GunParticles: GunParticles
		{
			delete SecondEffect;
		};
	};
	class arifle_MSBS556_UBS_black_F: arifle_MSBS65_UBS_black_F
	{
		author = $STR_A3_A_AveryTheKitty;
		baseWeapon = arifle_MSBS556_UBS_black_F;
		scope = public;
		displayName = "Grot SG 5.56 mm (Black)";
	  	descriptionShort = "Assault Rifle< br/>Caliber: 5.56x45 mm";
		magazines[] = {30Rnd_556x45_msbs_mag};
		magazineWell[] =
		{
			STANAG_556x45_MSBS,
			STANAG_556x45
		};
	  	recoil = recoil_MSBS556;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: MuzzleSlot_556{};
			class CowsSlot: CowsSlot{};
			class PointerSlot: PointerSlot{};
	  	};
		class GunParticles: GunParticles
		{
			delete SecondEffect;
		};
	};
	class arifle_MSBS556_sand_F: arifle_MSBS65_sand_F
	{
		author = $STR_A3_A_AveryTheKitty;
		baseWeapon = arifle_MSBS556_sand_F;
		scope = public;
		displayName = "Grot 5.56 mm (Sand)";
	  	descriptionShort = "Assault Rifle< br/>Caliber: 5.56x45 mm";
		magazines[] = {30Rnd_556x45_msbs_mag};
		magazineWell[] =
		{
			STANAG_556x45_MSBS,
			STANAG_556x45
		};
	  	recoil = recoil_MSBS556;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: MuzzleSlot_556{};
			class CowsSlot: CowsSlot{};
			class PointerSlot: PointerSlot{};
	  	};
		class GunParticles: GunParticles
		{
			delete SecondEffect;
		};
	};
	class arifle_MSBS556_Mark_sand_F: arifle_MSBS65_Mark_sand_F
	{
		author = $STR_A3_A_AveryTheKitty;
		baseWeapon = arifle_MSBS556_Mark_sand_F;
		scope = public;
		displayName = "Grot MR 5.56 mm (Sand)";
	  	descriptionShort = "Assault Rifle< br/>Caliber: 5.56x45 mm";
		magazines[] = {30Rnd_556x45_msbs_mag};
		magazineWell[] =
		{
			STANAG_556x45_MSBS,
			STANAG_556x45
		};
	  	recoil = recoil_MSBS556;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: MuzzleSlot_556{};
			class CowsSlot: CowsSlot{};
			class PointerSlot: PointerSlot{};
			class UnderBarrelSlot: UnderBarrelSlot{};
	  	};
		class GunParticles: GunParticles
		{
			delete SecondEffect;
		};
	};
	class arifle_MSBS556_GL_sand_F: arifle_MSBS65_GL_sand_F
	{
		author = $STR_A3_A_AveryTheKitty;
		baseWeapon = arifle_MSBS556_GL_sand_F;
		scope = public;
		displayName = "Grot GL 5.56 mm (Sand)";
	  	descriptionShort = "Assault Rifle< br/>Caliber: 5.56x45 mm";
		magazines[] = {30Rnd_556x45_msbs_mag};
		magazineWell[] =
		{
			STANAG_556x45_MSBS,
			STANAG_556x45
		};
	  	recoil = recoil_MSBS556;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: MuzzleSlot_556{};
			class CowsSlot: CowsSlot{};
			class PointerSlot: PointerSlot{};
	  	};
		class GunParticles: GunParticles
		{
			delete SecondEffect;
		};
	};
	class arifle_MSBS556_UBS_sand_F: arifle_MSBS65_UBS_sand_F
	{
		author = $STR_A3_A_AveryTheKitty;
		baseWeapon = arifle_MSBS556_UBS_sand_F;
		scope = public;
		displayName = "Grot SG 5.56 mm (Sand)";
	  	descriptionShort = "Assault Rifle< br/>Caliber: 5.56x45 mm";
		magazines[] = {30Rnd_556x45_msbs_mag};
		magazineWell[] =
		{
			STANAG_556x45_MSBS,
			STANAG_556x45
		};
	  	recoil = recoil_MSBS556;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: MuzzleSlot_556{};
			class CowsSlot: CowsSlot{};
			class PointerSlot: PointerSlot{};
	  	};
		class GunParticles: GunParticles
		{
			delete SecondEffect;
		};
	};
	class arifle_MSBS556_camo_F: arifle_MSBS65_camo_F
	{
		author = $STR_A3_A_AveryTheKitty;
		baseWeapon = arifle_MSBS556_camo_F;
		scope = public;
		displayName = "Grot 5.56 mm (Camo)";
	  	descriptionShort = "Assault Rifle< br/>Caliber: 5.56x45 mm";
		magazines[] = {30Rnd_556x45_msbs_mag};
		magazineWell[] =
		{
			STANAG_556x45_MSBS,
			STANAG_556x45
		};
	  	recoil = recoil_MSBS556;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: MuzzleSlot_556{};
			class CowsSlot: CowsSlot{};
			class PointerSlot: PointerSlot{};
	  	};
		class GunParticles: GunParticles
		{
			delete SecondEffect;
		};
	};
	class arifle_MSBS556_Mark_camo_F: arifle_MSBS65_Mark_camo_F
	{
		author = $STR_A3_A_AveryTheKitty;
		baseWeapon = arifle_MSBS556_Mark_camo_F;
		scope = public;
		displayName = "Grot MR 5.56 mm (Camo)";
	  	descriptionShort = "Assault Rifle< br/>Caliber: 5.56x45 mm";
		magazines[] = {30Rnd_556x45_msbs_mag};
		magazineWell[] =
		{
			STANAG_556x45_MSBS,
			STANAG_556x45
		};
	  	recoil = recoil_MSBS556;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: MuzzleSlot_556{};
			class CowsSlot: CowsSlot{};
			class PointerSlot: PointerSlot{};
			class UnderBarrelSlot: UnderBarrelSlot{};
	  	};
		class GunParticles: GunParticles
		{
			delete SecondEffect;
		};
	};
	class arifle_MSBS556_GL_camo_F: arifle_MSBS65_GL_camo_F
	{
		author = $STR_A3_A_AveryTheKitty;
		baseWeapon = arifle_MSBS556_GL_camo_F;
		scope = public;
		displayName = "Grot GL 5.56 mm (Camo)";
	  	descriptionShort = "Assault Rifle< br/>Caliber: 5.56x45 mm";
		magazines[] = {30Rnd_556x45_msbs_mag};
		magazineWell[] =
		{
			STANAG_556x45_MSBS,
			STANAG_556x45
		};
	  	recoil = recoil_MSBS556;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: MuzzleSlot_556{};
			class CowsSlot: CowsSlot{};
			class PointerSlot: PointerSlot{};
	  	};
		class GunParticles: GunParticles
		{
			delete SecondEffect;
		};
	};
	class arifle_MSBS556_UBS_camo_F: arifle_MSBS65_UBS_camo_F
	{
		author = $STR_A3_A_AveryTheKitty;
		baseWeapon = arifle_MSBS556_UBS_camo_F;
		scope = public;
		displayName = "Grot SG 5.56 mm (Camo)";
	  	descriptionShort = "Assault Rifle< br/>Caliber: 5.56x45 mm";
		magazines[] = {30Rnd_556x45_msbs_mag};
		magazineWell[] =
		{
			STANAG_556x45_MSBS,
			STANAG_556x45
		};
	  	recoil = recoil_MSBS556;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: MuzzleSlot_556{};
			class CowsSlot: CowsSlot{};
			class PointerSlot: PointerSlot{};
	  	};
		class GunParticles: GunParticles
		{
			delete SecondEffect;
		};
	};
	class SMG_01_black_F: SMG_01_F
	{
		author = $STR_A3_A_AveryTheKitty;
		baseWeapon = SMG_01_black_F;
		displayName = $STR_A3_A_CfgWeapons_SMG_01_black_F0;
		hiddenSelectionsTextures[] =
		{
			"\A3_Aegis\Weapons_F_Aegis\SMGs\SMG_01\Data\SMG_01_black_CO.paa",
			"\A3_Aegis\Weapons_F_Aegis\SMGs\SMG_01\Data\Vectoratt_black_CO.paa",
			"\A3\Weapons_F\Acc\Data\battlesight_CO.paa"
		};
		hiddenSelectionsMaterials[] =
		{
			"\A3_Aegis\Weapons_F_Aegis\SMGs\SMG_01\Data\SMG_01_black.rvmat",
			"\A3_Aegis\Weapons_F_Aegis\SMGs\SMG_01\Data\Vectoratt_black.rvmat",
			"\A3\Weapons_F\Acc\Data\battlesight.rvmat"
		};
		picture = "\A3_Aegis\Weapons_F_Aegis\SMGs\SMG_01\Data\UI\icon_SMG_01_black_F_X_CA.paa";
	};
	class SMG_01_khk_F: SMG_01_F
	{
		author = $STR_A3_A_AveryTheKitty;
		baseWeapon = SMG_01_khk_F;
		displayName = $STR_A3_A_CfgWeapons_SMG_01_khk_F0;
		hiddenSelectionsTextures[] =
		{
			"\A3_Aegis\Weapons_F_Aegis\SMGs\SMG_01\Data\SMG_01_khk_F_1_CO.paa",
			"\A3_Aegis\Weapons_F_Aegis\SMGs\SMG_01\Data\SMG_01_khk_F_2_CO.paa",
			"\A3\Weapons_F\Acc\Data\battlesight_CO.paa"
		};
		picture = "\A3_Aegis\Weapons_F_Aegis\SMGs\SMG_01\Data\UI\icon_SMG_01_khk_F_X_CA.paa";
	};
	class SMG_01_black_Holo_F: SMG_01_black_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = CowsSlot;
				item = optic_Holosight_smg_blk_F;
			};
		};
	};
	class SMG_01_khk_Holo_F: SMG_01_khk_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = CowsSlot;
				item = optic_Holosight_smg_khk_F;
			};
		};
	};
	class SMG_02_ACO_FL_F: SMG_02_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = CowsSlot;
				item = optic_ACO_smg;
			};
			class LinkedItemsAcc
			{
				slot = PointerSlot;
				item = acc_flashlight;
			};
		};
	};
	class muzzle_snds_pistol_heavy_01: muzzle_snds_acp
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgWeapons_muzzle_snds_pistol_heavy_010;
		model = "\A3\Weapons_F\Acc\acca_snds_osprey_F.p3d";
		picture = "\A3_Aegis\Weapons_F_Aegis\Acc\Data\UI\icon_muzzle_snds_pistol_heavy_01_CA.paa";
	};
	class muzzle_mzls_H: ItemCore
	{
		author = $STR_A3_A_AveryTheKitty;
		htMin = 1;
		htMax = 600;
		afMax = 0;
		mfMax = 0;
		mFact = 1;
		tBody = 100;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_muzzle_mzls_H0;
		picture = "\A3\Weapons_F\Data\UI\gear_acca_mzls_H_CA.paa";
		model = "\A3\Weapons_F\Acc\acca_mzls_H_F.p3d";
		class ItemInfo: InventoryMuzzleItem_Base_F
		{
			mass = 5;
			class AmmoCoef
			{
				hit = 1;
				typicalSpeed = 1;
				airFriction = 1;
				visibleFire = 0.5;
				audibleFire = 1;
				visibleFireTime = 0.5;
				audibleFireTime = 1;
				cost = 1;
			};
			soundTypeIndex = 0;
			muzzleEnd = zaslehPoint;
			alternativeFire = Zasleh2;
			class MuzzleCoef
			{
				dispersionCoef = 0.9f;
				artilleryDispersionCoef = 1.0f;
				fireLightCoef = 0.1f;
				recoilCoef = 1.0f;
				recoilProneCoef = 1.0f;
				minRangeCoef = 1.0f;
				minRangeProbabCoef = 1.0f;
				midRangeCoef = 1.0f;
				midRangeProbabCoef = 1.0f;
				maxRangeCoef = 1.0f;
				maxRangeProbabCoef = 1.0f;
			};
		};
		inertia = 0.1;
	};
	class muzzle_mzls_L: muzzle_mzls_H
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgWeapons_muzzle_mzls_L0;
		picture = "\A3\Weapons_F\Data\UI\gear_acca_mzls_L_CA.paa";
		model = "\A3\Weapons_F\Acc\acca_mzls_L_F.p3d";
		class ItemInfo: ItemInfo
		{
			mass = 3;
			class MagazineCoef
			{
				initSpeed = 1;
			};
			class AmmoCoef
			{
				hit = 1;
				typicalSpeed = 1;
				airFriction = 1;
				visibleFire = 0.5;
				audibleFire = 1;
				visibleFireTime = 0.5;
				audibleFireTime = 1;
				cost = 1;
			};
			soundTypeIndex = 0;
			muzzleEnd = zaslehPoint;
			alternativeFire = Zasleh2;
			class MuzzleCoef
			{
				dispersionCoef = 0.9f;
				artilleryDispersionCoef = 1.0f;
				fireLightCoef = 0.1f;
				recoilCoef = 1.0f;
				recoilProneCoef = 1.0f;
				minRangeCoef = 1.0f;
				minRangeProbabCoef = 1.0f;
				midRangeCoef = 1.0f;
				midRangeProbabCoef = 1.0f;
				maxRangeCoef = 1.0f;
				maxRangeProbabCoef = 1.0f;
			};
		};
		inertia = 0.1;
	};
	class muzzle_mzls_M: muzzle_mzls_H
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgWeapons_muzzle_mzls_M0;
		picture = "\A3\Weapons_F\Data\UI\gear_acca_mzls_H_CA.paa";
		model = "\A3\Weapons_F\Acc\acca_mzls_H_F.p3d";
		class ItemInfo: ItemInfo
		{
			mass = 4;
			class MagazineCoef
			{
				initSpeed = 1;
			};
			class AmmoCoef
			{
				hit = 1;
				typicalSpeed = 1;
				airFriction = 1;
				visibleFire = 0.5;
				audibleFire = 1;
				visibleFireTime = 0.5;
				audibleFireTime = 1;
				cost = 1;
			};
			soundTypeIndex = 0;
			muzzleEnd = zaslehPoint;
			alternativeFire = Zasleh2;
			class MuzzleCoef
			{
				dispersionCoef = 0.9f;
				artilleryDispersionCoef = 1.0f;
				fireLightCoef = 0.1f;
				recoilCoef = 1.0f;
				recoilProneCoef = 1.0f;
				minRangeCoef = 1.0f;
				minRangeProbabCoef = 1.0f;
				midRangeCoef = 1.0f;
				midRangeProbabCoef = 1.0f;
				maxRangeCoef = 1.0f;
				maxRangeProbabCoef = 1.0f;
			};
		};
		inertia = 0.1;
	};
	class muzzle_mzls_B: muzzle_mzls_H
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgWeapons_muzzle_mzls_B0;
		picture = "\A3\Weapons_F\Data\UI\gear_acca_mzls_H_CA.paa";
		model = "\A3\Weapons_F\Acc\acca_mzls_H_F.p3d";
		class ItemInfo: ItemInfo
		{
			mass = 6;
			class MagazineCoef
			{
				initSpeed = 1;
			};
			class AmmoCoef
			{
				hit = 1;
				typicalSpeed = 1;
				airFriction = 1;
				visibleFire = 0.5;
				audibleFire = 1;
				visibleFireTime = 0.5;
				audibleFireTime = 1;
				cost = 1;
			};
			soundTypeIndex = 0;
			muzzleEnd = zaslehPoint;
			alternativeFire = Zasleh2;
			class MuzzleCoef
			{
				dispersionCoef = 0.9f;
				artilleryDispersionCoef = 1.0f;
				fireLightCoef = 0.1f;
				recoilCoef = 1.0f;
				recoilProneCoef = 1.0f;
				minRangeCoef = 1.0f;
				minRangeProbabCoef = 1.0f;
				midRangeCoef = 1.0f;
				midRangeProbabCoef = 1.0f;
				maxRangeCoef = 1.0f;
				maxRangeProbabCoef = 1.0f;
			};
		};
		inertia = 0.2;
	};
	class muzzle_mzls_acp: muzzle_mzls_H
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgWeapons_muzzle_mzls_acp0;
		picture = "\A3\Weapons_F\Data\UI\gear_acca_mzls_L_CA.paa";
		model = "\A3\Weapons_F\Acc\acca_mzls_L_F.p3d";
		class ItemInfo: ItemInfo
		{
			mass = 3;
			class MagazineCoef
			{
				initSpeed = 1;
			};
			class AmmoCoef
			{
				hit = 1;
				typicalSpeed = 1;
				airFriction = 1;
				visibleFire = 0.5;
				audibleFire = 1;
				visibleFireTime = 0.5;
				audibleFireTime = 1;
				cost = 1;
			};
			soundTypeIndex = 0;
			muzzleEnd = zaslehPoint;
			alternativeFire = Zasleh2;
			class MuzzleCoef
			{
				dispersionCoef = 0.9f;
				artilleryDispersionCoef = 1.0f;
				fireLightCoef = 0.1f;
				recoilCoef = 1.0f;
				recoilProneCoef = 1.0f;
				minRangeCoef = 1.0f;
				minRangeProbabCoef = 1.0f;
				midRangeCoef = 1.0f;
				midRangeProbabCoef = 1.0f;
				maxRangeCoef = 1.0f;
				maxRangeProbabCoef = 1.0f;
			};
		};
		inertia = 0.1;
	};
	class muzzle_mzls_smg_01: muzzle_mzls_acp
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgWeapons_muzzle_mzls_smg_010;
		model = "\A3\Weapons_F\Acc\acca_mzls_SMG_01_F.p3d";
		picture = "\A3\Weapons_F\Acc\Data\UI\icon_muzzle_snds_H_CA.paa";
	};
	class optic_srs: ItemCore
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_optic_srs0;
		picture = "\A3\Weapons_F\Data\UI\gear_acco_srs_CA.paa";
		model = "\A3\Weapons_F\Acc\acco_srs_F.p3d";
		descriptionShort = $STR_A3_A_CfgWeapons_optic_srs1;
		weaponInfoType = RscWeaponZeroing;
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass = 6;
			opticType = 1;
			optics = 1;
			modelOptics = "\A3\Weapons_F\Acc\acco_srs_F.p3d";
			class OpticsModes
			{
				class SRS
				{
					opticsID = 1;
					useModelOptics = false;
					opticsPPEffects[] =
					{
						OpticsCHAbera5,
						OpticsBlur5
					};
					opticsZoomMin = 0.25;
					opticsZoomMax = 1.25;
					opticsZoomInit = 0.75;
					memoryPointCamera = eye;
					opticsFlare = false;
					opticsDisablePeripherialVision = false;
					distanceZoomMin = 200;
					distanceZoomMax = 200;
					cameraDir = "";
					visionMode[] = {};
				};
			};
		};
		inertia = 0.1;
	};
	class optic_dcl: ItemCore
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_optic_dcl0;
		picture = "\A3\Weapons_F\Data\UI\gear_acco_dcl_120_CA.paa";
		model = "\A3\Weapons_F\Acc\acco_dcl_120_F.p3d";
		descriptionShort = $STR_A3_A_CfgWeapons_optic_dcl1;
		weaponInfoType = RscWeaponZeroing;
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass = 14;
			opticType = 1;
			optics = 1;
			modelOptics = "\A3\Weapons_F\Acc\acco_dcl_120_F.p3d";
			class OpticsModes
			{
				class DCL
				{
					opticsID = 1;
					useModelOptics = 0;
					opticsPPEffects[] =
					{
						OpticsCHAbera5,
						OpticsBlur5
					};
					opticsZoomMin = 0.25;
					opticsZoomMax = 1.25;
					opticsZoomInit = 0.75;
					memoryPointCamera = eye;
					opticsFlare = false;
					opticsDisablePeripherialVision = false;
					distanceZoomMin = 200;
					distanceZoomMax = 200;
					cameraDir = "";
					visionMode[] = {};
				};
			};
		};
		inertia = 0.3;
	};
	class optic_ACOG: ItemCore
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_optic_ACOG0;
		picture = "\A3_Aegis\Weapons_F_Aegis\Acc\Data\UI\icon_optic_ACOG_CA.paa";
		model = "\A3_Aegis\Weapons_F_Aegis\Acc\acco_ACOG_F.p3d";
		descriptionShort = $STR_A3_A_CfgWeapons_optic_ACOG1;
		weaponInfoType = RscWeaponZeroing;
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass = 8;
			opticType = 1;
			optics = 1;
			modelOptics = "\A3_Aegis\Weapons_F_Aegis\Acc\acco_ACOG_F.p3d";
			class OpticsModes
			{
				class Kolimator
				{
					opticsID = 1;
					useModelOptics = false;
					opticsPPEffects[] = {Default};
					opticsFlare = false;
					opticsDisablePeripherialVision = 0;
					opticsZoomMin = 0.25;
					opticsZoomMax = 1.25;
					opticsZoomInit = 0.75;
					memoryPointCamera = eye;
					visionMode[] = {};
					distanceZoomMin = 200;
					distanceZoomMax = 200;
					cameraDir = "";
				};
				class ACOG
				{
					opticsID = 2;
					useModelOptics = false;
					opticsPPEffects[] =
					{
						OpticsCHAbera5,
						OpticsBlur5
					};
					opticsZoomMin = 0.125;
					opticsZoomMax = 0.125;
					opticsZoomInit= 0.125;
					memoryPointCamera = opticView;
					opticsFlare = true;
					opticsDisablePeripherialVision = 1;
					distanceZoomMin = 300;
					distanceZoomMax = 300;
				};
			};
		};
		inertia = 0.1;
	};
	class optic_tws_sniper: ItemCore
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		displayName = $STR_A3_CfgWeapons_optic_tws_sniper0;
		picture = "\A3_Aegis\Weapons_F_Aegis\Acc\Data\UI\icon_optic_tws_sniper_CA.paa";
		model = "\A3\Weapons_F\Acc\acco_tws_F.p3d";
		descriptionShort = $STR_A3_CfgWeapons_optic_tws_sniper1;
		weaponInfoType = RscOptics_tws_sniper;
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass = 16;
			weaponInfoType = RscWeaponRangeZeroingModeFOV;
			optics = 1;
			modelOptics = "\A3_Aegis\Weapons_F_Aegis\Acc\Reticle_tws_sniper.p3d";
			class OpticsModes
			{
				class TWS
				{
					opticsID = 1;
					useModelOptics = true;
					opticsPPEffects[] =
					{
						OpticsCHAbera1,
						OpticsBlur1
					};
					opticsZoomMin = 0.0285;
					opticsZoomMax = 0.076;
					opticsZoomInit = 0.076;
					discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200};
					discreteDistanceInitIndex = 2;
					distanceZoomMin = 100;
					distanceZoomMax = 1200;
					discretefov[] = {0.076,0.0285};
					discreteInitIndex = false;
					memoryPointCamera = opticView;
					visionMode[] =
					{
						Ti,
						Normal
					};
					thermalMode[] = {0,1};
					opticsFlare = true;
					opticsDisablePeripherialVision = true;
					cameraDir = "";
				};
			};
		};
		inertia = 0.2;
	};
	class srifle_DMR_02_tna_F: srifle_DMR_02_F
	{
		author = $STR_A3_A_AveryTheKitty;
		baseWeapon = srifle_DMR_02_tna_F;
		displayName = $STR_A3_A_CfgWeapons_srifle_DMR_02_tna_F0;
		hiddenSelectionsTextures[] =
		{
			"\A3_Aegis\Weapons_F_Aegis\LongRangeRifles\DMR_02\Data\DMR_02_01_tna_CO.paa",
			"\A3_Aegis\Weapons_F_Aegis\LongRangeRifles\DMR_02\Data\DMR_02_02_tna_CO.paa"
		};
		picture = "\A3_Aegis\Weapons_F_Aegis\LongRangeRifles\DMR_02\Data\UI\icon_srifle_DMR_02_tna_F_X_CA.paa";
	};
	class srifle_DMR_02_tna_AMS_Pointer_Bipod_F: srifle_DMR_02_tna_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = CowsSlot;
				item = optic_AMS;
			};
			class LinkedItemsAcc
			{
				slot = PointerSlot;
				item = acc_pointer_IR;
			};
			class LinkedItemsUnder
			{
				slot = UnderBarrelSlot;
				item = bipod_01_F_blk;
			};
		};
	};
	class srifle_DMR_05_ghex_F: srifle_DMR_05_blk_F
	{
		author = $STR_A3_A_AveryTheKitty;
		baseWeapon = srifle_DMR_05_ghex_F;
		displayName = $STR_A3_A_CfgWeapons_srifle_DMR_05_ghex_F0;
		hiddenSelectionsTextures[] =
		{
			"\A3_Aegis\Weapons_F_Aegis\LongRangeRifles\DMR_05\Data\DMR_05_01_ghex_CO.paa",
			"\A3_Aegis\Weapons_F_Aegis\LongRangeRifles\DMR_05\Data\DMR_05_02_ghex_CO.paa"
		};
		picture = "\A3_Aegis\Weapons_F_Aegis\LongRangeRifles\DMR_05\Data\UI\icon_srifle_DMR_05_ghex_F_X_CA.paa";
	};
	class srifle_DMR_05_ghex_KHS_LP_BI_F: srifle_DMR_05_ghex_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = CowsSlot;
				item = optic_KHS_blk;
			};
			class LinkedItemsAcc
			{
				slot = PointerSlot;
				item = acc_pointer_IR;
			};
			class LinkedItemsUnder
			{
				slot = UnderBarrelSlot;
				item = bipod_02_F_hex;
			};
		};
	};
	class srifle_DMR_06_black_F: srifle_DMR_06_camo_F
	{
		author = $STR_A3_A_AveryTheKitty;
		baseWeapon = srifle_DMR_06_black_F;
		displayName = $STR_A3_A_CfgWeapons_srifle_DMR_06_black_F0;
		hiddenSelectionsTextures[] =
		{
			"\A3_Aegis\Weapons_F_Aegis\LongRangeRifles\DMR_06\Data\DMR_06_01_black_CO.paa",
			"\A3_Aegis\Weapons_F_Aegis\LongRangeRifles\DMR_06\Data\DMR_06_02_black_CO.paa"
		};
		magazines[] = {20Rnd_762x51_Mag};
		picture = "\A3_Aegis\Weapons_F_Aegis\LongRangeRifles\DMR_06\Data\UI\icon_srifle_DMR_06_black_F_X_CA.paa";
	};
	class srifle_DMR_06_black_ACO_F: srifle_DMR_06_black_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = CowsSlot;
				item = optic_ACO;
			};
		};
	};
	class MMG_01_black_F: MMG_01_hex_F
	{
		author = $STR_A3_A_AveryTheKitty;
		baseWeapon = MMG_01_black_F;
		displayName = $STR_A3_A_CfgWeapons_MMG_01_black_F0;
		picture = "\A3_Aegis\Weapons_F_Aegis\Machineguns\MMG_01\Data\UI\icon_MMG_01_black_F_X_CA.paa";
		UIPicture = "\A3\Weapons_F\Data\UI\icon_MG_CA.paa";
		hiddenSelectionsTextures[] =
		{
			"\A3_Aegis\Weapons_F_Aegis\Machineguns\MMG_01\Data\MMG_01_01_black_CO.paa",
			"\A3_Aegis\Weapons_F_Aegis\Machineguns\MMG_01\Data\MMG_01_02_black_CO.paa",
			"\A3_Aegis\Weapons_F_Aegis\Machineguns\MMG_01\Data\MMG_01_03_black_CO.paa"
		};
		hiddenSelectionsMaterials[] =
		{
			"\A3_Aegis\Weapons_F_Aegis\Machineguns\MMG_01\Data\MMG_01_01_black.rvmat",
			"\A3_Aegis\Weapons_F_Aegis\Machineguns\MMG_01\Data\MMG_01_02_black.rvmat",
			"\A3_Aegis\Weapons_F_Aegis\Machineguns\MMG_01\Data\MMG_01_03_black.rvmat"
		};
		class LinkedItems
		{
			class LinkedItemsUnder
			{
				slot = UnderBarrelSlot;
				item = bipod_02_F_blk;
			};
		};
	};
	class MMG_01_ghex_F: MMG_01_hex_F
	{
		author = $STR_A3_A_AveryTheKitty;
		baseWeapon = MMG_01_ghex_F;
		displayName = $STR_A3_A_CfgWeapons_MMG_01_ghex_F0;
		picture = "\A3_Aegis\Weapons_F_Aegis\Machineguns\MMG_01\Data\UI\icon_MMG_01_ghex_F_X_CA.paa";
		UIPicture = "\A3\Weapons_F\Data\UI\icon_MG_CA.paa";
		hiddenSelectionsTextures[] =
		{
			"\A3_Aegis\Weapons_F_Aegis\Machineguns\MMG_01\Data\MMG_01_01_ghex_CO.paa",
			"\A3_Aegis\Weapons_F_Aegis\Machineguns\MMG_01\Data\MMG_01_02_ghex_CO.paa",
			"\A3_Aegis\Weapons_F_Aegis\Machineguns\MMG_01\Data\MMG_01_03_ghex_CO.paa"
		};
		hiddenSelectionsMaterials[] =
		{
			"\A3_Aegis\Weapons_F_Aegis\Machineguns\MMG_01\Data\MMG_01_01_ghex.rvmat",
			"\A3_Aegis\Weapons_F_Aegis\Machineguns\MMG_01\Data\MMG_01_02_ghex.rvmat",
			"\A3_Aegis\Weapons_F_Aegis\Machineguns\MMG_01\Data\MMG_01_03_ghex.rvmat"
		};
		class LinkedItems
		{
			class LinkedItemsUnder
			{
				slot = UnderBarrelSlot;
				item = bipod_02_F_hex;
			};
		};
	};
	class MMG_01_black_ARCO_LP_F: MMG_01_black_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = CowsSlot;
				item = optic_Arco_blk_F;
			};
			class LinkedItemsAcc
			{
				slot = PointerSlot;
				item = acc_pointer_IR;
			};
			class LinkedItemsUnder
			{
				slot = UnderBarrelSlot;
				item = bipod_02_F_blk;
			};
		};
	};
	class MMG_01_ghex_ARCO_LP_F: MMG_01_ghex_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = CowsSlot;
				item = optic_Arco_ghex_F;
			};
			class LinkedItemsAcc
			{
				slot = PointerSlot;
				item = acc_pointer_IR;
			};
			class LinkedItemsUnder
			{
				slot = UnderBarrelSlot;
				item = bipod_02_F_hex;
			};
		};
	};
	class MMG_02_khaki_F: MMG_02_black_F
	{
		author = $STR_A3_A_AveryTheKitty;
		baseWeapon = MMG_02_khaki_F;
		displayName = $STR_A3_A_CfgWeapons_MMG_02_khaki_F0;
		picture = "\A3_Aegis\Weapons_F_Aegis\Machineguns\MMG_02\Data\UI\icon_MMG_02_khaki_F_X_CA.paa";
		UIPicture = "\A3\Weapons_F\Data\UI\icon_MG_CA.paa";
		hiddenSelectionsTextures[] =
		{
			"\A3_Aegis\Weapons_F_Aegis\Machineguns\MMG_02\Data\MMG_02_01_khaki_CO.paa",
			"\A3_Aegis\Weapons_F_Aegis\Machineguns\MMG_02\Data\MMG_02_02_khaki_CO.paa",
			"\A3_Aegis\Weapons_F_Aegis\Machineguns\MMG_02\Data\MMG_02_03_khaki_CO.paa"
		};
		class LinkedItems
		{
			class LinkedItemsUnder
			{
				slot = UnderBarrelSlot;
				item = bipod_01_F_khk;
			};
		};
	};
	class MMG_02_khaki_RCO_LP_F: MMG_02_khaki_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = CowsSlot;
				item = optic_Hamr_khk_F;
			};
			class LinkedItemsAcc
			{
				slot = PointerSlot;
				item = acc_pointer_IR;
			};
			class LinkedItemsUnder
			{
				slot = UnderBarrelSlot;
				item = bipod_01_F_khk;
			};
		};
	};
	class O_NVGoggles_blk_F: O_NVGoggles_hex_F
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgWeapons_O_NVGoggles_blk_F0;
		modelOptics = "\A3\Weapons_F\Reticle\optics_empty.p3d";
		model = "\A3\Weapons_F_Exp\Binocular\O_NVGoggles_blk_F.p3d";
		picture = "\A3\Weapons_F_Exp\Binocular\Data\UI\icon_O_NVGoggles_blk_F_CA.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\A3\Weapons_F_Exp\Binocular\O_NVGoggles_blk_F.p3d";
			modelOff = "\A3\Weapons_F_Exp\Binocular\O_NVGoggles_blk_off_F.p3d";
		};
	};
	class LMG_03_khk_F: LMG_03_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		baseWeapon = LMG_03_khk_F;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_LMG_03_khk_F0;
		picture = "\A3_Aegis\Weapons_F_Aegis\Machineguns\LMG_03\Data\UI\icon_LMG_03_khk_F_X_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3_Aegis\Weapons_F_Aegis\Machineguns\LMG_03\Data\LMG_03_F_body_khk_CO.paa",
			"\A3_Aegis\Weapons_F_Aegis\Machineguns\LMG_03\Data\LMG_03_F_acc_khk_CO.paa",
			"\A3_Aegis\Weapons_F_Aegis\Machineguns\M200\Data\LMG_Mk200_khk_F_3_CO.paa"
		};
	};
	class LMG_03_snd_F: LMG_03_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		baseWeapon = LMG_03_snd_F;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_LMG_03_snd_F0;
		picture = "\A3_Aegis\Weapons_F_Aegis\Machineguns\LMG_03\Data\UI\icon_LMG_03_snd_F_X_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3_Aegis\Weapons_F_Aegis\Machineguns\LMG_03\Data\LMG_03_F_body_snd_CO.paa",
			"\A3_Aegis\Weapons_F_Aegis\Machineguns\LMG_03\Data\LMG_03_F_acc_snd_CO.paa",
			"\A3\Weapons_F\Machineguns\M200\Data\grip_CO.paa"
		};
	};
	class LMG_03_Flash_F: LMG_03_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class LinkedItems
		{
			class LinkedItemsAcc
			{
				slot = PointerSlot;
				item = acc_flashlight;
			};
		};
	};
	class LMG_03_ERCO_Pointer_Snds_F: LMG_03_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = CowsSlot;
				item = optic_ERCO_blk_F;
			};
			class LinkedItemsAcc
			{
				slot = PointerSlot;
				item = acc_pointer_IR;
			};
			class LinkedItemsMuzzle
			{
				slot = MuzzleSlot;
				item = muzzle_snds_M;
			};
		};
	};
	class LMG_03_khk_ERCO_Pointer_Snds_F: LMG_03_khk_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = CowsSlot;
				item = optic_ERCO_khk_F;
			};
			class LinkedItemsAcc
			{
				slot = PointerSlot;
				item = acc_pointer_IR;
			};
			class LinkedItemsMuzzle
			{
				slot = MuzzleSlot;
				item = muzzle_snds_M_khk_F;
			};
		};
	};
	class LMG_03_snd_ERCO_Pointer_Snds_F: LMG_03_snd_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = CowsSlot;
				item = optic_ERCO_snd_F;
			};
			class LinkedItemsAcc
			{
				slot = PointerSlot;
				item = acc_pointer_IR;
			};
			class LinkedItemsMuzzle
			{
				slot = MuzzleSlot;
				item = muzzle_snds_M_snd_F;
			};
		};
	};
	class SMG_05_snd_F: SMG_05_base_F
	{
	  	author = $STR_A3_A_AveryTheKitty;
	  	baseWeapon = SMG_05_snd_F;
	  	scope = public;
		displayName = $STR_A3_A_CfgWeapons_SMG_05_snd_F0;
		picture = "\A3_Aegis\Weapons_F_Aegis\SMGs\SMG_05\Data\UI\icon_SMG_05_snd_F_X_CA.paa";
	  	hiddenSelectionsTextures[] =
		{
			"\A3_Aegis\Weapons_F_Aegis\SMGs\SMG_05\Data\SMG_05_F_snd_CO.paa",
			"\A3\Weapons_F_Exp\SMGs\SMG_05\Data\SMG_05_F_acc_CO.paa"
		};
	};
	class muzzle_snds_B_wdm_F: muzzle_snds_B
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgWeapons_muzzle_snds_B_wdm_F0;
		model = "\A3\Weapons_F\Acc\acca_snds_58_wdm_F.p3d";
		picture = "\A3\Weapons_F_Exp\Acc\Data\UI\icon_muzzle_snds_58_wdm_F_CA.paa";
	};
	class launch_MRAWS_black_F: launch_MRAWS_base_F
	{
		author = $STR_A3_A_POLPOX;
		baseWeapon = launch_MRAWS_black_F;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_launch_MRAWS_black_F0;
		picture = "\A3_Aegis\Weapons_F_Aegis\Launchers\MRAWS\Data\UI\icon_launch_MRAWS_black_F_X_CA.paa";
		hiddenSelectionsTextures[] =
		{
			"\A3_Aegis\Weapons_F_Aegis\Launchers\MRAWS\Data\launch_MRAWS_black_01_F_CO.paa",
			"\A3\Weapons_F_Tank\Launchers\MRAWS\Data\launch_MRAWS_02_F_CO.paa"
		};
	};
	class launch_MRAWS_black_rail_F: launch_MRAWS_olive_rail_F
	{
		author = $STR_A3_A_POLPOX;
		baseWeapon = launch_MRAWS_black_rail_F;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_launch_MRAWS_black_rail_F0;
		picture = "\A3_Aegis\Weapons_F_Aegis\Launchers\MRAWS\Data\UI\icon_launch_MRAWS_black_rail_F_X_CA.paa";
		hiddenSelectionsTextures[] =
		{
			"\A3_Aegis\Weapons_F_Aegis\Launchers\MRAWS\Data\launch_MRAWS_black_01_F_CO.paa",
			"\A3\Weapons_F_Tank\Launchers\MRAWS\Data\launch_MRAWS_rail_02_F_CO.paa"
		};
	};
	class Goggles: NVGoggles
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgWeapons_Goggles0;
		modelOptics = "\A3\Weapons_F\Reticle\optics_empty.p3d";
		model = "\A3_Aegis\Weapons_F_Aegis\Binocular\Goggles.p3d";
		picture = "\A3\Characters_F\Data\UI\icon_G_Combat_CA.paa";
		visionMode[] = {Normal};
		descriptionShort = $STR_A3_A_CfgWeapons_Goggles1;
		class ItemInfo: ItemInfo
		{
			uniformModel = "\A3_Aegis\Weapons_F_Aegis\Binocular\Goggles.p3d";
			modelOff = "\A3_Aegis\Weapons_F_Aegis\Binocular\Goggles.p3d";
			mass = 6;
		};
	};
	class Goggles_tna_F: Goggles
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgWeapons_Goggles_tna_F0;
		model = "\A3_Aegis\Weapons_F_Aegis\Binocular\Goggles_tna_F.p3d";
		picture = "\A3\Characters_F_Exp\BLUFOR\Data\UI\icon_G_Combat_Goggles_tna_F_CA.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\A3_Aegis\Weapons_F_Aegis\Binocular\Goggles_tna_F.p3d";
			modelOff = "\A3_Aegis\Weapons_F_Aegis\Binocular\Goggles_tna_F.p3d";
		};
	};
	class Goggles_grn_F: Goggles
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgWeapons_Goggles_grn_F0;
		model = "\A3_Aegis\Weapons_F_Aegis\Binocular\Goggles_grn_F.p3d";
		picture = "\A3\Characters_F_Exp\BLUFOR\Data\UI\icon_G_Combat_Goggles_tna_F_CA.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\A3_Aegis\Weapons_F_Aegis\Binocular\Goggles_grn_F.p3d";
			modelOff = "\A3_Aegis\Weapons_F_Aegis\Binocular\Goggles_grn_F.p3d";
		};
	};
	class muzzle_snds_408_black: muzzle_snds_338_black
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgWeapons_muzzle_snds_408_black0;
		model = "\A3\Weapons_F\Acc\acca_snds_338_black_F.p3d";
		picture = "\A3\Weapons_F_Mark\Data\UI\icon_muzzle_snds_338_black_CA.paa";
	};
	class muzzle_snds_408_green: muzzle_snds_408_black
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgWeapons_muzzle_snds_408_green0;
		model = "\A3\Weapons_F\Acc\acca_snds_338_green_F.p3d";
		picture = "\A3\Weapons_F_Mark\Data\UI\icon_muzzle_snds_338_green_CA.paa";
	};
	class muzzle_snds_408_sand: muzzle_snds_408_black
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgWeapons_muzzle_snds_408_sand0;
		model = "\A3\Weapons_F\Acc\acca_snds_338_tan_F.p3d";
		picture = "\A3\Weapons_F_Mark\Data\UI\icon_muzzle_snds_338_sand_CA.paa";
	};
	class muzzle_snds_460: ItemCore
	{
		author = $STR_A3_A_AveryTheKitty;
		htMin = 1;
		htMax = 600;
		afMax = 0;
		mfMax = 0;
		mFact = 1;
		tBody = 100;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_muzzle_snds_4600;
		picture = "\A3\Weapons_F\Acc\Data\UI\icon_muzzle_snds_L_CA.paa";
		model = "\A3\Weapons_F\Acc\acca_snds_L_F.p3d";
		class ItemInfo: InventoryMuzzleItem_Base_F
		{
			mass = 10;
			class MagazineCoef
			{
				initSpeed = 1.05;
			};
			class AmmoCoef
			{
				hit = 1;
				typicalSpeed = 1;
				airFriction = 1;
				visibleFire = 0.5;
				audibleFire = 0.3;
				visibleFireTime = 0.5;
				audibleFireTime = 0.5;
				cost = 1;
			};
			soundTypeIndex = 1;
			muzzleEnd = zaslehPoint;
			alternativeFire = Zasleh2;
			class MuzzleCoef
			{
				dispersionCoef = 0.8f;
				artilleryDispersionCoef = 1.0f;
				fireLightCoef = 0.1f;
				recoilCoef = 1.0f;
				recoilProneCoef = 1.0f;
				minRangeCoef = 1.0f;
				minRangeProbabCoef = 1.0f;
				midRangeCoef = 1.0f;
				midRangeProbabCoef = 1.0f;
				maxRangeCoef = 1.0f;
				maxRangeProbabCoef = 1.0f;
			};
		};
		inertia = 0.2;
	};
	class muzzle_snds_545: muzzle_snds_H
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgWeapons_muzzle_snds_5450;
		model = "\A3\Weapons_F\Acc\acca_snds_h_F.p3d";
		picture = "\A3\Weapons_F\Acc\Data\UI\icon_muzzle_snds_H_CA.paa";
	};
	class muzzle_snds_545_wdm_F: muzzle_snds_545
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgWeapons_muzzle_snds_545_wdm_F0;
		model = "\A3\Weapons_F\Acc\acca_snds_58_wdm_F.p3d";
		picture = "\A3\Weapons_F_Exp\Acc\Data\UI\icon_muzzle_snds_58_wdm_F_CA.paa";
	};
	class muzzle_snds_545_lush_F: muzzle_snds_545
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgWeapons_muzzle_snds_545_lush_F0;
		model = "\A3\Weapons_F\Acc\acca_snds_h_lush_F.p3d";
		picture = "\A3\Weapons_F_Enoch\Acc\Data\UI\icon_muzzle_snds_B_lush_F_CA.paa";
	};
	class muzzle_snds_545_arid_F: muzzle_snds_545
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgWeapons_muzzle_snds_545_arid_F0;
		model = "\A3\Weapons_F\Acc\acca_snds_h_arid_F.p3d";
		picture = "\A3\Weapons_F_Enoch\Acc\Data\UI\icon_muzzle_snds_B_arid_F_CA.paa";
	};
	class muzzle_mzls_58_F: muzzle_mzls_M
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgWeapons_muzzle_mzls_58_F0;
		model = "\A3\Weapons_F\Acc\acca_mzls_H_F.p3d";
		picture = "\A3\Weapons_F\Data\UI\gear_acca_mzls_H_CA.paa";
	};
	class muzzle_mzls_545: muzzle_mzls_M
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgWeapons_muzzle_mzls_5450;
		model = "\A3\Weapons_F\Acc\acca_mzls_H_F.p3d";
		picture = "\A3\Weapons_F\Data\UI\gear_acca_mzls_H_CA.paa";
	};
	class optic_ACO_grn;
	class optic_ACO_grn_AK_F: optic_ACO_grn
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgWeapons_optic_ACO_grn_AK_F0;
		model = "\A3\Weapons_F\Acc\acco_aco_OP_smg_F.p3d";
		picture = "\A3\Weapons_F\Acc\Data\UI\icon_optic_ACO_grn_smg_CA.paa";
	};
	class optic_Kobra_F: ItemCore
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = protected;
		displayName = $STR_A3_A_CfgWeapons_optic_Kobra_F0;
		//picture = "\A3_Aegis\Weapons_F_Aegis\Acc\Data\UI\icon_optic_Kobra_F_CA.paa";
		//model = "\A3_Aegis\Weapons_F_Aegis\Acc\acco_Kobra_F.p3d";
		descriptionShort = $STR_A3_A_CfgWeapons_optic_Kobra_F1;
		weaponInfoType = RscWeaponZeroing;
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass = 6;
			modelOptics = "\A3\Weapons_F\empty.p3d";
			optics = 1;
			class OpticsModes
			{
				class Kobra
				{
					opticsID = 1;
					useModelOptics = 0;
					opticsZoomMin = 0.25;
					opticsZoomMax = 1.25;
					opticsZoomInit = 0.75;
					memoryPointCamera = eye;
					opticsFlare = false;
					opticsDisablePeripherialVision = false;
					distanceZoomMin = 200;
					distanceZoomMax = 200;
					cameraDir = "";
					visionMode[] = {};
					opticsPPEffects[] = {Default};
				};
			};
		};
		inertia = 0.1;
	};
	class optic_pso_F: ItemCore
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = protected;
		displayName = $STR_A3_A_CfgWeapons_optic_pso_F0;
		//picture = "\A3_Aegis\Weapons_F_Aegis\Acc\Data\UI\icon_optic_pso_F_CA.paa";
		//model = "\A3_Aegis\Weapons_F_Aegis\Acc\acco_pso_F.p3d";
		descriptionShort = $STR_A3_A_CfgWeapons_optic_pso_F1;
		weaponInfoType = RscWeaponZeroing;
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass = 14;
			opticType = 2;
			weaponInfoType = RscWeaponRangeZeroingFOV;
			optics = 1;
			modelOptics = "\A3\Weapons_F\Acc\Reticle_pso_F.p3d";
			class OpticsModes
			{
				class Snip
				{
					opticsID = 1;
					opticsDisplayName = "WFOV";
					useModelOptics = true;
					opticsPPEffects[] =
					{
						OpticsCHAbera1,
						OpticsBlur1
					};
					opticsZoomMin = 0.01;
					opticsZoomMax = 0.042;
					opticsZoomInit = 0.042;
					discreteDistance[] =
					{
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
						1300
					};
					discreteDistanceInitIndex = 2;
					distanceZoomMin = 300;
					distanceZoomMax = 1300;
					discretefov[] = {0.042,0.01};
					discreteInitIndex = 0;
					memoryPointCamera = opticView;
					modelOptics = "\A3\Weapons_F\Acc\Reticle_pso_F.p3d";
					visionMode[] = {Normal};
					opticsFlare = true;
					opticsDisablePeripherialVision = true;
					cameraDir = "";
				};
			};
		};
		inertia = 0.2;
	};
};