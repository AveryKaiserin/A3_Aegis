#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
#include "cfgVehicles.hpp"
#include "\A3_Aegis\ASDG.hpp"
class Mode_SemiAuto;
class MuzzleSlot;
class CfgWeapons
{
	class Pistol;
	class Pistol_Base_F: Pistol
	{
		class WeaponSlotsInfo;
	};
	class hgun_Pistol_02_F: Pistol_Base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		baseWeapon = hgun_Pistol_02_F;
		displayname = $STR_A3_A_CfgWeapons_hgun_Pistol_02_F0;
		descriptionShort = $STR_A3_A_CfgWeapons_hgun_Pistol_02_F1;
		model = "\A3_Aegis\Weapons_F_Aegis\Pistols\Pistol_02\Pistol_02_F.p3d";
		magazines[] = {20Rnd_580x21_Mag_F};
		hiddenSelections[] = {Camo};
		hiddenSelectionsTextures[] = {"\A3_Aegis\Weapons_F_Aegis\Pistols\Pistol_02\Data\Pistol_02_CO.paa"};
		picture = "\A3_Aegis\Weapons_F_Aegis\Pistols\Pistol_02\Data\UI\icon_hgun_Pistol_02_F_X_CA.paa";
		UiPicture = "\A3\Weapons_F\Data\UI\icon_regular_CA.paa";
		recoil = recoil_pistol_type92;
		initSpeed = 350;
		inertia = 0.1;
		aimTransitionSpeed = 1.6;
		dexterity = 1.9;
		maxZeroing = 100;
		class Library
		{
			libTextDesc = $STR_A3_A_CfgWeapons_hgun_Pistol_02_F_Library0;
		};
		reloadAction = GestureReloadPistol;
		modes[] = {Single};
		class Single: Mode_SemiAuto
		{
			reloadTime = 0.13;
			dispersion = 0.00406;
			minRange = 0;
			minRangeProbab = 0.3;
			midRange = 30;
			midRangeProbab = 0.6;
			maxRange = 60;
			maxRangeProbab = 0.1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 25;
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 20;
			class MuzzleSlot: asdg_MuzzleSlot_9MM
			{
                /* Unneeded
				linkProxy = "\A3\Data_F\proxies\weapon_slots\MUZZLE";
				compatibleItems[] =
				{
					muzzle_snds_L,
					muzzle_mzls_L
				};
                */
				iconPosition[] =
				{
					0.22, // X
					0.26 // Y
				};
				iconScale = 0.2;
			};
			class CowsSlot{};
			class PointerSlot{};
		};
	};
	#include "presets.hpp"
};