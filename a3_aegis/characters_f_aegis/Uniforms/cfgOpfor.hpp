// Arma 3
class U_O_CombatUniform_ocamo: Uniform_Base
{
	picture = "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\UI\icon_U_O_CombatUniform_ocamo_CA.paa";
};
class U_O_GhillieSuit: Uniform_Base
{
	picture = "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\UI\icon_U_O_GhillieSuit_CA.paa";
};
class U_O_OfficerUniform_ocamo: Uniform_Base
{
	displayName = $STR_A3_A_CfgWeapons_U_O_OfficerUniform_ocamo0;
	picture = "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\UI\icon_U_O_OfficerUniform_ocamo_CA.paa";
};
class U_O_SpecopsUniform_blk: Uniform_Base
{
	scope = public;
	displayName = $STR_A3_A_CfgWeapons_U_O_SpecopsUniform_blk0;
	picture = "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\UI\icon_U_O_SpecopsUniform_blk_CA.paa";
	hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\clothing_blk_CO.paa"};
	class ItemInfo: UniformItem
	{
		uniformClass = O_ReconFatigues_01_blk_F;
	};
};
class U_O_SpecopsUniform_ocamo: Uniform_Base
{
  	scope = protected;
};
class U_OI_Scientist: Uniform_Base
{
	scope = public;
	displayName = $STR_A3_A_CfgWeapons_U_OI_Scientist0;
	picture = "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\UI\icon_U_OI_Scientist_CA.paa";
	class ItemInfo: UniformItem
	{
		uniformClass = O_Scientist_F;
		containerClass = Supply30;
		mass = 30;
	};
};