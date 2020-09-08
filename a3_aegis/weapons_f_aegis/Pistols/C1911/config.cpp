#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
#include "cfgVehicles.hpp"
#include "\A3_Aegis\ASDG.hpp"
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
			class MuzzleSlot: asdg_MuzzleSlot_45ACP
			{
                /*
				linkProxy = "\A3\Data_F\proxies\weapon_slots\MUZZLE";
				compatibleItems[] =
				{
					muzzle_snds_acp,
					muzzle_mzls_acp
				};
                */
				iconPosition[] = {0.25,0.4};
				iconScale = 0.2;
			};
			class PointerSlot: asdg_PistolUnderRail
			{
                /*
				linkProxy = "\A3\Data_F\proxies\weapon_slots\SIDE";
				compatibleItems[] = {acc_flashlight_pistol};
                */
				iconPosition[] = {0.2,0.45};
				iconScale = 0.25;
			};
		};
	};
};