// Arma 3
class U_B_CombatUniform_mcam_tshirt: Uniform_Base
{
    displayName = $STR_A3_A_CfgWeapons_U_B_CombatUniform_mcam_tshirt0;
};
class U_B_CombatUniform_mcam_vest: Uniform_Base
{
    displayName = $STR_A3_A_CfgWeapons_U_B_CombatUniform_mcam_vest0;
};
class U_B_GhillieSuit: Uniform_Base
{
	picture = "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\UI\icon_U_B_GhillieSuit_CA.paa";
};
class U_Rangemaster: Uniform_Base
{
	picture = "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\UI\icon_U_Rangemaster_CA.paa";
};
class U_B_CombatUniform_mcam_worn: Uniform_Base
{
    scope = protected;
};
// Arma 3 Aegis
class U_Tank_sand_F: Uniform_Base
{
	author = $STR_A3_A_AveryTheKitty;
	scope = public;
	displayName = $STR_A3_A_CfgWeapons_U_Tank_sand_F0;
	//picture = "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\UI\icon_U_Tank_sand_F_CA.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] =
    {
        camo,
        insignia
    };
	hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\U_Tank_sand_CO.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = B_TankerCoveralls_01_F;
		containerClass = Supply30;
		mass = 30;
	};
};