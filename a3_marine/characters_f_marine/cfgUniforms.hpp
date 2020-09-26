// Arma 3
class B_soldier_AR_F;
class B_Soldier_SL_F;
// Arma 3 Marine
// USMC
class B_MCUCombatFatigues_01_desert_F: B_Soldier_F
{
	scope = protected;
	scopeCurator = private;
	uniformClass = U_B_MCU_desert_F;
	hiddenSelectionsTextures[] = {"\A3_Marine\Characters_F_Marine\Uniforms\Data\clothing1_desert_CO.paa"};
};
class B_MCUCombatFatigues_01_wdl_F: B_Soldier_F
{
	scope = protected;
	scopeCurator = private;
	uniformClass = U_B_MCU_wdl_F;
	hiddenSelectionsTextures[] = {"\A3_Marine\Characters_F_Marine\Uniforms\Data\clothing1_mwdl_CO.paa"};
};
class B_MCUCombatFatigues_01_Tshirt_desert_F: B_soldier_AR_F
{
	scope = protected;
	scopeCurator = private;
	uniformClass = U_B_MCU_tshirt_desert_F;
	hiddenSelectionsTextures[] =
    {
        "\A3_Marine\Characters_F_Marine\Uniforms\Data\clothing1_desert_CO.paa",
        "\A3\Characters_F\Common\Data\basicbody_brown_CO.paa"
    };
};
class B_MCUCombatFatigues_01_Tshirt_wdl_F: B_soldier_AR_F
{
	scope = protected;
	scopeCurator = private;
	uniformClass = U_B_MCU_tshirt_wdl_F;
	hiddenSelectionsTextures[] =
    {
        "\A3_Marine\Characters_F_Marine\Uniforms\Data\clothing1_mwdl_CO.paa",
        "\A3\Characters_F_Enoch\Uniforms\Data\basicbody_wdl_CO.paa"
    };
};
class B_MCUReconFatigues_01_desert_F: B_Soldier_SL_F
{
	scope = protected;
	scopeCurator = private;
	uniformClass = U_B_MCU_vest_desert_F;
	hiddenSelectionsTextures[] = {"\A3_Marine\Characters_F_Marine\Uniforms\Data\clothing1_desert_CO.paa"};
};
class B_MCUReconFatigues_01_wdl_F: B_Soldier_SL_F
{
	scope = protected;
	scopeCurator = private;
	uniformClass = U_B_MCU_vest_wdl_F;
	hiddenSelectionsTextures[] = {"\A3_Marine\Characters_F_Marine\Uniforms\Data\clothing1_mwdl_CO.paa"};
};