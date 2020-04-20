#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
#include "cfgVehicles.hpp"
class Mode_SemiAuto;
class SlotInfo;
class MuzzleSlot;
class PointerSlot;
class CfgWeapons
{
	class Pistol;
	class Pistol_Base_F: Pistol
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class hgun_G17_F: Pistol_Base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		baseWeapon = hgun_G17_F;
		scope = public;
		model = "\A3_Aegis\Weapons_F_Aegis\Pistols\G17\G17_F.p3d";
		picture = "\A3_Aegis\Weapons_F_Aegis\Pistols\G17\Data\UI\icon_hgun_G17_F_X_CA.paa";
		UiPicture = "\A3\Weapons_F\Data\UI\icon_regular_CA.paa";
		magazines[] = {17Rnd_9x21_Mag};
		magazineWell[] = {Pistol_9x21};
		reloadAction = GestureReloadPistol;
		recoil = recoil_pistol_g17;
		displayname = $STR_A3_A_CfgWeapons_hgun_G17_F0;
		hiddenSelections[] = {camo};
		hiddenSelectionsTextures[] = {"\A3_Aegis\Weapons_F_Aegis\Pistols\G17\Data\G17_CO.paa"};
		modes[] = {Single};
		class Single: Mode_SemiAuto
		{
			reloadTime = 0.13;
			dispersion = 0.0029;
			minRange = 5;
			minRangeProbab = 0.3;
			midRange = 25;
			midRangeProbab = 0.6;
			maxRange = 50;
			maxRangeProbab = 0.1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 25;
		};
		bullet1[] = {"\A3\Sounds_F\weapons\Shells\9mm\metal_9mm_01",db-6,1,15};
		bullet2[] = {"\A3\Sounds_F\weapons\Shells\9mm\metal_9mm_02",db-6,1,15};
		bullet3[] = {"\A3\Sounds_F\weapons\Shells\9mm\metal_9mm_03",db-6,1,15};
		bullet4[] = {"\A3\Sounds_F\weapons\Shells\9mm\metal_9mm_04",db-6,1,15};
		bullet5[] = {"\A3\Sounds_F\weapons\Shells\9mm\dirt_9mm_01",db-8,1,15};
		bullet6[] = {"\A3\Sounds_F\weapons\Shells\9mm\dirt_9mm_02",db-8,1,15};
		bullet7[] = {"\A3\Sounds_F\weapons\Shells\9mm\dirt_9mm_03",db-8,1,15};
		bullet8[] = {"\A3\Sounds_F\weapons\Shells\9mm\dirt_9mm_04",db-8,1,15};
		bullet9[] = {"\A3\Sounds_F\weapons\Shells\9mm\grass_9mm_01",db-13,1,15};
		bullet10[] = {"\A3\Sounds_F\weapons\Shells\9mm\grass_9mm_02",db-13,1,15};
		bullet11[] = {"\A3\Sounds_F\weapons\Shells\9mm\grass_9mm_03",db-13,1,15};
		bullet12[] = {"\A3\Sounds_F\weapons\Shells\9mm\grass_9mm_04",db-13,1,15};
		soundBullet[] =
		{
			bullet1,1/12,
			bullet2,1/12,
			bullet3,1/12,
			bullet4,1/12,
			bullet5,1/12,
			bullet6,1/12,
			bullet7,1/12,
			bullet8,1/12,
			bullet9,1/12,
			bullet10,1/12,
			bullet11,1/12,
			bullet12,1/12
		};
		class Library
		{
			libTextDesc = $STR_A3_A_CfgWeapons_hgun_G17_F_Library0;
		};
		descriptionShort = $STR_A3_A_CfgWeapons_hgun_G17_F1;
		inertia = 0.1;
		aimTransitionSpeed = 1.6;
		dexterity = 1.9;
		initSpeed = 375;
		maxZeroing = 100;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 20;
			class MuzzleSlot: MuzzleSlot
			{
				linkProxy = "\A3\Data_F\proxies\weapon_slots\MUZZLE";
				compatibleItems[] =
				{
					muzzle_snds_L,
					muzzle_mzls_L
				};
				iconPosition[] =
				{
					0.22, // X
					0.26 // Y
				};
				iconScale = 0.2;
			};
			class CowsSlot{};
			class PointerSlot: PointerSlot
			{
				linkProxy = "\A3\Data_F\proxies\weapon_slots\SIDE";
				compatibleItems[] = {acc_flashlight_pistol};
				iconPosition[] =
				{
					0.36, // X
					0.39 // Y
				};
				iconScale = 0.2;
			};
		};
	};
	class hgun_G17_black_F: hgun_G17_F
	{
		author = $STR_A3_A_AveryTheKitty;
		baseWeapon = hgun_G17_black_F;
		displayname = $STR_A3_A_CfgWeapons_hgun_G17_black_F0;
		hiddenSelectionsTextures[] = {"\A3_Aegis\Weapons_F_Aegis\Pistols\G17\Data\G17_black_CO.paa"};
		picture = "\A3_Aegis\Weapons_F_Aegis\Pistols\G17\Data\UI\icon_hgun_G17_black_F_X_CA.paa";
	};
	class hgun_G17_khaki_F: hgun_G17_F
	{
		author = $STR_A3_A_AveryTheKitty;
		baseWeapon = hgun_G17_khaki_F;
		displayname = $STR_A3_A_CfgWeapons_hgun_G17_khaki_F0;
		hiddenSelectionsTextures[] = {"\A3_Aegis\Weapons_F_Aegis\Pistols\G17\Data\G17_khaki_CO.paa"};
		picture = "\A3_Aegis\Weapons_F_Aegis\Pistols\G17\Data\UI\icon_hgun_G17_khaki_F_X_CA.paa";
	};
	// G17 9 mm + Sound Suppressor (9 mm)
	class hgun_G17_snds_F: hgun_G17_F
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
	// G17 9 mm (Black) + Sound Suppressor (9 mm)
	class hgun_G17_black_snds_F: hgun_G17_black_F
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
	// G17 9 mm (Khaki) + Sound Suppressor (9 mm)
	class hgun_G17_khaki_snds_F: hgun_G17_khaki_F
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
};