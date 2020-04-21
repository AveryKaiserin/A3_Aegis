#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
#include "cfgVehicles.hpp"
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class SlotInfo;
class MuzzleSlot;
class CowsSlot;
class PointerSlot;
class UnderBarrelSlot;
class MuzzleSlot_556;
class MuzzleSlot_65;
class MuzzleSlot_762;
class MuzzleSlot_MG;
class CowsSlot_Rail;
class PointerSlot_Rail;
class UnderBarrelSlot_rail;
class CfgWeapons
{
	class Rifle;
	class Rifle_Base_F: Rifle
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class UGL_F;

	// arsenal weapons
	class sgun_M4_F: Rifle_Base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		baseWeapon = sgun_M4_F;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_sgun_M4_F0;
		model = "\A3_Aegis\Weapons_F_Aegis\Shotguns\M4_SSAS\M4_F.p3d";
		magazines[] = {8Rnd_12Gauge_Pellets};
		magazineWell[] = {Shotgun_12GA};
		maxZeroing = 100;
		reloadAction = GestureReloadM4SSAS;
		recoil = recoil_m4;
		cursor = sgun;
		handAnim[] =
		{
			OFP2_ManSkeleton,
			"\A3\Weapons_F_Mark\LongRangeRifles\DMR_03\Data\Anim\DMR_03.rtm"
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot{};
			class CowsSlot: CowsSlot_Rail
			{
				iconPosition[] = {0.5,0.3};
				iconScale = 0.2;
			};
			class PointerSlot{};
			mass = 110;
		};
		inertia = 0.6;
		aimTransitionSpeed = 1;
		dexterity = 1.3;
		initSpeed = 381;
		picture = "\A3_Aegis\Weapons_F_Aegis\Shotguns\M4_SSAS\Data\UI\icon_sgun_M4_F_X_CA.paa";
		UiPicture = "\A3\Weapons_F\Data\UI\icon_regular_CA.paa";
		descriptionShort = $STR_A3_A_CfgWeapons_sgun_M4_F1;
		class Library
		{
			libTextDesc = $STR_A3_A_CfgWeapons_sgun_M4_F_Library0;
		};
		bullet1[] = {"\A3\Sounds_F\weapons\Shells\Shotgun\metal_shotgun_01",db-6,1,15};
		bullet2[] = {"\A3\Sounds_F\weapons\Shells\Shotgun\metal_shotgun_02",db-6,1,15};
		bullet3[] = {"\A3\Sounds_F\weapons\Shells\Shotgun\metal_shotgun_03",db-6,1,15};
		bullet4[] = {"\A3\Sounds_F\weapons\Shells\Shotgun\metal_shotgun_04",db-6,1,15};
		bullet5[] = {"\A3\Sounds_F\weapons\Shells\Shotgun\dirt_shotgun_01",db-8,1,15};
		bullet6[] = {"\A3\Sounds_F\weapons\Shells\Shotgun\dirt_shotgun_02",db-8,1,15};
		bullet7[] = {"\A3\Sounds_F\weapons\Shells\Shotgun\dirt_shotgun_03",db-8,1,15};
		bullet8[] = {"\A3\Sounds_F\weapons\Shells\Shotgun\dirt_shotgun_04",db-8,1,15};
		bullet9[] = {"\A3\Sounds_F\weapons\Shells\Shotgun\grass_shotgun_01",db-8,1,15};
		bullet10[] = {"\A3\Sounds_F\weapons\Shells\Shotgun\grass_shotgun_02",db-8,1,15};
		bullet11[] = {"\A3\Sounds_F\weapons\Shells\Shotgun\grass_shotgun_03",db-8,1,15};
		bullet12[] = {"\A3\Sounds_F\weapons\Shells\Shotgun\grass_shotgun_04",db-8,1,15};
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
		distanceZoomMin = 100;
		distanceZoomMax = 100;
		modes[] = {Single};
		class Single: Mode_SemiAuto
		{
			sounds[] = {StandardSound};
			dispersion = 0.00087;
			reloadTime = 0.2;
			minRange = 1;
			minRangeProbab = 0.5;
			midRange = 60;
			midRangeProbab = 0.7;
			maxRange = 100;
			maxRangeProbab = 0.05;
		};
	};

	// unit weapons
	class sgun_M4_Holo_F: sgun_M4_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = CowsSlot;
				item = optic_ACO_smg;
			};
		};
	};
	class sgun_M4_ACO_F: sgun_M4_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = CowsSlot;
				item = optic_ACO_grn_smg;
			};
		};
	};
};