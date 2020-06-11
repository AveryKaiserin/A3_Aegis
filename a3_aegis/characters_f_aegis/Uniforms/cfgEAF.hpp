// Arma 3 Enoch
class U_I_E_Uniform_01_officer_F: Uniform_Base
{
	displayName = $STR_A3_A_CfgWeapons_U_I_E_Uniform_01_officer_F0;
};
// Arma 3 Aegis
class U_I_E_Uniform_01_pilot_F: Uniform_Base
{
	author = $STR_A3_A_AveryTheKitty;
	scope = public;
	displayName = $STR_A3_A_CfgWeapons_U_I_E_Uniform_01_pilot_F0;
	picture = "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\UI\icon_U_I_E_Uniform_01_pilot_F_CA.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
	hiddenSelections[] = {camo};
	hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\I_E_Pilot_01_CO.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = I_E_Uniform_01_pilot_F;
		containerClass = Supply60;
		mass = 80;
	};
};
class U_I_E_FullGhillie_wdl_F: Uniform_Base
{
	author = $STR_A3_A_AveryTheKitty;
	scope = public;
	displayName = $STR_A3_A_CfgWeapons_U_I_E_FullGhillie_wdl_F0;
	picture = "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\UI\icon_U_I_E_FullGhillie_wdl_F_CA.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {camo};
	hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\ghillie_coverall_EAF_CO.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = I_E_ghillie_wdl_F;
        containerClass = Supply60;
        mass = 80;
	};
};