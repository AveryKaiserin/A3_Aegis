// Arma 3 Tacops
class U_O_officer_noInsignia_hex_F: Uniform_Base
{
	picture = "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\UI\icon_U_O_officer_noInsignia_hex_F_CA.paa";
};
// Arma 3 Aegis
class U_O_officer_noInsignia_urb_F: Uniform_Base
{
	author = $STR_A3_A_AveryTheKitty;
	scope = public;
	displayName = $STR_A3_A_CfgWeapons_U_O_officer_noInsignia_urb_F0;
	picture = "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\UI\icon_U_O_officer_noInsignia_urb_F_CA.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {camo};
	hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\Data\suitpack_soldier_OPFOR_CO.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = O_LightFatigues_01_urb_F;
		containerClass = Supply40;
		mass = 60;
	};
};
class U_O_T_officer_noInsignia_ghex_F: Uniform_Base
{
	author = $STR_A3_A_AveryTheKitty;
	scope = public;
	displayName = $STR_A3_A_CfgWeapons_U_O_T_officer_noInsignia_ghex_F0;
	picture = "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\UI\icon_U_O_T_officer_noInsignia_ghex_F_CA.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {camo};
	hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\Data\suitpack_soldier_OPFOR_CO.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = O_LightFatigues_01_ghex_F;
		containerClass = Supply40;
		mass = 60;
	};
};