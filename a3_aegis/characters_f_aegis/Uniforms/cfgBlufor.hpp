// Arma 3
class U_B_CombatUniform_mcam_tshirt: Uniform_Base
{
    displayName = $STR_A3_A_CfgWeapons_U_B_CombatUniform_mcam_tshirt0;
};
class U_B_CombatUniform_mcam_vest: Uniform_Base
{
    displayName = $STR_A3_A_CfgWeapons_U_B_CombatUniform_mcam_vest0;
};
class U_B_GhillieSuit: Uniform_Base
{
	picture = "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\UI\icon_U_B_GhillieSuit_CA.paa";
};
class U_Rangemaster: Uniform_Base
{
	picture = "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\UI\icon_U_Rangemaster_CA.paa";
};
class U_B_CombatUniform_wdl: Uniform_Base
{
    hiddenSelectionsTextures[] = {"\A3\Characters_F\BLUFOR\Data\clothing_wdl_CO.paa"};
};
class U_B_CombatUniform_wdl_tshirt: Uniform_Base
{
    hiddenSelectionsTextures[] = {"\A3\Characters_F\BLUFOR\Data\clothing_wdl_CO.paa"};
    class ItemInfo: UniformItem
    {
        uniformClass = B_SoldierW_02_f;
    };
};
class U_B_CombatUniform_wdl_vest: Uniform_Base
{
    hiddenSelectionsTextures[] = {"\A3\Characters_F\BLUFOR\Data\clothing_wdl_CO.paa"};
    class ItemInfo: UniformItem
    {
        uniformClass = B_SoldierW_03_f;
    };
};
class U_B_CombatUniform_sgg: Uniform_Base
{
    scope = public;
    displayName = $STR_A3_A_CfgWeapons_U_B_CombatUniform_sgg;
	picture = "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\UI\icon_U_B_CombatUniform_sgg_CA.paa";
    hiddenSelectionsTextures[] = {"\A3\Characters_F\BLUFOR\Data\clothing_sage_CO.paa"};
};
class U_B_CombatUniform_sgg_tshirt: Uniform_Base
{
    scope = public;
    displayName = $STR_A3_A_CfgWeapons_U_B_CombatUniform_sgg_tshirt0;
	picture = "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\UI\icon_U_B_CombatUniform_sgg_tshirt_CA.paa";
    hiddenSelectionsTextures[] = {"\A3\Characters_F\BLUFOR\Data\clothing_sage_CO.paa"};
    class ItemInfo: UniformItem
    {
        uniformClass = B_SoldierS_02_f;
    };
};
class U_B_CombatUniform_sgg_vest: Uniform_Base
{
    scope = public;
    displayName = $STR_A3_A_CfgWeapons_U_B_CombatUniform_sgg_vest0;
	picture = "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\UI\icon_U_B_CombatUniform_sgg_vest_CA.paa";
    hiddenSelectionsTextures[] = {"\A3\Characters_F\BLUFOR\Data\clothing_sage_CO.paa"};
    class ItemInfo: UniformItem
    {
        uniformClass = B_SoldierS_03_f;
    };
};
class U_B_CombatUniform_mcam_worn: Uniform_Base
{
    scope = protected;
};