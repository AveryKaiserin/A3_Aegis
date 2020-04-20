// Arma 3 Aegis
class Box_ION_Equip_F: Box_NATO_Equip_F
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
	//editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Box_ION_Equip_F.jpg";
	displayName = $STR_A3_A_CfgVehicles_Box_ION_Equip_F0;
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Supplies_F_Aegis\Ammoboxes\Data\equipment_box_ION_CO.paa",
		"\A3_Aegis\Supplies_F_Aegis\Ammoboxes\Data\equipment_box_ION_CA.paa"
	};
	class TransportMagazines
	{
		mag_xx(30Rnd_9x21_Mag_SMG_02,12);
		mag_xx(30Rnd_65x39_caseless_black_mag,20);
		mag_xx(100Rnd_65x39_caseless_black_mag,4);
		mag_xx(16Rnd_9x21_Mag,12);
		mag_xx(SmokeShell,6);
		mag_xx(SmokeShellYellow,6);
		mag_xx(HandGrenade,6);
	};
	class TransportWeapons
	{
		weap_xx(SMG_02_F,3);
        weap_xx(arifle_MX_Black_F,2);
        weap_xx(arifle_MX_GL_Black_F,1);
        weap_xx(arifle_MX_SW_Black_F,1);
        weap_xx(arifle_MXC_Black_F,1);
        weap_xx(arifle_MXM_Black_F,1);
		weap_xx(hgun_P07_blk_F,6);
	};
	class TransportItems
	{
		item_xx(U_B_ION_Uniform_01_poloshirt_wdl_F,2);
		item_xx(U_B_ION_Uniform_01_poloshirt_blue_F,2);
		item_xx(U_Competitor,2);
		item_xx(V_TacVest_camo,3);
		item_xx(V_TacVest_oli,3);
		item_xx(H_Cap_blk_ION,2);
		item_xx(H_Cap_blk_ION_hs,2);
		item_xx(H_Cap_headphones_blk_ion,2);
		item_xx(FirstAidKit,6);
		item_xx(acc_flashlight,2);
		item_xx(acc_flashlight_pistol,2);
		item_xx(optic_ACO,2);
		item_xx(optic_ACO_smg,2);
		item_xx(optic_Hamr,2);
	};
	class TransportBackpacks{};
};