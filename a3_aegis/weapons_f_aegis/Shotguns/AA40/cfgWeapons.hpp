class CfgWeapons
{
    /* Definitions */
	#include "\A3_Aegis\macros_weaponAcc.hpp"
    
    /* Inheritance Tree */
	#include "\A3_Aegis\cfgRifles.hpp"

    /* Weapons */
	class sgun_AA40_F: Rifle_Base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		baseWeapon = sgun_AA40_F;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_sgun_AA40_F0;
		model = "\A3_Aegis\Weapons_F_Aegis\Shotguns\AA40\AA40_F.p3d";
		magazines[] =
		{
			20Rnd_AA40_Pellets,
			20Rnd_AA40_Slug,
			20Rnd_AA40_HE,
			8Rnd_12Gauge_Pellets,
			8Rnd_12Gauge_Slug
		};
		magazineWell[] =
		{
			AA40_12GA,
			AA40_12GA_Large
		};
		magazineReloadSwitchPhase = 0.48;
		maxZeroing = 100;
		reloadAction = ReloadMagazine;
		recoil = recoil_aa40;
		cursor = sgun;
		handAnim[] =
		{
			OFP2_ManSkeleton,
			"\A3_Aegis\Weapons_F_Aegis\Shotguns\AA40\Data\Anim\AA40.rtm"
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot{};
			class CowsSlot{};
			class PointerSlot{};
			mass = 280;
		};
		inertia = 0.6;
		aimTransitionSpeed = 1.1;
		dexterity = 1.3;
		initSpeed = 350;
		picture = "\A3_Aegis\Weapons_F_Aegis\Shotguns\AA40\Data\UI\icon_sgun_AA40_F_X_CA.paa";
		UiPicture = "\A3\Weapons_F\Data\UI\icon_regular_CA.paa";
		descriptionShort = $STR_A3_A_CfgWeapons_sgun_AA40_F1;
		class Library
		{
			libTextDesc = $STR_A3_A_CfgWeapons_sgun_AA40_F_Library0;
		};
		distanceZoomMin = 100;
		distanceZoomMax = 100;
		modes[] = {FullAuto};
		class FullAuto: Mode_FullAuto
		{
			sounds[] = {StandardSound};
			dispersion = 0.00116;
			reloadTime = RPM_300;
			minRange = 0;
			minRangeProbab = 0.6;
			midRange = 40;
			midRangeProbab = 0.15;
			maxRange = 70;
			maxRangeProbab = 0.02;
		};
	};
};