// Arma 3 Apex
class Box_NATO_Equip_F;
// Arma 3 Aegis
class Box_IR_Equip_F: Box_NATO_Equip_F
{
	author = $STR_A3_A_AveryTheKitty;
	class SimpleObject
	{
		eden = true;
		animate[] = {};
		hide[] = {};
		verticalOffset = 0.382;
		verticalOffsetWorld = 0;
		init = "''";
	};
	editorPreview = "\A3_Opf\EditorPreviews_F_Opf\Data\CfgVehicles\Box_IR_Equip_F.jpg";
	displayName = $STR_A3_O_CfgVehicles_Box_IR_Equip_F0;
    /*
	hiddenSelectionsTextures[] =
	{
		"\A3_Opf\Supplies_F_Opf\Ammoboxes\Data\equipment_box_RUS_CO.paa",
		"\A3_Opf\Supplies_F_Opf\Ammoboxes\Data\equipment_box_RUS_CA.paa"
	};
    */
	class TransportMagazines
	{
		mag_xx(30Rnd_9x21_Mag_SMG_02,12);
		mag_xx(30Rnd_545x39_lush_Mag_F,16);
		mag_xx(75Rnd_762x39_AK12_Lush_Mag_F,4);
		mag_xx(10Rnd_762x54_mag,4);
		mag_xx(17Rnd_9x21_Mag,12);
		mag_xx(SmokeShell,6);
		mag_xx(SmokeShellOrange,6);
		mag_xx(HandGrenade,6);
	};
	class TransportWeapons
	{
		weap_xx(SMG_02_F,3);
        weap_xx(arifle_AK12_545_lush_F,2);
        weap_xx(arifle_AK12_GL_545_lush_F,1);
        weap_xx(arifle_AK12U_545_lush_F,1);
        weap_xx(arifle_RPK12_lush_F,1);
        weap_xx(srifle_DMR_01_lush_F,1);
		weap_xx(hgun_Rook40_F,6);
	};
	class TransportItems
	{
		item_xx(U_O_E_Uniform_01_taiga_F,2);
		item_xx(U_O_R_CombatUniform_tshirt_taiga_F,2);
		item_xx(U_O_R_officer_noInsignia_taiga_F,2);
		item_xx(V_HarnessOSpec_blk,6);
		item_xx(H_Cap_khk_Raven,1);
		item_xx(H_Cap_khk_Raven_hs,1);
		item_xx(H_Cap_headphones_Raven,2);
		item_xx(H_HelmetSpecter_black_F,1);
		item_xx(H_HelmetSpecter_black_headset_F,1);
		item_xx(FirstAidKit,6);
		item_xx(acc_flashlight,2);
		item_xx(acc_flashlight_pistol,2);
		item_xx(optic_Holosight_lush_F,2);
		item_xx(optic_ACO_grn_smg,2);
		item_xx(optic_Arco_lush_F,2);
	};
	class TransportBackpacks{};
};