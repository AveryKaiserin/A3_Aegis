// Arma 3 Aegis
class U_O_T_Pilot_F: Uniform_Base
{
	author = $STR_A3_A_AveryTheKitty;
	scope = public;
	displayName = $STR_A3_A_CfgWeapons_U_O_T_Pilot_F0;
	picture = "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\UI\icon_U_O_T_Pilot_F_CA.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
	hiddenSelections[] = {camo};
	hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\pilot_suit_tna_CO.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = O_T_Pilot_F;
		containerClass = Supply60;
		mass = 100;
	};
};