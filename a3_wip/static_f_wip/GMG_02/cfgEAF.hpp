/* LDF */
class I_E_GMG_02_F: GMG_02_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_E_GMG_02_F.jpg";
	scope = public;
	side = TGuerrila;
	faction = IND_E_F;
	crew = I_E_Soldier_F;
    ASSEMBLE_INFO(I_E_GMG_02_weapon_F,I_E_GMG_02_support_F);

    /* Animation Sources */
	class AnimationSources: AnimationSources
	{
		class Hide_Rail: Hide_Rail
		{
		    initPhase = false;
		};
	};
};
class I_E_GMG_02_high_F: GMG_02_high_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_E_GMG_02_high_F.jpg";
	scope = public;
	side = TGuerrila;
	faction = IND_E_F;
	crew = I_E_Soldier_F;
    ASSEMBLE_INFO(I_E_GMG_02_high_weapon_F,I_E_GMG_02_support_high_F);

    /* Animation Sources */
	class AnimationSources: AnimationSources
	{
		class Hide_Rail: Hide_Rail
		{
		    initPhase = false;
		};
	};
};