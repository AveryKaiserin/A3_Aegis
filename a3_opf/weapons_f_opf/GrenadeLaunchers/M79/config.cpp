#include "\A3_Opf\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
#include "cfgVehicles.hpp"
class Mode_SemiAuto;
class SlotInfo;
class CfgWeapons
{
	class Rifle;
	class Rifle_Base_F: Rifle
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class UGL_F;
	class GL_M79_F: Rifle_Base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		baseWeapon = GL_M79_F;
		scope = public;
		displayName = $STR_A3_O_CfgWeapons_GL_M79_F0;
		model = "\A3_Opf\Weapons_F_Opf\GrenadeLaunchers\M79\M79_F.p3d";
		picture = "\A3_Opf\Weapons_F_Opf\GrenadeLaunchers\M79\Data\UI\icon_GL_M79_F_X_CA.paa";
		UiPicture = "\A3\Weapons_F\Data\UI\icon_gl_CA.paa";
		magazines[] =
		{
			1Rnd_HE_Grenade_shell,
			1Rnd_UGL_FlareWhite_F,
			1Rnd_UGL_FlareGreen_F,
			1Rnd_UGL_FlareRed_F,
			1Rnd_UGL_FlareYellow_F,
			1Rnd_UGL_FlareCIR_F,
			1Rnd_Smoke_Grenade_shell,
			1Rnd_SmokeRed_Grenade_shell,
			1Rnd_SmokeGreen_Grenade_shell,
			1Rnd_SmokeYellow_Grenade_shell,
			1Rnd_SmokePurple_Grenade_shell,
			1Rnd_SmokeBlue_Grenade_shell,
			1Rnd_SmokeOrange_Grenade_shell,
            1Rnd_Pellets_Grenade_shell
		};
		magazineWell[] = {UGL_40x36};
		cursor = mgl;
		handAnim[] =
		{
			OFP2_ManSkeleton,
			"\A3_Opf\Weapons_F_Opf\GrenadeLaunchers\M79\Data\Anim\M79.rtm"
		};
		//reloadAction = GestureReloadM79;
		recoil = recoil_default;
		htMin = 1;
		htMax = 600;
		afMax = 0;
		mfMax = 0;
		mFact = 1;
		tBody = 100;
		maxZeroing = 400;
		modes[] = {Single};
		class Single: Mode_SemiAuto
		{
			sounds[] = {StandardSound};
			reloadTime = 0.25;
			dispersion = 0.00725;
			minRange = 30;
			minRangeProbab = 0.1;
			midRange = 200;
			midRangeProbab = 0.7;
			maxRange = 400;
			maxRangeProbab = 0.05;
		};
		hiddenSelections[] = {camo};
		hiddenSelectionsTextures[] = {"\A3_Opf\Weapons_F_Opf\GrenadeLaunchers\M79\Data\M79_CO.paa"};
		class Library
		{
			libTextDesc = $STR_A3_O_CfgWeapons_GL_M79_F_Library0;
		};
		useModelOptics = false;
		useExternalOptic = false;
		cameraDir = OP_look;
		discreteDistance[] =
		{
			100,
			200,
			300,
			375
		};
		discreteDistanceCameraPoint[] =
		{
			OP_eye_100,
			OP_eye_200,
			OP_eye_300,
			OP_eye_375
		};
		discreteDistanceInitIndex = 1;
		initSpeed = 75;
		descriptionShort = $STR_A3_O_CfgWeapons_GL_M79_F1;
		inertia = 0.9;
		aimTransitionSpeed = 0.8;
		dexterity = 1.2;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot{};
			class CowsSlot{};
	    	class PointerSlot{};
			mass = 70;
		};
		class GunParticles
		{
			class effect1
			{
				positionName = "usti hlavne";
				directionName = "konec hlavne";
				effectName = GrenadeLauncherCloud;
			};
		};
	};
};