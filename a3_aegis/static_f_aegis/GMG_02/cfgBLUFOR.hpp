/* BAF */
class B_A_GMG_02_F: GMG_02_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_GMG_02_F.jpg";
	scope = public;
	side = TWest;
	faction = BLU_A_F;
	crew = B_A_Soldier_F;
    ASSEMBLE_INFO(B_GMG_02_weapon_F,B_GMG_02_support_F);

    /* Animation Sources */
	class AnimationSources: AnimationSources
	{
		class Hide_Rail: Hide_Rail
		{
		    initPhase = false;
		};
	};
};
class B_A_GMG_02_high_F: GMG_02_high_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_GMG_02_high_F.jpg";
	scope = public;
	side = TWest;
	faction = BLU_A_F;
	crew = B_A_Soldier_F;
    ASSEMBLE_INFO(B_GMG_02_high_weapon_F,B_GMG_02_support_high_F);

    /* Animation Sources */
	class AnimationSources: AnimationSources
	{
		class Hide_Rail: Hide_Rail
		{
		    initPhase = false;
		};
	};
};

/* BAF (Pacific) */
class B_A_GMG_02_tna_F: B_A_GMG_02_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_GMG_02_tna_F.jpg";
	faction = BLU_A_tna_F;
	crew = B_A_Soldier_tna_F;
	class assembleInfo: assembleInfo
	{
		dissasembleTo[] =
		{
            B_GMG_02_Weapon_grn_F,
            B_GMG_02_support_grn_F
		};
	};
};
class B_A_GMG_02_high_tna_F: B_A_GMG_02_high_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_GMG_02_high_tna_F.jpg";
	faction = BLU_A_tna_F;
	crew = B_A_Soldier_tna_F;
	class assembleInfo: assembleInfo
	{
		dissasembleTo[] =
		{
            B_GMG_02_Weapon_grn_F,
            B_GMG_02_support_grn_F
		};
	};
};

/* BAF (Woodland) */
class B_A_GMG_02_wdl_F: B_A_GMG_02_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_GMG_02_wdl_F.jpg";
	faction = BLU_A_wdl_F;
	crew = B_A_Soldier_wdl_F;
	class assembleInfo: assembleInfo
	{
		dissasembleTo[] =
		{
            B_GMG_02_Weapon_grn_F,
            B_GMG_02_support_grn_F
		};
	};
};
class B_A_GMG_02_high_wdl_F: B_A_GMG_02_high_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_GMG_02_high_wdl_F.jpg";
	faction = BLU_A_wdl_F;
	crew = B_A_Soldier_wdl_F;
	class assembleInfo: assembleInfo
	{
		dissasembleTo[] =
		{
            B_GMG_02_Weapon_grn_F,
            B_GMG_02_support_grn_F
		};
	};
};