// Arma 3 Apex
class Box_GEN_Equip_F: Box_NATO_Equip_F
{
	class TransportMagazines
	{
		mag_xx(30Rnd_9x21_Mag_SMG_02,24);
		delete _xx_16Rnd_9x21_Mag;
		mag_xx(7Rnd_45ACP_Mag,12);
		mag_xx(SmokeShell,6);
		mag_xx(SmokeShellYellow,6);
		mag_xx(HandGrenade,6);
	};
	class TransportWeapons
	{
		weap_xx(SMG_05_F,6);
		delete _xx_hgun_P07_F;
		weap_xx(hgun_C1911_F,6);
	};
	class TransportItems
	{
		item_xx(U_B_GEN_Commander_F,3);
		item_xx(U_B_GEN_Soldier_F,3);
		item_xx(V_TacVest_gen_F,6);
		item_xx(H_MilCap_gen_F,2);
		item_xx(H_Beret_gen_F,2);
		item_xx(H_PASGT_basic_black_F,2);
		item_xx(FirstAidKit,6);
		item_xx(acc_flashlight,2);
		item_xx(acc_flashlight_pistol,2);
		delete _xx_muzzle_snds_L;
		item_xx(optic_Holosight_blk_F,2);
		item_xx(optic_Holosight_blk_smg_F,2);
	};
	class TransportBackpacks{};
};