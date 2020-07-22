// Arma 3 Aegis
class U_O_CombatUniform_owcamo: Uniform_Base
{
	author = $STR_A3_A_AveryTheKitty;
	scope = public;
	displayName = "Fatigues (Lush) [CSAT]";
	//picture = "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\UI\icon_U_O_CombatUniform_owcamo_CA.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {camo};
	hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\Data\suitpack_soldier_OPFOR_CO.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = O_Fatigues_01_lush_F;
		containerClass = Supply40;
		mass = 80;
	};
};
class U_O_officer_noInsignia_owcamo_F: Uniform_Base
{
	author = $STR_A3_A_AveryTheKitty;
	scope = public;
	displayName = "Light Fatigues (Lush)";
	//picture = "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\UI\icon_U_O_officer_noInsignia_owcamo_F_CA.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {camo};
	hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\Data\suitpack_soldier_OPFOR_CO.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = O_LightFatigues_01_lush_F;
		containerClass = Supply40;
		mass = 60;
	};
};