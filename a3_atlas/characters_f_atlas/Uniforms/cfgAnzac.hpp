class Atlas_U_B_A_CombatUniform_ADF_Tropic: Uniform_Base
{
	author = $STR_A3_A_Abb0tt;
	scope = public;
	displayName = $STR_A3_A_CfgWeapons_U_B_A_CombatUniform_ADF_Tropic0;
	//picture = "\A3_Atlas\Characters_F_Atlas\Uniforms\Data\UI\icon_U_B_A_CombatUniform_aucamo_CA.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {camo};
	hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\B_ADF_Tropic_CO.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = Atlas_B_A_CombatUniform_ADF_Tropic;
		containerClass = Supply40;
		mass = 40;
	};
};
class Atlas_U_B_A_CombatUniform_ADF_Woodland: Atlas_U_B_A_CombatUniform_ADF_Tropic
{
	displayName = $STR_A3_A_CfgWeapons_U_B_A_CombatUniform_ADF_Woodland0;
	//picture = "\A3_Atlas\Characters_F_Atlas\Uniforms\Data\UI\icon_U_B_A_CombatUniform_aucamo_CA.paa";
	hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\B_ADF_Woodland_CO.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = Atlas_B_A_CombatUniform_ADF_Woodland;
		containerClass = Supply40;
		mass = 40;
	};
};
class Atlas_U_B_A_CombatUniform_ADF_Arid: Atlas_U_B_A_CombatUniform_ADF_Tropic
{
	displayName = $STR_A3_A_CfgWeapons_U_B_A_CombatUniform_ADF_Arid0;
	//picture = "\A3_Atlas\Characters_F_Atlas\Uniforms\Data\UI\icon_U_B_A_CombatUniform_aucamo_CA.paa";
	hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\B_ADF_Arid_CO.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = Atlas_B_A_CombatUniform_ADF_Arid;
		containerClass = Supply40;
		mass = 40;
	};
};
class Atlas_U_B_A_CombatUniform_ADF_Tropic_Shortsleeve: Uniform_Base
{
	author = $STR_A3_A_Abb0tt;
	scope = public;
	displayName = $STR_A3_A_CfgWeapons_U_B_A_CombatUniform_ADF_Tropic_Shortsleeve0;
	//picture = "\A3_Atlas\Characters_F_Atlas\Uniforms\Data\UI\icon_U_B_A_CombatUniform_shortsleeve_aucamo_CA.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {camo};
	hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\B_ADF_Tropic_CO.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = Atlas_B_A_CombatUniform_ADF_Tropic_Rolledup;
		containerClass = Supply40;
		mass = 40;
	};
};
class Atlas_U_B_A_CombatUniform_ADF_Woodland_Shortsleeve: Atlas_U_B_A_CombatUniform_ADF_Tropic_Shortsleeve
{
	displayName = $STR_A3_A_CfgWeapons_U_B_A_CombatUniform_ADF_Woodland_Shortsleeve0;
	//picture = "\A3_Atlas\Characters_F_Atlas\Uniforms\Data\UI\icon_U_B_A_CombatUniform_aucamo_CA.paa";
	hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\B_ADF_Woodland_CO.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = Atlas_B_A_CombatUniform_ADF_Woodland_Rolledup;
		containerClass = Supply40;
		mass = 40;
	};
};
class Atlas_U_B_A_CombatUniform_ADF_Arid_Shortsleeve: Atlas_U_B_A_CombatUniform_ADF_Tropic_Shortsleeve
{
	displayName = $STR_A3_A_CfgWeapons_U_B_A_CombatUniform_ADF_Arid_Shortsleeve0;
	//picture = "\A3_Atlas\Characters_F_Atlas\Uniforms\Data\UI\icon_U_B_A_CombatUniform_aucamo_CA.paa";
	hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\B_ADF_Arid_CO.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = Atlas_B_A_CombatUniform_ADF_Arid_Rolledup;
		containerClass = Supply40;
		mass = 40;
	};
};
class Atlas_U_B_A_PilotCoveralls: Uniform_Base
{
	author = $STR_A3_A_Abb0tt;
	scope = public;
	displayName = $STR_A3_A_CfgWeapons_U_B_A_PilotCoveralls0;
	//picture = "\A3_Atlas\Characters_F_Atlas\Uniforms\Data\UI\icon_U_B_A_PilotCoveralls_CA.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
	hiddenSelections[] = {camo};
	hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\pilot_suit_aucamo_CO.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = Atlas_B_A_PilotCoveralls_01_F;
		containerClass = Supply60;
		mass = 80;
	};
};
class Atlas_U_B_A_Wetsuit: Uniform_Base
{
	author = $STR_A3_A_Abb0tt;
	scope = public;
	displayName = $STR_A3_A_CfgWeapons_U_B_A_Wetsuit0;
	//picture = "\A3_Atlas\Characters_F_Atlas\Uniforms\Data\UI\icon_U_B_A_Wetsuit_CA.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
	hiddenSelections[] = {camo};
	hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\diver_suit_aucamo_CO.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = Atlas_B_A_Wetsuit_01_F;
		containerClass = Supply80;
		uniformType = Neopren;
		mass = 60;
	};
};
class Atlas_U_B_A_CBRN_Suit_01_Aucamo_F: Uniform_Base
{
	author = $STR_A3_A_Abb0tt;
	scope = public;
	displayName = $STR_A3_A_CfgWeapons_U_B_A_CBRN_Suit_01_Aucamo_F0;
	//picture = "\A3_Atlas\Characters_F_Atlas\Uniforms\Data\UI\icon_U_B_A_CBRN_Suit_01_Aucamo_F_CA.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
	hiddenSelections[] = {camo};
	hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\CBRN_Suit_01_Aucamo_CO.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = Atlas_B_A_CBRN_Man_Oversuit_01_Aucamo_F;
		containerClass = Supply30;
		mass = 45;
	};
};