class U_I_P_PoliceUniform_F: Uniform_Base
{
	author = $STR_A3_A_AveryTheKitty;
	scope = public;
	displayName = $STR_A3_P_CfgWeapons_U_I_P_PoliceUniform_F0;
	picture = "\A3_Police\Characters_F_Police\Uniforms\Data\UI\icon_U_I_P_PoliceUniform_F_CA.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {camo};
	hiddenSelectionsTextures[] = {"\A3_Police\Characters_F_Police\Uniforms\Data\I_P_PoliceUniform_01_CO.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = I_P_PoliceUniform_01_F;
		containerClass = Supply40;
		mass = 40;
	};
};
class U_I_P_PoliceUniform_gloves_F: Uniform_Base
{
	author = $STR_A3_A_AveryTheKitty;
	scope = public;
	displayName = $STR_A3_P_CfgWeapons_U_I_P_PoliceUniform_gloves_F0;
	picture = "\A3_Police\Characters_F_Police\Uniforms\Data\UI\icon_U_I_P_PoliceUniform_gloves_F_CA.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {camo};
	hiddenSelectionsTextures[] = {"\A3_Police\Characters_F_Police\Uniforms\Data\I_P_PoliceUniform_01_CO.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = I_P_PoliceUniform_01_gloves_F;
		containerClass = Supply40;
		mass = 40;
	};
};