#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
class CfgMovesBasic
{
	class Default;
	class ManActions
	{
		Aegis_GestureReloadWF50 = "";
	};
	class Actions
	{
		class NoActions: ManActions
		{
			Aegis_GestureReloadWF50[] =
			{
				Aegis_GestureReloadWF50,
				Gesture
			};
		};
		class RifleBaseStandActions;
		class RifleProneActions: RifleBaseStandActions
		{
			Aegis_GestureReloadWF50[] =
			{
				Aegis_GestureReloadWF50Prone,
				Gesture
			};
		};
		class RifleAdjustProneBaseActions;
		class RifleAdjustFProneActions: RifleAdjustProneBaseActions
		{
			Aegis_GestureReloadWF50[] =
			{
				Aegis_GestureReloadWF50Context,
				Gesture
			};
		};
		class RifleAdjustLProneActions: RifleAdjustProneBaseActions
		{
			Aegis_GestureReloadWF50[] =
			{
				Aegis_GestureReloadWF50Context,
				Gesture
			};
		};
		class RifleAdjustRProneActions: RifleAdjustProneBaseActions
		{
			Aegis_GestureReloadWF50[] =
			{
				Aegis_GestureReloadWF50Context,
				Gesture
			};
		};
		class PistolStandActions;
		class PistolProneActions: PistolStandActions
		{
			Aegis_GestureReloadWF50[] =
			{
				Aegis_GestureReloadWF50Prone,
				Gesture
			};
		};
		class DeployedProneActions: RifleProneActions
		{
			Aegis_GestureReloadWF50[] =
			{
				Aegis_GestureReloadWF50Prone,
				Gesture
			};
		};
	};
};
class CfgGesturesMale
{
	class Default;
	class States
	{
		class GestureReloadBase;
		class Aegis_GestureReloadWF50: GestureReloadBase
		{
			file = "\A3_Aegis\Anims_F_Aegis\Data\Anim\Sdr\Gst\GestureReloadWF50.rtm";
			speed = 0.23;
            mask = handsWeapon;
            headBobStrength = 0.25;
            headBobMode = 2;
			weaponIK = true;
			leftHandIKCurve[] =
			{
				0,true,
				0.1,false,
				0.858,false,
				0.88,true
			};
		};
		class Aegis_GestureReloadWF50Prone: Aegis_GestureReloadWF50
		{
			file = "\A3_Aegis\Anims_F_Aegis\Data\Anim\Sdr\Gst\GestureReloadWF50Prone.rtm";
			leftHandIKCurve[] =
			{
				0,true,
				0.12,false,
				0.823,false,
				0.84,true
			};
		};
		class Aegis_GestureReloadWF50Context: Aegis_GestureReloadWF50
		{
			mask = handsWeapon_context;
		};
		class Aegis_GestureReloadWF50ContextAnimDrive: Aegis_GestureReloadWF50
		{
			mask = handsWeapon_contextAnimDrive;
		};
		class Aegis_GestureFireWF50: GestureReloadBase
		{
			file = "\A3_Aegis\Anims_F_Aegis\Data\Anim\Sdr\Gst\GestureFireWF50.rtm";
			speed = -2.33;
			rightHandIKCurve[] =
			{
				0,true,
				0.08,false,
				0.92,false,
				1,true
			};
		};
		class Aegis_GestureFireWF50Context: Aegis_GestureFireWF50
		{
			mask = handsWeapon_context;
		};
		class Aegis_GestureFireWF50ContextAnimDrive: Aegis_GestureFireWF50
		{
			mask = handsWeapon_contextAnimDrive;
		};
		class Aegis_GestureFireWF50Prone: Aegis_GestureFireWF50
		{
			file = "\A3_Aegis\Anims_F_Aegis\Data\Anim\Sdr\Gst\GestureFireWF50Prone.rtm";
		};
	};
};