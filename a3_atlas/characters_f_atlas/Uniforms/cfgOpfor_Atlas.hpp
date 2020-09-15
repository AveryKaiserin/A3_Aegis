class U_O_CombatUniform_semiarid: Uniform_Base
{
	author = $STR_A3_A_AveryTheKitty;
	scope = public;
	displayName = $STR_A3_A_CfgWeapons_U_O_CombatUniform_semiarid0;
	//picture = "\A3_Atlas\Characters_F_Atlas\Uniforms\Data\UI\icon_U_O_CombatUniform_semiarid_CA.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {camo};
	hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\Data\suitpack_soldier_OPFOR_CO.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = O_C_Fatigues_01_semiarid_F;
		containerClass = Supply40;
		mass = 80;
	};
};
class U_O_officer_noInsignia_semiarid_F: Uniform_Base
{
	author = $STR_A3_A_AveryTheKitty;
	scope = public;
	displayName = $STR_A3_A_CfgWeapons_U_O_officer_noInsignia_semiarid0;
	//picture = "\A3_Atlas\Characters_F_Atlas\Uniforms\Data\UI\icon_U_O_officer_noInsignia_semiarid_CA.paa";
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