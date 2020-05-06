#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
class CfgMovesBasic
{
	class Default;
	class ManActions
	{
		GestureReloadG36 = "";
	};
	class Actions
	{
		class NoActions: ManActions
		{
			GestureReloadG36[] =
			{
				GestureReloadG36,
				Gesture
			};
		};
		class RifleBaseStandActions;
		class RifleProneActions: RifleBaseStandActions
		{
			GestureReloadG36[] =
			{
				GestureReloadG36Prone,
				Gesture
			};
		};
		class RifleAdjustProneBaseActions;
		class RifleAdjustFProneActions: RifleAdjustProneBaseActions
		{
			GestureReloadG36[] =
			{
				GestureReloadG36Context,
				Gesture
			};
		};
		class RifleAdjustLProneActions: RifleAdjustProneBaseActions
		{
			GestureReloadG36[] =
			{
				GestureReloadG36Context,
				Gesture
			};
		};
		class RifleAdjustRProneActions: RifleAdjustProneBaseActions
		{
			GestureReloadG36[] =
			{
				GestureReloadG36Context,
				Gesture
			};
		};
		class PistolStandActions;
		class PistolProneActions: PistolStandActions
		{
			GestureReloadG36[] =
			{
				GestureReloadG36Prone,
				Gesture
			};
		};
		class DeployedProneActions: RifleProneActions
		{
			GestureReloadG36[] =
			{
				GestureReloadG36Prone,
				Gesture
			};
		};
	};
};
/*
class CfgMovesMaleSdr: CfgMovesBasic
{
	class AmovPercMstpSrasWrflDnon;
	class AmovPpneMstpSrasWrflDnon: AmovPercMstpSrasWrflDnon
	{
		InterpolateTo[] += {RifleReloadProneG36,0.02};
	};
	class RifleReloadProneBase;
	class RifleReloadProneG36: RifleReloadProneBase
	{
		file = "\A3_Atlas\Anims_F_Atlas\Data\Anim\Sdr\Gst\GestureReloadG36Prone.rtm";
		speed = 0.23;
		weaponIK = true;
		leftHandIKCurve[] =
		{
			0,true,
			0.025,false,
			0.858,false,
			0.88,true
		};
	};
};
*/
class CfgGesturesMale
{
	class Default;
	class States
	{
		class GestureReloadBase;
		class GestureReloadG36: GestureReloadBase
		{
			file = "\A3_Atlas\Anims_F_Atlas\Data\Anim\Sdr\Gst\GestureReloadG36.rtm";
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
		class GestureReloadG36Prone: GestureReloadG36
		{
			file = "\A3_Atlas\Anims_F_Atlas\Data\Anim\Sdr\Gst\GestureReloadG36Prone.rtm";
//			mask = BodyFull;
			leftHandIKCurve[] =
			{
				0,true,
				0.12,false,
				0.823,false,
				0.84,true
			};
		};
		class GestureReloadG36Context: GestureReloadG36
		{
			mask = handsWeapon_context;
		};
		class GestureReloadG36ContextAnimDrive: GestureReloadG36
		{
			mask = handsWeapon_contextAnimDrive;
		};
	};
};