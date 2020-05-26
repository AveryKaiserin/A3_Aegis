#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
class CfgVehicles
{
	class Wreck_base_F;
	class Land_Wreck_Plane_Transport_01_crashed_F: Wreck_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		mapSize = 30.04;
		class SimpleObject
		{
			eden = false;
			animate[] = {};
			hide[] = {};
			verticalOffset = 0.923;
			verticalOffsetWorld = 0;
			init = "''";
		};
		editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Land_Wreck_Plane_Transport_01_crashed_F.jpg";
		scope = public;
		scopeCurator = public;
		displayName = $STR_A3_A_CfgVehicles_Land_Wreck_Plane_Transport_01_crashed_F0;
		model = "\A3_Aegis\Structures_F_Aegis\Wrecks\Wreck_Plane_Transport_01_crashed_F.p3d";
		icon = iconObject_1x2;
		editorSubcategory = EdSubcat_Planes;
	};
};
