class B_ION_Heli_Light_01_civil_F: Heli_Light_01_civil_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_ION_Heli_Light_01_civil_F.jpg";
	scope = public;
	side = TWest;
	faction = BLU_ION_F;
	crew = B_ION_Helipilot_F;
	textureList[] = {Ion,1};
	hiddenSelectionsTextures[] = {"A3\Air_F\Heli_Light_01\Data\Heli_Light_01_ext_ION_CO.paa"};
	animationList[] =
	{
		AddDoors,0,
		AddBackseats,1,
		AddTread_Short,0,
		AddTread,1
	};
	class TransportMagazines
	{
		mag_xx(SmokeShell,2);
		mag_xx(SmokeShellYellow,2);
		mag_xx(30Rnd_65x39_caseless_black_mag,4);
	};
	class TransportWeapons
	{
		weap_xx(arifle_MXC_Black_F,2);
	};
	class TransportItems
	{
		item_xx(FirstAidKit,2);
		item_xx(Toolkit,1);
		item_xx(ItemGPS,1);
	};
};