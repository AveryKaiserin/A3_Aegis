// Arma 3 Apex
class Box_NATO_Equip_F;
// Arma 3 Police
class Police_Box_POLICE_Equip_F: Box_NATO_Equip_F
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
	editorPreview = "\A3_Police\EditorPreviews_F_Police\Data\CfgVehicles\Box_POLICE_Equip_F.jpg";
	displayName = $STR_A3_P_CfgVehicles_Police_Box_POLICE_Equip_F0;
	hiddenSelectionsTextures[] =
	{
		"\A3_Police\Supplies_F_Police\Ammoboxes\Data\equipment_box_POLICE_CO.paa",
		"\A3_Police\Supplies_F_Police\Ammoboxes\Data\equipment_box_POLICE_CA.paa"
	};
	editorSubcategory = Police_EdSubcat_Ammo_Police;
	class TransportMagazines
	{
		mag_xx(50Rnd_570x28_SMG_03,18);
		mag_xx(30Rnd_65x39_caseless_msbs_mag,18);
		mag_xx(20Rnd_762x51_mag,6);
		mag_xx(17Rnd_9x21_Mag,12);
		mag_xx(Chemlight_blue,2);
	};
	class TransportWeapons
	{
		weap_xx(SMG_03C_black,3);
        weap_xx(Atlas_arifle_G36C_F,3);
        weap_xx(srifle_DMR_06_black_F,1);
		weap_xx(hgun_G17_black_F,6);
	};
	class TransportItems
	{
		item_xx(Police_U_I_P_PoliceUniform_F,3);
		item_xx(Police_U_I_P_PoliceUniform_gloves_F,2);
		item_xx(V_TacVest_blk_POLICE,3);
		item_xx(Police_V_CarrierRigKBT_01_light_POLICE_F,2);
		item_xx(H_Cap_police,2);
		item_xx(H_Beret_blk_POLICE,1);
		item_xx(Atlas_H_HelmetSpecter_black_headset_F,2);
		item_xx(FirstAidKit,10);
		item_xx(acc_flashlight,5);
		item_xx(I_UavTerminal,1);
		item_xx(Binocular,1);
		item_xx(Medikit,1);
		item_xx(MineDetector,1);
		item_xx(ToolKit,1);
		item_xx(optic_Holosight_blk_F,2);
		item_xx(optic_Holosight_blk_smg_F,2);
		item_xx(optic_AMS,2);
	};
	class TransportBackpacks
	{
		bag_xx(B_AssaultPack_blk,2);
	};
};