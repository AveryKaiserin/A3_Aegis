class CfgVehicles
{
	class FlagCarrier;
	class FlagCarrier_Asym;
	class Flag_Remnants_F: FlagCarrier
	{
		author = $STR_A3_A_Heliotrope;
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
		editorPreview = "\A3_Theseus\EditorPreviews_F_Theseus\Data\CfgVehicles\Flag_Remnants_F.jpg";
		scope = public;
		scopeCurator = public;
		displayName = $STR_A3_T_CfgVehicles_Flag_Remnants_F0;
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture '\A3_Theseus\Data_F_Theseus\Flags\flag_Remnants_CO.paa'";
		};
	};
	class Flag_Bandits_F: FlagCarrier
	{
		author = $STR_A3_A_Heliotrope;
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
		editorPreview = "\A3_Theseus\EditorPreviews_F_Theseus\Data\CfgVehicles\Flag_Bandits_F.jpg";
		scope = public;
		scopeCurator = public;
		displayName = $STR_A3_T_CfgVehicles_Flag_Bandits_F0;
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture '\A3_Theseus\Data_F_Theseus\Flags\flag_Bandits_CO.paa'";
		};
	};
};