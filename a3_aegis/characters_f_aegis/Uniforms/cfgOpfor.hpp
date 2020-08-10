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
		uniformClass = O_Fatigues_01_Blk_F;
	};
};
class U_O_SpecopsUniform_ocamo: Uniform_Base
{
  	scope = protected;
};