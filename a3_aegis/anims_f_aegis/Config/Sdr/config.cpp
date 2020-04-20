#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
class CfgMovesBasic
{
	class Default;
	class ManActions
	{
		
		//GestureReloadFAL = "";
		
	};
	class Actions
	{
		class NoActions: ManActions
		{
			/*
			GestureReloadFAL[] =
			{
				GestureReloadFAL,
				Gesture
			};
			*/
		};
		class RifleProneActions;
		class RifleAdjustFProneActions: RifleProneActions
		{
			/*
			GestureReloadFAL[] =
			{
				GestureReloadFAL,
				Gesture
			};
			*/
		};
		class PistolStandActions;
		class PistolProneActions: PistolStandActions
		{
			//GestureReloadFAL = RifleReloadProneFAL;
		};
	};
};
class CfgMovesMaleSdr: CfgMovesBasic
{
	class RifleReloadProneBase;
	/*
	class RifleReloadProneFAL: RifleReloadProneBase
	{
		file = "\A3\Data_F_Core\Anim\GestureReloadFALProne.rtm";
		speed = 0.37;
		leftHandIKCurve[] = {0.027,1,0.081,0,0.946,0,0.984,1};
	};
	*/
};
class CfgGesturesMale
{
	class Default;
	class States
	{
		/*
		class GestureReloadFAL: Default
		{
			file = "\A3\Data_F_Core\Anim\GestureReloadFAL.rtm";
			speed = 0.37;
			looped = false;
			mask = handsWeapon;
			canPullTrigger = false;
			leftHandIKCurve[] = {0.027,1,0.081,0,0.946,0,0.984,1};
		};
		class GestureReloadFALProne: GestureReloadFAL
		{
			file = "\A3\Data_F_Core\Anim\GestureReloadFALProne.rtm";
			mask = BodyFull;
		};
		*/
	};
};