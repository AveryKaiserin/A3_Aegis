#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
#include "cfgVehicles.hpp"
class Mode_SemiAuto;
class SlotInfo;
class CfgWeapons
{
	class Pistol;
	class Pistol_Base_F: Pistol
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class hgun_Pistol_heavy_03_F: Pistol_Base_F
	{
		author = $STR_A3_A_AveryTheKitty_and_Maxim_Koptelov;
		baseWeapon = hgun_Pistol_heavy_03_F;
		scope = public;
		model = "\A3_Aegis\Weapons_F_Aegis\Pistols\Pistol_Heavy_03\Pistol_Heavy_03_F.p3d";
		picture = "\A3_Aegis\Weapons_F_Aegis\Pistols\Pistol_Heavy_03\Data\UI\icon_hgun_Pistol_heavy_03_F_X_CA.paa";
		UiPicture = "\A3\Weapons_F\Data\UI\icon_regular_CA.paa";
		magazines[] = {6Rnd_9x33_Cylinder};
		magazineWell[] = {MP412_9x33};
		displayName = $STR_A3_A_CfgWeapons_hgun_Pistol_heavy_03_F0;
		descriptionShort = $STR_A3_A_CfgWeapons_hgun_Pistol_heavy_03_F1;
		class Library
		{
			libTextDesc = $STR_A3_A_CfgWeapons_hgun_Pistol_heavy_03_F_Library0;
		};
		reloadAction = GestureReloadFlaregun;
		recoil = recoil_pistol_mp412;
		hiddenSelections[] = {camo};
		hiddenSelectionsTextures[] = {"\A3_Aegis\Weapons_F_Aegis\Pistols\Pistol_Heavy_03\Data\Pistol_Heavy_03_CO.paa"};
		modes[] = {Single};
		class Single: Mode_SemiAuto
		{
			sounds[] = {StandardSound};
			reloadTime = 0.25;
			dispersion = 0.0029;
			minRange = 5;
			minRangeProbab = 0.1;
			midRange = 25;
			midRangeProbab = 0.3;
			maxRange = 50;
			maxRangeProbab = 0.1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 25;
		};
		inertia = 0.3;
		aimTransitionSpeed = 1.5;
		dexterity = 1.7;
		initSpeed = 380;
		maxZeroing = 100;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 30;
			holsterScale = 0.85;
			class CowsSlot{};
			class MuzzleSlot{};
			class PointerSlot{};
		};
	};
};