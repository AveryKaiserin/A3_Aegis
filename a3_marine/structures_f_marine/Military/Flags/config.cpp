#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
class CfgVehicles
{
	class FlagCarrier_Asym;
	class Marine_Flag_USMC_F: FlagCarrier_Asym
	{
		author = $STR_A3_A_AveryTheKitty;
		class SimpleObject
		{
			eden = false;
			animate[] =
			{
				{flag,0}
			};
			hide[] = {};
			verticalOffset = 3.977;
			verticalOffsetWorld = 0;
			init = "''";
		};
		editorPreview = "\A3_Marine\EditorPreviews_F_Marine\Data\CfgVehicles\Flag_USMC_F.jpg";
		scope = public;
		scopeCurator = public;
		displayName = $STR_A3_M_CfgVehicles_Marine_Flag_USMC_F0;
		hiddenSelectionsTextures[] = {"\A3\Structures_F\Mil\Flags\Data\Mast_mil_CO.paa"};
		hiddenSelectionsMaterials[] = {"\A3\Structures_F\Mil\Flags\Data\Mast_mil.rvmat"};
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture '\A3_Marine\Data_F_Marine\Flags\flag_USMC_CO.paa'";
		};
	};
	class Banner_01_base_F;
	class Marine_Banner_01_USMC_F: Banner_01_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class SimpleObject
		{
			eden = false;
			animate[] = {};
			hide[] = {};
			verticalOffset = 0.469;
			verticalOffsetWorld = 0;
			init = "''";
		};
		editorPreview = "\A3_Marine\EditorPreviews_F_Marine\Data\CfgVehicles\Banner_01_USMC_F.jpg";
		scope = public;
		scopeCurator = public;
		displayName = $STR_A3_M_CfgVehicles_Marine_Banner_01_USMC_F0;
		hiddenSelectionsTextures[] = {"\A3_Marine\Data_F_Marine\Flags\flag_USMC_CO.paa"};
	};
    // Deprecated classes
    #include "deprecated.hpp"
};