class B_A_HMG_02_F: HMG_02_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_HMG_02_F.jpg";
	scope = public;
	side = TWest;
	faction = BLU_A_F;
	crew = B_A_Soldier_F;
	class assembleInfo
	{
		primary = 0;
		base = "";
		assembleTo = "";
		dissasembleTo[] =
		{
            B_HMG_02_weapon_F,
            B_HMG_02_support_F
		};
		displayName = "";
	};
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
		    magazines[] = {mag_4(100Rnd_127x99_mag_Tracer_Red)};
		};
	};
	class AnimationSources: AnimationSources
	{
		class Hide_Rail: Hide_Rail
		{
		    initPhase = false;
		};
	};
};
class B_A_HMG_02_high_F: HMG_02_high_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_HMG_02_high_F.jpg";
	scope = public;
	side = TWest;
	faction = BLU_A_F;
	crew = B_A_Soldier_F;
	class assembleInfo
	{
		primary = 0;
		base = "";
		assembleTo = "";
		dissasembleTo[] =
		{
            B_HMG_02_high_weapon_F,
            B_HMG_02_support_high_F
		};
		displayName = "";
	};
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
		    magazines[] = {mag_4(100Rnd_127x99_mag_Tracer_Red)};
		};
	};
	class AnimationSources: AnimationSources
	{
		class Hide_Rail: Hide_Rail
		{
		    initPhase = false;
		};
	};
};
class B_A_HMG_02_tna_F: B_A_HMG_02_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_HMG_02_tna_F.jpg";
	faction = BLU_A_tna_F;
	crew = B_A_Soldier_tna_F;
	class assembleInfo: assembleInfo
	{
		dissasembleTo[] =
		{
            B_HMG_02_Weapon_grn_F,
            B_HMG_02_support_grn_F
		};
	};
};
class B_A_HMG_02_high_tna_F: B_A_HMG_02_high_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_HMG_02_high_tna_F.jpg";
	faction = BLU_A_tna_F;
	crew = B_A_Soldier_tna_F;
	class assembleInfo: assembleInfo
	{
		dissasembleTo[] =
		{
            B_HMG_02_Weapon_grn_F,
            B_HMG_02_support_grn_F
		};
	};
};
class B_A_HMG_02_wdl_F: B_A_HMG_02_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_HMG_02_wdl_F.jpg";
	faction = BLU_A_wdl_F;
	crew = B_A_Soldier_wdl_F;
	class assembleInfo: assembleInfo
	{
		dissasembleTo[] =
		{
            B_HMG_02_Weapon_grn_F,
            B_HMG_02_support_grn_F
		};
	};
};
class B_A_HMG_02_high_wdl_F: B_A_HMG_02_high_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_HMG_02_high_wdl_F.jpg";
	faction = BLU_A_wdl_F;
	crew = B_A_Soldier_wdl_F;
	class assembleInfo: assembleInfo
	{
		dissasembleTo[] =
		{
            B_HMG_02_Weapon_grn_F,
            B_HMG_02_support_grn_F
		};
	};
};