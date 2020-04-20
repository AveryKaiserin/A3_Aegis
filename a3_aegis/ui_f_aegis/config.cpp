#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
#include "cfgInGameUI.hpp"
#include "cfgVehicleIcons.hpp"
#include "cfgWeaponCursors.hpp"
#include "cfgUIColors.hpp"
#include "cfgUnitInsignia.hpp"
#include "cfgMarkers.hpp"
#include "cfgPostProcessTemplates.hpp"
class PreloadTextures
{
	class CfgWeaponCursors
	{
		class mgl
		{
			texture = *;
		};
	};
	class CfgIngameUI
	{
		class CfgWeaponModeTextures
		{
			left = *;
			right = *;
		};
    };
};