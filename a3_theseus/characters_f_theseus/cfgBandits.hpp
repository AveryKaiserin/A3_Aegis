/* Bandits */
class Theseus_O_B_Man_Base_F: I_L_Soldier_Base_F
{
	scope = private;
	faction = Theseus_OPF_B_F;
	genericNames = GreekMen;
	side = TEast;
	identityTypes[] =
	{
		LanguageGRE_F,
		Head_Greek,
		G_HAF_default
	};
};
class Theseus_O_B_Looter_Pistol_F: Theseus_O_B_Man_Base_F
{
	scope = public;
	scopeCurator = public;
	displayName = $STR_A3_T_CfgVehicles_O_B_Bandit_Pistol_F0;
	editorPreview = "\A3_Theseus\EditorPreviews_F_Theseus\Data\CfgVehicles\Theseus_O_B_Looter_Pistol_F.jpg";
	backpack = B_messenger_gray_F;
	uniformClass = U_C_Poloshirt_stripped;
	linkedItems[] = 
	{
		H_Bandanna_khk, 
		DefaultManLooterLinkedItems
	};
	respawnLinkedItems[] = 
	{
		H_Bandanna_khk, 
		DefaultManLooterLinkedItems
	};
	weapons[] =
    {
        hgun_ACPC2_black_F,
        DefaultManWeapons
    };
	respawnWeapons[] =
    {
        hgun_ACPC2_black_F,
        DefaultManWeapons
    };
	magazines[] = {mag_4(9Rnd_45ACP_Mag)};
	respawnMagazines[] = {mag_4(9Rnd_45ACP_Mag)};
};
class Theseus_O_B_Looter_SG_F: Theseus_O_B_Man_Base_F
{
	scope = public;
	scopeCurator = public;
	displayName = $STR_A3_T_CfgVehicles_O_B_Bandit_SG_F0;
	editorPreview = "\A3_Theseus\EditorPreviews_F_Theseus\Data\CfgVehicles\Theseus_O_B_Looter_SG_F.jpg";
	backpack = B_Kitbag_rgr;
	uniformClass = U_C_Mechanic_01_F;
	weapons[] =
    {
        sgun_M4_F,
        DefaultManWeapons
    };
	respawnWeapons[] =
    {
        sgun_M4_F,
        DefaultManWeapons
    };
	linkedItems[] =
    {
		H_cap_oli,
        V_pocketed_coyote_F,
        DefaultManLooterLinkedItems
    };
	respawnLinkedItems[] =
    {
		H_cap_oli,
        V_pocketed_coyote_F,
        DefaultManLooterLinkedItems
    };
	magazines[] = {mag_2(8Rnd_12Gauge_Pellets)};
	respawnMagazines[] = {mag_2(8Rnd_12Gauge_Pellets)};
};
class Theseus_O_B_Looter_Rifle_F: Theseus_O_B_Man_Base_F
{
	scope = public;
	scopeCurator = public;
	editorPreview = "\A3_Theseus\EditorPreviews_F_Theseus\Data\CfgVehicles\Theseus_O_B_Looter_Rifle_F.jpg";
	displayName = $STR_A3_T_CfgVehicles_O_B_Bandit_Rifle_F0;
	uniformClass = U_C_Poor_1;
	linkedItems[] =
    {
		V_TacVest_gry,
        DefaultManLooterLinkedItems
    };
	respawnLinkedItems[] =
    {
		V_TacVest_gry,
        DefaultManLooterLinkedItems
    };
	weapons[] =
    {
        arifle_Mk20_plain_F,
        DefaultManWeapons
    };
	respawnWeapons[] =
    {
        arifle_Mk20_plain_F,
        DefaultManWeapons
    };
	magazines[] = {mag_3(30Rnd_556x45_Stanag)};
	respawnMagazines[] = {mag_3(30Rnd_556x45_Stanag)};
};
class Theseus_O_B_Looter_SMG_F: Theseus_O_B_Man_Base_F
{
	scope = public;
	scopeCurator = public;
	editorPreview = "\A3_Theseus\EditorPreviews_F_Theseus\Data\CfgVehicles\Theseus_O_B_Looter_SMG_F.jpg";
	displayName = $STR_A3_T_CfgVehicles_O_B_Bandit_SMG_F0;
	uniformClass = U_C_Commoner1_1;
	backpack = B_Messenger_Black_F;
	linkedItems[] =
    {
        DefaultManLooterLinkedItems
    };
	respawnLinkedItems[] =
    {
        DefaultManLooterLinkedItems
    };
	weapons[] =
    {
        hgun_PDW2000_F,
        DefaultManWeapons
    };
	respawnWeapons[] =
    {
        hgun_PDW2000_F,
        DefaultManWeapons
    };
	magazines[] = {mag_4(30Rnd_9x21_Mag)};
	respawnMagazines[] = {mag_4(30Rnd_9x21_Mag)};
};
class Theseus_O_B_Criminal_SG_F: Theseus_O_B_Man_Base_F
{
	scope = public;
	scopeCurator = public;
	editorPreview = "\A3_Theseus\EditorPreviews_F_Theseus\Data\CfgVehicles\Theseus_O_B_Criminal_SG_F.jpg";
	displayName = $STR_A3_C_I_L_Criminal_SG_F0;
	uniformClass = U_C_E_LooterJacket_01_F;
	linkedItems[] =
    {
		H_Watchcap_blk,
        DefaultManLooterLinkedItems
    };
	respawnLinkedItems[] =
    {
		H_Watchcap_blk,
        DefaultManLooterLinkedItems
    };
	weapons[] =
    {
        sgun_HunterShotgun_01_Sawedoff_F,
        DefaultManWeapons
    };
	respawnWeapons[] =
    {
        sgun_HunterShotgun_01_Sawedoff_F,
        DefaultManWeapons
    };
	magazines[] = {mag_6(2Rnd_12Gauge_Pellets)};
	respawnMagazines[] = {mag_6(2Rnd_12Gauge_Pellets)};
};
class Theseus_O_B_Criminal_SMG_F: Theseus_O_B_Man_Base_F
{
	scope = public;
	scopeCurator = public;
	editorPreview = "\A3_Theseus\EditorPreviews_F_Theseus\Data\CfgVehicles\Theseus_O_B_Criminal_SMG_F.jpg";
	displayName = $STR_A3_C_I_L_Criminal_SMG_F0;
	uniformClass = U_O_R_Gorka_01_Black_F;
	linkedItems[] =
    {
		G_Balaclava_blk,
        DefaultManLooterLinkedItems
    };
	respawnLinkedItems[] =
    {
		G_Balaclava_blk,
        DefaultManLooterLinkedItems
    };
	weapons[] =
    {
        hgun_PDW2000_F,
        DefaultManWeapons
    };
	respawnWeapons[] =
    {
        hgun_PDW2000_F,
        DefaultManWeapons
    };
	magazines[] = {mag_5(30Rnd_9x21_Mag)};
	respawnMagazines[] = {mag_5(30Rnd_9x21_Mag)};
};
class Theseus_O_B_Hunter_F: Theseus_O_B_Man_Base_F
{
	scope = public;
	scopeCurator = public;
	editorPreview = "\A3_Theseus\EditorPreviews_F_Theseus\Data\CfgVehicles\Theseus_O_B_Hunter_F.jpg";
	displayName = $STR_A3_A_CfgVehicles_I_L_Looter_Rifle_F0;
	uniformClass = U_C_HunterBody_grn;
	linkedItems[] =
    {
		H_Booniehat_khk,
		G_Bandanna_shades,
        DefaultManLooterLinkedItems
    };
	respawnLinkedItems[] =
    {
		H_Booniehat_khk,
		G_Bandanna_shades,
        DefaultManLooterLinkedItems
    };
	weapons[] =
    {
        srifle_DMR_06_hunter_khs_F,
        DefaultManWeapons
    };
	respawnWeapons[] =
    {
        srifle_DMR_06_hunter_khs_F,
        DefaultManWeapons
    };
	magazines[] = {mag_5(10Rnd_Mk14_762x51_Mag)};
	respawnMagazines[] = {mag_5(10Rnd_Mk14_762x51_Mag)};
};

/* Bandits but Independent Wow */

class Theseus_I_B_Looter_Pistol_F: Theseus_O_B_Looter_Pistol_F
{
    faction = Theseus_IND_B_F;
	side = TGuerrila;
};
class Theseus_I_B_Looter_SG_F: Theseus_O_B_Looter_SG_F
{
    faction = Theseus_IND_B_F;
	side = TGuerrila;
};
class Theseus_I_B_Looter_Rifle_F: Theseus_O_B_Looter_Rifle_F
{
    faction = Theseus_IND_B_F;
	side = TGuerrila;
};
class Theseus_I_B_Looter_SMG_F: Theseus_O_B_Looter_SMG_F
{
    faction = Theseus_IND_B_F;
	side = TGuerrila;
};
class Theseus_I_B_Criminal_SG_F: Theseus_O_B_Criminal_SG_F
{
    faction = Theseus_IND_B_F;
	side = TGuerrila;
};
class Theseus_I_B_Criminal_SMG_F: Theseus_O_B_Criminal_SMG_F
{
    faction = Theseus_IND_B_F;
	side = TGuerrila;
};
class Theseus_I_B_Hunter_F: Theseus_O_B_Hunter_F
{
    faction = Theseus_IND_B_F;
	side = TGuerrila;
};