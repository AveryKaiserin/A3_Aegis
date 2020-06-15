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
	class hgun_G17_base_F: Pistol_Base_F
	{
		model = "\A3_Aegis\Weapons_F_Aegis\Pistols\G17\G17_F.p3d";
		class Library
		{
			libTextDesc = $STR_A3_A_CfgWeapons_hgun_G17_F_Library0;
		};
		magazines[] = {17Rnd_9x21_Mag};
		magazineWell[] = {G17_9x21};
		reloadAction = GestureReloadPistol;
		hiddenSelections[] = {Camo};
		discreteDistance[] = {100};
		discreteDistanceInitIndex = 0;
		recoil = recoil_pistol_g17;
		initSpeed = -1;
		inertia = 0.1;
		dexterity = 1.9;
		aimTransitionSpeed = 1.6;
		maxZeroing = 100;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot{};
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
			class UnderBarrelSlot{};
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
			mass = 15;
			holsterScale = 0.95;
		};
		modes[] = {Single};
		class Single: Mode_SemiAuto
		{
			reloadTime = 0.13;
			dispersion = 0.00406;
			minRange = 5;
			minRangeProbab = 0.3;
			midRange = 30;
			midRangeProbab = 0.6;
			maxRange = 50;
			maxRangeProbab = 0.1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 25;
		};
	};
	class hgun_G17_F: hgun_G17_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		displayname = $STR_A3_A_CfgWeapons_hgun_G17_F0;
		picture = "\A3_Aegis\Weapons_F_Aegis\Pistols\G17\Data\UI\icon_hgun_G17_F_X_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Weapons_F_Aegis\Pistols\G17\Data\G17_CO.paa"};
		baseWeapon = hgun_G17_F;
	};
	class hgun_G17_black_F: hgun_G17_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		displayname = $STR_A3_A_CfgWeapons_hgun_G17_black_F0;
		picture = "\A3_Aegis\Weapons_F_Aegis\Pistols\G17\Data\UI\icon_hgun_G17_black_F_X_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Weapons_F_Aegis\Pistols\G17\Data\G17_black_CO.paa"};
		baseWeapon = hgun_G17_black_F;
	};
	class hgun_G17_khaki_F: hgun_G17_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		displayname = $STR_A3_A_CfgWeapons_hgun_G17_khaki_F0;
		picture = "\A3_Aegis\Weapons_F_Aegis\Pistols\G17\Data\UI\icon_hgun_G17_khaki_F_X_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Weapons_F_Aegis\Pistols\G17\Data\G17_khaki_CO.paa"};
		baseWeapon = hgun_G17_khaki_F;
	};
	#include "presets.hpp"
};