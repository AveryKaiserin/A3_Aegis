// Arma 3 Atlas
class U_O_CombatUniform_owcamo: Uniform_Base
{
	author = $STR_A3_A_AveryTheKitty;
	scope = public;
	displayName = "Fatigues (Woodland Hex) [CSAT]";
	//picture = "\A3_Atlas\Characters_F_Atlas\Uniforms\Data\UI\icon_U_O_CombatUniform_owcamo_CA.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {camo};
	hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\Data\suitpack_soldier_OPFOR_CO.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = O_Fatigues_01_wdl_F;
		containerClass = Supply40;
		mass = 80;
	};
};
class U_O_officer_noInsignia_whex_F: Uniform_Base
{
	author = $STR_A3_A_AveryTheKitty;
	scope = public;
	displayName = "Light Fatigues (Woodland Hex)";
	//picture = "\A3_Atlas\Characters_F_Atlas\Uniforms\Data\UI\icon_U_O_officer_noInsignia_whex_F_CA.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {camo};
	hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\Data\suitpack_soldier_OPFOR_CO.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = O_LightFatigues_01_wdl_F;
		containerClass = Supply40;
		mass = 60;
	};
};
class U_O_W_PilotCoveralls: Uniform_Base
{
	author = $STR_A3_A_AveryTheKitty;
	scope = public;
	displayName = $STR_A3_A_CfgWeapons_U_O_W_PilotCoveralls0;
	//picture = "\A3_Atlas\Characters_F_Atlas\Uniforms\Data\UI\icon_U_O_W_PilotCoveralls_CA.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
	hiddenSelections[] = {camo};
	hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\pilot_suit_wdl_CO.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = O_W_Pilot_F;
		containerClass = Supply60;
		mass = 100;
	};
};