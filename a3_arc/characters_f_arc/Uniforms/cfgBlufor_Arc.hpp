class U_B_CombatUniform_mcam_arc_f: Uniform_Base
{
	author = $STR_A3_A_AveryTheKitty;
	scope = public;
	displayName = $STR_A3_A_CfgWeapons_U_B_CombatUniform_arc_f0;
	picture = "\A3_Arc\Characters_F_Arc\Uniforms\Data\UI\icon_U_B_CombatUniform_mcam_arc_f_CA.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {camo};
	hiddenSelectionsTextures[] = {"\A3_Arc\Characters_F_Arc\Uniforms\Data\clothing_mcam_arc_CO.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = B_CombatUniform_01_arc_f;
		containerClass = Supply40;
		mass = 40;
	};
};
class U_B_GhillieSuit_arc_f: Uniform_Base
{
	author = $STR_A3_A_AveryTheKitty;
	scope = public;
	displayName = $STR_A3_A_CfgWeapons_U_B_GhillieSuit_arc_f0;
	picture = "\A3_Arc\Characters_F_Arc\Uniforms\Data\UI\icon_U_B_GhillieSuit_arc_f_CA.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {camo};
	hiddenSelectionsTextures[] = {"\A3_Arc\Characters_F_Arc\Uniforms\Data\clothing_mcam_arc_CO.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = B_GhillieSuit_01_arc_f;
		containerClass = Supply60;
		mass = 60;
	};
};
class U_B_FullGhillie_arc_f: Uniform_Base
{
	author = $STR_A3_A_AveryTheKitty;
	scope = public;
	displayName = $STR_A3_A_CfgWeapons_U_B_FullGhillie_arc_f0;
	picture = "\A3_Arc\Characters_F_Arc\Uniforms\Data\UI\icon_U_B_FullGhillie_arc_f_CA.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {camo};
	hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\Data\suitpack_soldier_BLUFOR_CO.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = B_FullGhillie_01_arc_f;
		containerClass = Supply60;
		mass = 80;
	};
};