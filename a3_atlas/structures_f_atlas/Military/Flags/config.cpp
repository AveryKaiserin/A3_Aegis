#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
class CfgVehicles
{
	class FlagCarrier;
	class FlagCarrier_Asym;
	class Flag_Germany_F: FlagCarrier
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
		//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Flag_Germany_F.jpg";
		scope = public;
		scopeCurator = public;
		displayName = $STR_A3_A_CfgVehicles_Flag_Germany_F0;
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture '\A3_Atlas\Data_F_Atlas\Flags\flag_Germany_CO.paa'";
		};
	};
	class Flag_Bocano_F: FlagCarrier
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
		//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Flag_Bocano_F.jpg";
		scope = public;
		scopeCurator = public;
		displayName = $STR_A3_A_CfgVehicles_Flag_Bocano_F0;
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture '\A3_Atlas\Data_F_Atlas\Flags\flag_Bocano_CO.paa'";
		};
	};
	class Flag_IDF_F: FlagCarrier_Asym
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
		//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Flag_IDF_F.jpg";
		scope = public;
		scopeCurator = public;
		displayName = $STR_A3_A_CfgVehicles_Flag_IDF_F0;
		hiddenSelectionsTextures[] = {"\A3\Structures_F\Mil\Flags\Data\Mast_mil_CO.paa"};
		hiddenSelectionsMaterials[] = {"\A3\Structures_F\Mil\Flags\Data\Mast_mil.rvmat"};
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture '\A3_Atlas\Data_F_Atlas\Flags\flag_IDF_CO.paa'";
		};
	};
	class Flag_Israel_F: FlagCarrier
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
		//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Flag_Israel_F.jpg";
		scope = public;
		scopeCurator = public;
		displayName = $STR_A3_A_CfgVehicles_Flag_Israel_F0;
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture '\A3_Atlas\Data_F_Atlas\Flags\flag_Israel_CO.paa'";
		};
	};
	class Banner_01_base_F;
	class Banner_01_IDF_F: Banner_01_base_F
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
		//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Banner_01_IDF_F.jpg";
		scope = public;
		scopeCurator = public;
		displayName = "Banner (IDF)";
		hiddenSelectionsTextures[] = {"\A3_Atlas\Data_F_Atlas\Flags\flag_IDF_CO.paa"};
	};
};