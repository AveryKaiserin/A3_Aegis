class U_O_CombatUniform_tkcamo: Uniform_Base
{
	author = $STR_A3_A_AveryTheKitty;
	scope = public;
	displayName = $STR_A3_A_CfgWeapons_U_O_CombatUniform_tkcamo0;
	//picture = "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\UI\icon_U_O_CombatUniform_tkcamo_CA.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {camo};
	hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\Data\suitpack_soldier_OPFOR_CO.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = O_C_Fatigues_01_tkcamo_F;
		containerClass = Supply40;
		mass = 80;
	};
};
class U_O_C_officer_noInsignia_tkcamo_F: Uniform_Base
{
	author = $STR_A3_A_AveryTheKitty;
	scope = public;
	displayName = $STR_A3_A_CfgWeapons_U_O_officer_noInsignia_tkcamo0;
	//picture = "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\UI\icon_U_O_officer_noInsignia_tkcamo_CA.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {camo};
	hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\Data\suitpack_soldier_OPFOR_CO.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = O_C_soldier_F;
		containerClass = Supply40;
		mass = 60;
	};
};