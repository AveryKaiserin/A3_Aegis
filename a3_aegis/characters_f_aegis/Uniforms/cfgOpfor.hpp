/*
- Hid "Recon Fatigues (Hex)" uniform - no different from the default uniform
*/

// Arma 3
class U_O_OfficerUniform_ocamo: Uniform_Base
{
	displayName = $STR_A3_A_CfgWeapons_U_O_OfficerUniform_ocamo0;
};
class U_O_SpecopsUniform_blk: Uniform_Base
{
	scope = public;
	displayName = $STR_A3_A_CfgWeapons_U_O_SpecopsUniform_blk0;
	picture = "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\UI\icon_U_O_SpecopsUniform_blk_CA.paa";
	class ItemInfo: UniformItem
	{
		uniformClass = O_Fatigues_01_blk_F;
	};
};
class U_O_SpecopsUniform_ocamo: Uniform_Base
{
  	scope = protected;
};
// Arma 3 Aegis
class U_O_CombatUniform_oicamo: Uniform_Base
{
	author = $STR_A3_A_AveryTheKitty;
	scope = public;
	displayName = $STR_A3_A_CfgWeapons_U_O_CombatUniform_oicamo0;
	picture = "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\UI\icon_U_O_CombatUniform_oicamo_CA.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {camo};
	hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\Data\suitpack_soldier_OPFOR_CO.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = O_Fatigues_01_oicamo_F;
		containerClass = Supply40;
		mass = 80;
	};
};
class U_O_OfficerUniform_oicamo: Uniform_Base
{
	author = $STR_A3_A_AveryTheKitty;
	scope = public;
	displayName = $STR_A3_A_CfgWeapons_U_O_OfficerUniform_oicamo0;
	picture = "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\UI\icon_U_O_OfficerUniform_oicamo_CA.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {camo};
	hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\Data\suitpack_soldier_OPFOR_CO.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = O_OfficerFatigues_01_oicamo_F;
		containerClass = Supply40;
		mass = 60;
	};
};