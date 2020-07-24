#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
#include "cfgVehicles.hpp"
class Mode_SemiAuto;
class SlotInfo;
class PointerSlot;
class CowsSlot_Rail;
class CfgWeapons
{
	class Rifle;
	class Rifle_Base_F: Rifle
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class UGL_F;
	class sgun_M4_F: Rifle_Base_F
	{
		author = $STR_A3_A_AveryTheKitty_and_Tigg;
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
				iconPosition[] =
				{
					0.486, // X
					0.277 // Y
				};
				iconScale = 0.15;
			};
			class PointerSlot: PointerSlot
			{
				linkProxy = "\A3\Data_F\proxies\weapon_slots\SIDE";
				compatibleItems[] = {acc_flashlight_pistol};
				iconPosition[] =
				{
					0.088, // X
					0.516 // Y
				};
				iconScale = 0.15;
			};
			mass = 100;
		};
		inertia = 0.6;
		aimTransitionSpeed = 1.1;
		dexterity = 1.3;
		initSpeed = -1;
		picture = "\A3_Aegis\Weapons_F_Aegis\Shotguns\M4_SSAS\Data\UI\icon_sgun_M4_F_X_CA.paa";
		UiPicture = "\A3\Weapons_F\Data\UI\icon_regular_CA.paa";
		descriptionShort = $STR_A3_A_CfgWeapons_sgun_M4_F1;
		hiddenSelections[] = {camo};
		hiddenSelectionsTextures[] = {"\A3_Aegis\Weapons_F_Aegis\Shotguns\M4_SSAS\Data\M4_SSAS_CO.paa"};
		class Library
		{
			libTextDesc = $STR_A3_A_CfgWeapons_sgun_M4_F_Library0;
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
	// M4 SSAS 12G + ACO SMG (Red)
	class sgun_M4_Holo_F: sgun_M4_F
	{
		author = $STR_A3_A_AveryTheKitty_and_Tigg;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = CowsSlot;
				item = optic_ACO_smg;
			};
		};
	};
	// M4 SSAS 12G + ACO SMG (Green)
	class sgun_M4_ACO_F: sgun_M4_F
	{
		author = $STR_A3_A_AveryTheKitty_and_Tigg;
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