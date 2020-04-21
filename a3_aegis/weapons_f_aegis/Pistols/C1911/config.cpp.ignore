#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
#include "cfgVehicles.hpp"
class Mode_SemiAuto;
class MuzzleSlot;
class SlotInfo;
class PointerSlot;
class CfgWeapons
{
	class Pistol;
	class Pistol_Base_F: Pistol
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class hgun_C1911_F: Pistol_Base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		baseWeapon = hgun_C1911_F;
		scope = public;
		model = "\A3\Weapons_F_Beta\Pistols\ACPC2\ACPC2_F.p3d";
		picture = "\A3_Aegis\Weapons_F_Aegis\Pistols\C1911\Data\UI\icon_hgun_C1911_F_X_CA.paa";
		magazines[] = {7Rnd_45ACP_Mag};
		magazineWell[] = {C1911_45ACP};
		displayname = $STR_A3_A_CfgWeapons_hgun_C1911_F0;
		descriptionShort = $STR_A3_A_CfgWeapons_hgun_C1911_F1;
		class Library
		{
			libTextDesc = $STR_A3_A_CfgWeapons_hgun_C1911_F_Library0;
		};
		hiddenSelections[] = {camo};
		hiddenSelectionsTextures[] = {"\A3_Aegis\Weapons_F_Aegis\Pistols\C1911\Data\C1911_CO.paa"};
		hiddenSelectionsMaterials[] = {"\A3_Aegis\Weapons_F_Aegis\Pistols\C1911\Data\C1911.rvmat"};
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
		inertia = 0.2;
		aimTransitionSpeed = 1.6;
		dexterity = 1.8;
		initSpeed = 253;
		recoil = recoil_pistol_c1911;
		maxZeroing = 100;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 20;
			holsterScale = 0.95;
			class CowsSlot{};
			class MuzzleSlot: MuzzleSlot
			{
				linkProxy = "\A3\Data_F\proxies\weapon_slots\MUZZLE";
				compatibleItems[] =
				{
					muzzle_snds_acp,
					muzzle_mzls_acp
				};
				iconPosition[] = {0.25,0.4};
				iconScale = 0.2;
			};
			class PointerSlot: PointerSlot
			{
				linkProxy = "\A3\Data_F\proxies\weapon_slots\SIDE";
				compatibleItems[] = {acc_flashlight_pistol};
				iconPosition[] = {0.2,0.45};
				iconScale = 0.25;
			};
		};
	};
};