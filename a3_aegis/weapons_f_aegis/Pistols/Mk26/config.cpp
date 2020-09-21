#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
#include "cfgVehicles.hpp"
#include "\A3_Aegis\ASDG.hpp"
class Mode_SemiAuto;
class SlotInfo;
class CowsSlot;
class PointerSlot;
class CfgWeapons
{
	class Pistol;
	class Pistol_Base_F: Pistol
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class hgun_Mk26_F: Pistol_Base_F
	{
		author = $STR_A3_A_AveryTheKitty_and_SilverTM;
		baseWeapon = hgun_Mk26_F;
		scope = public;
		model = "\A3_Aegis\Weapons_F_Aegis\Pistols\Mk26\Mk26_F.p3d";
		picture = "\A3_Aegis\Weapons_F_Aegis\Pistols\Mk26\Data\UI\icon_hgun_Mk26_F_X_CA.paa";
		UiPicture = "\A3\Weapons_F\Data\UI\icon_regular_CA.paa";
		magazines[] = {7Rnd_127x33_Mag};
		magazineWell[] = {Mk26_127x33};
		displayname = $STR_A3_A_CfgWeapons_hgun_Mk26_F0;
		descriptionShort = $STR_A3_A_CfgWeapons_hgun_Mk26_F1;
		class Library
		{
			libTextDesc = $STR_A3_A_CfgWeapons_hgun_Mk26_F_Library0;
		};
		reloadAction = GestureReloadPistol;
		recoil = recoil_pistol_mk26;
		hiddenSelections[] = {camo};
		hiddenSelectionsTextures[] = {"\A3_Aegis\Weapons_F_Aegis\Pistols\Mk26\Data\Mk26_CO.paa"};
		modes[] = {Single};
		class Single: Mode_SemiAuto
		{
			sounds[] = {StandardSound};
			reloadTime = 0.25;
			dispersion = 0.00493;
			minRange = 5;
			minRangeProbab = 0.1;
			midRange = 25;
			midRangeProbab = 0.3;
			maxRange = 50;
			maxRangeProbab = 0.1;
		};
		inertia = 0.3;
		aimTransitionSpeed = 1.6;
		dexterity = 1.7;
		initSpeed = 470;
		maxZeroing = 100;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 50;
			holsterScale = 0.7;
			class CowsSlot: asdg_PistolOpticRail1913
			{
                /*
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {optic_Yorris};
                */
				iconPosition[] =
				{
					0.46, // X
					0.15 // Y
				};
				iconScale = 0.15;
			};
			class MuzzleSlot{};
			class PointerSlot: asdg_PistolUnderRail
			{
                /*
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {acc_flashlight_pistol};
                */
				iconPosition[] =
				{
					0.35, // X
					0.47 // Y
				};
				iconScale = 0.3;
			};
		};
	};
	// Mk26 12.7 mm + Yorris J2
	class hgun_Mk26_Yorris_F: hgun_Mk26_F
	{
		author = $STR_A3_A_AveryTheKitty_and_SilverTM;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = CowsSlot;
				item = optic_Yorris;
			};
		};
	};
};