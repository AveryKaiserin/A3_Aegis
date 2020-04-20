// Arma 3
class U_IG_Guerilla1_1: Uniform_Base
{
	picture = "\A3\Characters_F_Gamma\Guerrilla\Data\UI\icon_U_G_guerrilla1_1_CA.paa";
};
class U_BG_Guerilla1_1: Uniform_Base
{
	picture = "\A3\Characters_F_Gamma\Guerrilla\Data\UI\icon_U_G_Guerrilla1_1_CA.paa";
};
class U_OG_Guerilla1_1: Uniform_Base
{
	picture = "\A3\Characters_F_Gamma\Guerrilla\Data\UI\icon_U_G_guerrilla1_1_CA.paa";
};
class U_IG_Guerilla3_2: Uniform_Base
{
	displayName = $STR_A3_A_CfgWeapons_U_IG_Guerilla3_20;
	class ItemInfo: UniformItem
	{
		uniformClass = I_G_Sharpshooter_F;
	};
};
class U_BG_Guerilla3_2: Uniform_Base
{
	scope = public;
	displayName = $STR_A3_A_CfgWeapons_U_IG_Guerilla3_20;
	class ItemInfo: UniformItem
	{
		uniformClass = B_G_Sharpshooter_F;
	};
};
class U_OG_Guerilla3_2: Uniform_Base
{
	displayName = $STR_A3_A_CfgWeapons_U_IG_Guerilla3_20;
	class ItemInfo: UniformItem
	{
		uniformClass = O_G_Sharpshooter_F;
	};
};
// Arma 3 Aegis
class U_IG_Guerilla1_2_F: Uniform_Base
{
	author = $STR_A3_A_AveryTheKitty;
	scope = protected;
	displayName = $STR_A3_CfgWeapons_U_BG_Guerilla1_2_F0;
	picture = "\A3\Characters_F_Orange\Uniforms\Data\UI\icon_U_G_guerrilla1_2_CA.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
	hiddenSelections[] = {camo};
	hiddenSelectionsTextures[] = {"\A3\Characters_F_Orange\Uniforms\Data\C_Cloth1_olive_CO.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = I_G_Soldier_A_F;
		containerClass = Supply30;
		mass = 30;
	};
};
class U_OG_Guerilla1_2_F: Uniform_Base
{
	author = $STR_A3_A_AveryTheKitty;
	scope = protected;
	displayName = $STR_A3_CfgWeapons_U_BG_Guerilla1_2_F0;
	picture = "\A3\Characters_F_Orange\Uniforms\Data\UI\icon_U_G_guerrilla1_2_CA.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
	hiddenSelections[] = {camo};
	hiddenSelectionsTextures[] = {"\A3\Characters_F_Orange\Uniforms\Data\C_Cloth1_olive_CO.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = O_G_Soldier_A_F;
		containerClass = Supply30;
		mass = 30;
	};
};
class U_BG_Guerilla1_3: Uniform_Base
{
	author = $STR_A3_A_AveryTheKitty;
	scope = public;
	displayName = $STR_A3_A_CfgWeapons_U_BG_Guerilla1_30;
	picture = "\A3\Characters_F_Bootcamp\Data\UI\icon_U_G_Guerrilla1_1_CA.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {camo};
	hiddenSelectionsTextures[] = {"\A3\Characters_F_Bootcamp\Guerrilla\Data\C_cloth1_kabeiroi_CO.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = B_G_Soldier_lite_F;
		containerClass = Supply30;
		mass = 30;
	};
};
class U_IG_Guerilla1_3: Uniform_Base
{
	author = $STR_A3_A_AveryTheKitty;
	scope = protected;
	displayName = $STR_A3_A_CfgWeapons_U_BG_Guerilla1_30;
	picture = "\A3\Characters_F_Bootcamp\Data\UI\icon_U_G_Guerrilla1_1_CA.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {camo};
	hiddenSelectionsTextures[] = {"\A3\Characters_F_Bootcamp\Guerrilla\Data\c_cloth1_kabeiroi_CO.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = I_G_Soldier_lite_F;
		containerClass = Supply30;
		mass = 30;
	};
};
class U_OG_Guerilla1_3: Uniform_Base
{
	author = $STR_A3_A_AveryTheKitty;
	scope = protected;
	displayName = $STR_A3_A_CfgWeapons_U_BG_Guerilla1_30;
	picture = "\A3\Characters_F_Bootcamp\Data\UI\icon_U_G_guerrilla1_1_CA.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {camo};
	hiddenSelectionsTextures[] = {"\A3\Characters_F_Bootcamp\Guerrilla\Data\c_cloth1_kabeiroi_CO.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = O_G_Soldier_lite_F;
		containerClass = Supply30;
		mass = 30;
	};
};
class U_IG_GhillieSuit: Uniform_Base
{
	author = $STR_A3_A_AveryTheKitty;
	scope = protected;
	displayName = $STR_A3_Ghillie_suit_guerilla;
	picture = "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\UI\icon_U_IG_GhillieSuit_CA.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {camo};
	hiddenSelectionsTextures[] = {"\A3\Characters_F_Bootcamp\Guerrilla\Data\IG_Guerrilla_6_1_CO.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = I_G_Sniper_F;
		containerClass = Supply60;
		mass = 60;
	};
};
class U_BG_GhillieSuit: Uniform_Base
{
	author = $STR_A3_A_AveryTheKitty;
	scope = public;
	displayName = $STR_A3_Ghillie_suit_guerilla;
	picture = "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\UI\icon_U_IG_GhillieSuit_CA.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {camo};
	hiddenSelectionsTextures[] = {"\A3\Characters_F_Bootcamp\Guerrilla\Data\IG_Guerrilla_6_1_CO.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = B_G_Sniper_F;
		containerClass = Supply60;
		mass = 60;
	};
};
class U_OG_GhillieSuit: Uniform_Base
{
	author = $STR_A3_A_AveryTheKitty;
	scope = protected;
	displayName = $STR_A3_Ghillie_suit_guerilla;
	picture = "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\UI\icon_U_IG_GhillieSuit_CA.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {camo};
	hiddenSelectionsTextures[] = {"\A3\Characters_F_Bootcamp\Guerrilla\Data\IG_Guerrilla_6_1_CO.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = O_G_Sniper_F;
		containerClass = Supply60;
		mass = 60;
	};
};