class U_B_CombatUniform_mcam_aus_f: Uniform_Base
{
	author = $STR_A3_A_AveryTheKitty;
	scope = public;
	displayName = $STR_A3_A_CfgWeapons_U_B_CombatUniform_mcam_aus_f0;
	//picture = "\A3_Atlas\Characters_F_Atlas\Uniforms\Data\UI\icon_U_B_CombatUniform_mcam_aus_f_CA.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {camo};
	hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\clothing_mcam_aus_CO.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = B_CombatFatigues_01_aus_F;
		containerClass = Supply40;
		mass = 40;
	};
};
class U_B_CombatUniform_tshirt_mcam_aus_f: Uniform_Base
{
	author = $STR_A3_A_AveryTheKitty;
	scope = public;
	displayName = $STR_A3_A_CfgWeapons_U_B_CombatUniform_tshirt_mcam_aus_f0;
	//picture = "\A3_Atlas\Characters_F_Atlas\Uniforms\Data\UI\icon_U_B_CombatUniform_tshirt_mcam_aus_f_CA.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {camo};
	hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\clothing_mcam_aus_CO.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = B_CombatFatigues_01_Tshirt_aus_F;
		containerClass = Supply40;
		mass = 40;
	};
};
class U_B_CombatUniform_vest_mcam_aus_f: Uniform_Base
{
	author = $STR_A3_A_AveryTheKitty;
	scope = public;
	displayName = $STR_A3_A_CfgWeapons_U_B_CombatUniform_vest_mcam_aus_f0;
	//picture = "\A3_Atlas\Characters_F_Atlas\Uniforms\Data\UI\icon_U_B_CombatUniform_vest_mcam_aus_f_CA.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {camo};
	hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\clothing_mcam_aus_CO.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = B_ReconFatigues_01_aus_F;
		containerClass = Supply40;
		mass = 40;
	};
};
class U_B_PilotCoveralls_ANZAC: Uniform_Base
{
	author = $STR_A3_A_AveryTheKitty;
	scope = public;
	displayName = $STR_A3_A_CfgWeapons_U_B_PilotCoveralls_ANZAC0;
	//picture = "\A3\Characters_F\Data\UI\icon_U_B_PilotCoveralls_CA.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
	hiddenSelections[] = {camo};
	hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Data\pilot_suit_nato_CO.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = B_ANZAC_PilotCoveralls_01_ANZAC;
		containerClass = Supply60;
		mass = 80;
	};
};