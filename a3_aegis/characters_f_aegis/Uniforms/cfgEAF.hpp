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
	hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\pilot_suit_eaf_CO.paa"};
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
/*
class U_I_E_Uniform_01_arid_F: Uniform_Base
{
	author = $STR_A3_A_AveryTheKitty;
	scope = public;
	displayName = "Combat Fatigues (Arid) [LDF]";
	picture = "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\UI\icon_U_I_E_Uniform_01_arid_F_CA.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
	hiddenSelections[] = {camo};
	hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\I_E_Soldier_01_arid_CO.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = I_E_Uniform_01_arid_F;
		containerClass = Supply40;
		mass = 40;
	};
};
class U_I_E_Uniform_01_tanktop_arid_F: Uniform_Base
{
	author = $STR_A3_A_AveryTheKitty;
	scope = public;
	displayName = "Combat Fatigues (Arid, Tank Top) [LDF]";
	picture = "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\UI\icon_U_I_E_Uniform_01_tanktop_arid_F_CA.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
	hiddenSelections[] = {camo};
	hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\I_E_Soldier_01_arid_TankTop_CO.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = I_E_Uniform_01_tanktop_arid_F;
		containerClass = Supply40;
		mass = 40;
	};
};
class U_I_E_Uniform_01_shortsleeve_arid_F: Uniform_Base
{
	author = $STR_A3_A_AveryTheKitty;
	scope = public;
	displayName = "Combat Fatigues (Arid, Rolled-up) [LDF]";
	picture = "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\UI\icon_U_I_E_Uniform_01_shortsleeve_arid_F_CA.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
	hiddenSelections[] = {camo};
	hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\I_E_Soldier_01_arid_CO.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = I_E_Uniform_01_shortsleeve_arid_F;
		containerClass = Supply40;
		mass = 40;
	};
};
class U_I_E_Uniform_01_officer_arid_F: Uniform_Base
{
	author = $STR_A3_A_AveryTheKitty;
	scope = public;
	displayName = "Officer Fatigues (Arid) [LDF]";
	picture = "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\UI\icon_U_I_E_Uniform_01_officer_arid_F_CA.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
	hiddenSelections[] = {camo};
	hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\I_E_Officer_01_arid_CO.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = I_E_Uniform_01_officer_arid_F;
		containerClass = Supply40;
		mass = 40;
	};
};
class U_I_E_Uniform_01_coveralls_arid_F: Uniform_Base
{
	author = $STR_A3_A_AveryTheKitty;
	scope = public;
	displayName = "Heli Pilot Coveralls (Arid) [LDF]";
	picture = "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\UI\icon_U_I_E_Uniform_01_coveralls_arid_F_CA.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
	hiddenSelections[] = {camo};
	hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\I_E_Coveralls_01_arid_CO.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = I_E_Uniform_01_coveralls_arid_F;
		containerClass = Supply40;
		mass = 60;
	};
};
class U_I_E_FullGhillie_ard_F: Uniform_Base
{
	author = $STR_A3_A_AveryTheKitty;
	scope = public;
	displayName = $STR_A3_A_CfgWeapons_U_I_E_FullGhillie_ard_F0;
	picture = "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\UI\icon_U_I_E_FullGhillie_ard_F_CA.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {camo};
	hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\ghillie_coverall_EAF_Arid_CO.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = I_E_ghillie_ard_F;
        containerClass = Supply60;
        mass = 80;
	};
};
class U_I_E_FullGhillie_sard_F: Uniform_Base
{
	author = $STR_A3_A_AveryTheKitty;
	scope = public;
	displayName = $STR_A3_A_CfgWeapons_U_I_E_FullGhillie_sard_F0;
	picture = "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\UI\icon_U_I_E_FullGhillie_sard_F_CA.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {camo};
	hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\ghillie_coverall_EAF_Arid_CO.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = I_E_ghillie_sard_F;
        containerClass = Supply60;
        mass = 80;
	};
};
class U_I_E_FullGhillie_lsh_F: Uniform_Base
{
	author = $STR_A3_A_AveryTheKitty;
	scope = public;
	displayName = $STR_A3_A_CfgWeapons_U_I_E_FullGhillie_lsh_F0;
	picture = "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\UI\icon_U_I_E_FullGhillie_lsh_F_CA.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {camo};
	hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\ghillie_coverall_EAF_Arid_CO.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = I_E_ghillie_lsh_F;
        containerClass = Supply60;
        mass = 80;
	};
};
*/