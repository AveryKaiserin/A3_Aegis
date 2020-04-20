class U_I_I_Soldier_F: Uniform_Base
{
	author = $STR_A3_A_AveryTheKitty;
	scope = public;
	displayName = $STR_A3_A_CfgWeapons_U_I_I_Soldier_F0;
	picture = "\A3_Atlas\Characters_F_Atlas\Uniforms\Data\UI\icon_U_I_I_Soldier_F_CA.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {camo};
	hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\I_I_Soldier_01_CO.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = I_I_CombatFatigues_01_F;
		containerClass = Supply40;
		mass = 40;
	};
};
class U_I_I_Soldier_2_F: Uniform_Base
{
	author = $STR_A3_A_AveryTheKitty;
	scope = public;
	displayName = $STR_A3_A_CfgWeapons_U_I_I_Soldier_2_F0;
	picture = "\A3_Atlas\Characters_F_Atlas\Uniforms\Data\UI\icon_U_I_I_Soldier_2_F_CA.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {camo};
	hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\I_I_Soldier_01_CO.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = I_I_CombatFatigues_01_RolledUp_F;
		containerClass = Supply40;
		mass = 40;
	};
};
class U_I_I_Officer_F: Uniform_Base
{
	author = $STR_A3_A_AveryTheKitty;
	scope = public;
	displayName = $STR_A3_A_CfgWeapons_U_I_I_Officer_F0;
	picture = "\A3_Atlas\Characters_F_Atlas\Uniforms\Data\UI\icon_U_I_I_Officer_F_CA.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {camo};
	hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\I_I_Officer_01_CO.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = I_I_OfficerFatigues_01_F;
		containerClass = Supply40;
		mass = 40;
	};
};
class U_Tank_olive_F: Uniform_Base
{
	author = $STR_A3_A_AveryTheKitty;
	scope = public;
	displayName = $STR_A3_A_CfgWeapons_U_Tank_olive_F0;
	picture = "\A3_Atlas\Characters_F_Atlas\Uniforms\Data\UI\icon_U_Tank_olive_F_CA.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] =
    {
        camo,
        insignia
    };
	hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\U_Tank_olive_CO.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = I_I_Uniform_01_tank_F;
		containerClass = Supply30;
		mass = 30;
	};
};