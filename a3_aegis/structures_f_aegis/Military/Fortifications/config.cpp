#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
class CfgVehicles
{
	// Arma 3
	class BagBunker_base_F;
	class Land_BagBunker_Large_F: BagBunker_base_F
	{
		editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Land_BagBunker_Large_F.jpg";
		model = "\A3_Aegis\Structures_F_Aegis\Military\Fortifications\BagBunker_Large_F.p3d";
	};
	class Land_BagBunker_Small_F: BagBunker_base_F
	{
		editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Land_BagBunker_Small_F.jpg";
		model = "\A3_Aegis\Structures_F_Aegis\Military\Fortifications\BagBunker_Small_F.p3d";
	};
	class Land_BagBunker_Tower_F: BagBunker_base_F
	{
		editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Land_BagBunker_Tower_F.jpg";
		model = "\A3_Aegis\Structures_F_Aegis\Military\Fortifications\BagBunker_Tower_F.p3d";
		hiddenSelections[] =
		{
			camo1,
			camo2,
			camo3
		};
		hiddenSelectionsTextures[] =
		{
			"\A3_Aegis\Structures_F_Aegis\Military\Fortifications\Data\CamoNet_NATO_CO.paa",
			"\A3_Aegis\Structures_F_Aegis\Military\Fortifications\Data\CamoNet_NATO_torn_CO.paa",
			"\A3_Aegis\Structures_F_Aegis\Military\Fortifications\Data\fort_watchtower_MLOD_CO.paa"
		};
	};
	// Arma 3 Apex
	class Land_HBarrier_01_tower_green_F: Land_BagBunker_Tower_F
	{
		model = "\A3_Aegis\Structures_F_Aegis\Military\Fortifications\HBarrier_01_tower_green_F.p3d";
		hiddenSelections[] =
		{
			camo1,
			camo2,
			camo3
		};
		hiddenSelectionsTextures[] =
		{
			"\A3_Aegis\Structures_F_Aegis\Military\Fortifications\Data\CamoNet_NATO_CO.paa",
			"\A3_Aegis\Structures_F_Aegis\Military\Fortifications\Data\CamoNet_NATO_torn_CO.paa",
			"\A3_Aegis\Structures_F_Aegis\Military\Fortifications\Data\fort_watchtower_green_MLOD_CO.paa"
		};
	};
	// Arma 3 Aegis
	class Land_BagBunker_Tower_OPFOR_F: Land_BagBunker_Tower_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class SimpleObject
		{
			eden = false;
			animate[] = {};
			hide[] = {};
			verticalOffset = 2.21;
			verticalOffsetWorld = 0;
			init = "''";
		};
		editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Land_BagBunker_Tower_OPFOR_F.jpg";
		scope = public;
		scopeCurator = public;
		displayName = $STR_A3_A_CfgVehicles_Land_BagBunker_Tower_OPFOR_F0;
		hiddenSelectionsTextures[] =
		{
			"\A3_Aegis\Structures_F_Aegis\Military\Fortifications\Data\CamoNet_CSAT_CO.paa",
			"\A3_Aegis\Structures_F_Aegis\Military\Fortifications\Data\CamoNet_CSAT_torn_CO.paa",
			"\A3_Aegis\Structures_F_Aegis\Military\Fortifications\Data\fort_watchtower_MLOD_CSAT_CO.paa"
		};
	};
	class Land_BagBunker_Tower_INDP_F: Land_BagBunker_Tower_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class SimpleObject
		{
			eden = false;
			animate[] = {};
			hide[] = {};
			verticalOffset = 2.21;
			verticalOffsetWorld = 0;
			init = "''";
		};
		editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Land_BagBunker_Tower_INDP_F.jpg";
		scope = public;
		scopeCurator = public;
		displayName = $STR_A3_A_CfgVehicles_Land_BagBunker_Tower_INDP_F0;
		hiddenSelectionsTextures[] =
		{
			"\A3_Aegis\Structures_F_Aegis\Military\Fortifications\Data\CamoNet_AAF_CO.paa",
			"\A3_Aegis\Structures_F_Aegis\Military\Fortifications\Data\CamoNet_AAF_torn_CO.paa",
			"\A3_Aegis\Structures_F_Aegis\Military\Fortifications\Data\fort_watchtower_MLOD_AAF_CO.paa"
		};
	};
	class Land_BagBunker_Tower_sand_F: Land_BagBunker_Tower_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class SimpleObject
		{
			eden = false;
			animate[] = {};
			hide[] = {};
			verticalOffset = 2.21;
			verticalOffsetWorld = 0;
			init = "''";
		};
		editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Land_BagBunker_Tower_sand_F.jpg";
		scope = public;
		scopeCurator = public;
		displayName = $STR_A3_A_CfgVehicles_Land_BagBunker_Tower_sand_F0;
		hiddenSelectionsTextures[] =
		{
			"\A3_Aegis\Structures_F_Aegis\Military\Fortifications\Data\CamoNet_NATO_desert_CO.paa",
			"\A3_Aegis\Structures_F_Aegis\Military\Fortifications\Data\CamoNet_NATO_torn_desert_CO.paa",
			"\A3_Aegis\Structures_F_Aegis\Military\Fortifications\Data\fort_watchtower_MLOD_desert_CO.paa"
		};
	};
	class Land_HBarrier_01_tower_ghex_F: Land_HBarrier_01_tower_green_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class SimpleObject
		{
			eden = false;
			animate[] = {};
			hide[] = {};
			verticalOffset = 2.21;
			verticalOffsetWorld = 0;
			init = "''";
		};
		editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Land_HBarrier_01_tower_ghex_F.jpg";
		scope = public;
		scopeCurator = public;
		displayName = $STR_A3_A_CfgVehicles_Land_HBarrier_01_tower_ghex_F0;
		hiddenSelectionsTextures[] =
		{
			"\A3_Aegis\Structures_F_Aegis\Military\Fortifications\Data\CamoNet_ghex_CO.paa",
			"\A3_Aegis\Structures_F_Aegis\Military\Fortifications\Data\CamoNet_ghex_torn_CO.paa",
			"\A3_Aegis\Structures_F_Aegis\Military\Fortifications\Data\fort_watchtower_green_MLOD_ghex_CO.paa"
		};
	};
	class Land_BagBunker_Tower_wdl_F: Land_BagBunker_Tower_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class SimpleObject
		{
			eden = false;
			animate[] = {};
			hide[] = {};
			verticalOffset = 2.21;
			verticalOffsetWorld = 0;
			init = "''";
		};
		editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Land_BagBunker_Tower_wdl_F.jpg";
		scope = public;
		scopeCurator = public;
		displayName = $STR_A3_A_CfgVehicles_Land_BagBunker_Tower_wdl_F0;
		editorCategory = EdCat_Structures_Enoch;
		hiddenSelectionsTextures[] =
		{
			"\A3_Aegis\Structures_F_Aegis\Military\Fortifications\Data\CamoNet_EAF_CO.paa",
			"\A3_Aegis\Structures_F_Aegis\Military\Fortifications\Data\CamoNet_EAF_torn_CO.paa",
			"\A3_Aegis\Structures_F_Aegis\Military\Fortifications\Data\fort_watchtower_MLOD_EAF_CO.paa"
		};
	};
};