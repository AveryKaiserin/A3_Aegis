class U_O_T_Soldier_bhex_F: Uniform_Base
{
	author = $STR_A3_A_AveryTheKitty;
	scope = public;
	displayName = $STR_A3_M_CfgWeapons_U_O_T_Soldier_bhex_F0;
	//picture = "\A3_Marine\Characters_F_Marine\Uniforms\Data\UI\icon_U_O_T_Soldier_bhex_F_CA.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {camo};
	hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\Data\suitpack_soldier_OPFOR_CO.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = O_T_Fatigues_01_bhex_F;
		containerClass = Supply40;
		mass = 80;
	};
};
class U_O_T_officer_noInsignia_bhex_F: Uniform_Base
{
	author = $STR_A3_A_AveryTheKitty;
	scope = public;
	displayName = $STR_A3_M_CfgWeapons_U_O_T_officer_noInsignia_bhex_F0;
	//picture = "\A3_Marine\Characters_F_Marine\Uniforms\Data\UI\icon_U_O_T_officer_noInsignia_bhex_F_CA.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {camo};
	hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\Data\suitpack_soldier_OPFOR_CO.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = O_T_LightFatigues_01_bhex_F;
		containerClass = Supply40;
		mass = 60;
	};
};