#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
class CfgMovesBasic
{
	class Default;
	class ManActions
	{
		GestureReloadWF50 = "";
	};
	class Actions
	{
		class NoActions: ManActions
		{
			GestureReloadWF50[] =
			{
				GestureReloadWF50,
				Gesture
			};
		};
		class RifleBaseStandActions;
		class RifleProneActions: RifleBaseStandActions
		{
			GestureReloadWF50[] =
			{
				GestureReloadWF50Prone,
				Gesture
			};
		};
		class RifleAdjustProneBaseActions;
		class RifleAdjustFProneActions: RifleAdjustProneBaseActions
		{
			GestureReloadWF50[] =
			{
				GestureReloadWF50Context,
				Gesture
			};
		};
		class RifleAdjustLProneActions: RifleAdjustProneBaseActions
		{
			GestureReloadWF50[] =
			{
				GestureReloadWF50Context,
				Gesture
			};
		};
		class RifleAdjustRProneActions: RifleAdjustProneBaseActions
		{
			GestureReloadWF50[] =
			{
				GestureReloadWF50Context,
				Gesture
			};
		};
		class PistolStandActions;
		class PistolProneActions: PistolStandActions
		{
			GestureReloadWF50[] =
			{
				GestureReloadWF50Prone,
				Gesture
			};
		};
		class DeployedProneActions: RifleProneActions
		{
			GestureReloadWF50[] =
			{
				GestureReloadWF50Prone,
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
		class GestureReloadWF50: GestureReloadBase
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
		class GestureReloadWF50Prone: GestureReloadWF50
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
		class GestureReloadWF50Context: GestureReloadWF50
		{
			mask = handsWeapon_context;
		};
		class GestureReloadWF50ContextAnimDrive: GestureReloadWF50
		{
			mask = handsWeapon_contextAnimDrive;
		};
		class GestureFireWF50: GestureReloadBase
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
		class GestureFireWF50Context: GestureFireWF50
		{
			mask = handsWeapon_context;
		};
		class GestureFireWF50ContextAnimDrive: GestureFireWF50
		{
			mask = handsWeapon_contextAnimDrive;
		};
		class GestureFireWF50Prone: GestureFireWF50
		{
			file = "\A3_Aegis\Anims_F_Aegis\Data\Anim\Sdr\Gst\GestureFireWF50Prone.rtm";
		};
	};
};