class U_O_R_Gorka_arctic_F: Uniform_Base
{
	author = $STR_A3_A_AveryTheKitty;
	scope = public;
	displayName = $STR_A3_A_CfgWeapons_U_O_R_Gorka_arctic_F0;
	picture = "\A3_Arc\Characters_F_Arc\Uniforms\Data\UI\icon_U_O_R_Gorka_arctic_F_CA.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
	hiddenSelections[] = {camo};
	hiddenSelectionsTextures[] = {"\A3_Arc\Characters_F_Arc\Uniforms\Data\Gorka_01_Arctic_CO.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = O_R_Gorka_arctic_F;
		containerClass = Supply40;
		mass = 40;
	};
};
class U_O_R_FullGhillie_arc_F: Uniform_Base
{
	author = $STR_A3_A_AveryTheKitty;
	scope = public;
	displayName = $STR_A3_A_CfgWeapons_U_O_R_FullGhillie_arc_F0;
	picture = "\A3_Arc\Characters_F_Arc\Uniforms\Data\UI\icon_U_O_R_FullGhillie_arc_F_CA.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {camo};
	hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\Data\suitpack_soldier_OPFOR_CO.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = O_R_FullGhillie_arc_F;
		containerClass = Supply60;
		mass = 80;
	};
};