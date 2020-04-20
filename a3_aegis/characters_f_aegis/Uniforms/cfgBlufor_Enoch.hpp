// Arma 3 Enoch
class U_B_CombatUniform_vest_mcam_wdl_f: Uniform_Base
{
    displayName = $STR_A3_A_CfgWeapons_U_B_CombatUniform_vest_mcam_wdl_f0;
};
// Arma 3 Aegis
class U_B_GhillieSuit_wdl_f: Uniform_Base
{
	author = $STR_A3_A_AveryTheKitty;
	scope = public;
	displayName = $STR_A3_A_CfgWeapons_U_B_GhillieSuit_wdl_f0;
	picture = "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\UI\icon_U_B_GhillieSuit_wdl_f_CA.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {camo};
	hiddenSelectionsTextures[] = {"\A3\Characters_F_Enoch\Uniforms\Suitpacks\Data\suitpack_soldier_B_W_CO.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = B_GhillieSuit_01_wdl_F;
		containerClass = Supply60;
		mass = 60;
	};
};
class U_B_W_FullGhillie_wdl_F: Uniform_Base
{
	author = $STR_A3_A_AveryTheKitty;
	scope = public;
	displayName = $STR_A3_A_CfgWeapons_U_B_W_FullGhillie_wdl_F0;
	picture = "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\UI\icon_U_B_W_FullGhillie_wdl_F_CA.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {camo};
	hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\ghillie_coverall_NATO_CO.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = B_W_ghillie_wdl_F;
        containerClass = Supply60;
        mass = 80;
	};
};