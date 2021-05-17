class Atlas_U_B_M_CombatUniform_des: Uniform_Base
{
	author = $STR_A3_A_AveryTheKitty;
	scope = public;
	displayName = $STR_A3_A_CfgWeapons_U_B_M_CombatUniform_Marar0;
	//picture = "\A3_Atlas\Characters_F_Atlas\Uniforms\Data\UI\icon_U_B_A_CombatUniform_aucamo_CA.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {camo};
	hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\B_M_Soldier_01_CO.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = Atlas_B_M_CombatFatigues_01_des;
		containerClass = Supply40;
		mass = 40;
	};
};
class Atlas_U_B_M_CombatUniform_shortsleeve_des: Uniform_Base
{
	author = $STR_A3_A_AveryTheKitty;
	scope = public;
	displayName = $STR_A3_A_CfgWeapons_U_B_M_CombatUniform_shortsleeve_Marar0;
	//picture = "\A3_Atlas\Characters_F_Atlas\Uniforms\Data\UI\icon_U_B_A_CombatUniform_shortsleeve_aucamo_CA.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {camo};
	hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\B_M_Soldier_01_CO.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = Atlas_B_M_CombatFatigues_01_RolledUp_des;
		containerClass = Supply40;
		mass = 40;
	};
};
class Atlas_U_B_M_CombatUniform_tee_des: Uniform_Base
{
	author = $STR_A3_A_AveryTheKitty;
	scope = public;
	displayName = $STR_A3_A_CfgWeapons_U_B_M_CombatUniform_tee_Marar0;
	//picture = "\A3_Atlas\Characters_F_Atlas\Uniforms\Data\UI\icon_U_B_A_CombatUniform_aucamo_CA.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {camo};
	hiddenSelectionsTextures[] =
	{
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\B_M_Soldier_01_CO.paa",
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\basicbody_marar.paa"
	};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = Atlas_B_M_CombatFatigues_01_Tshirt_des;
		containerClass = Supply40;
		mass = 40;
	};
};