class C_Heli_Transport_02_civil_F: Heli_Transport_02_civil_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\C_Heli_Transport_02_civil_F.jpg";
	scope = public;
	crew = C_man_pilot_F;
	typicalCargo[] = {C_man_pilot_F};
	side = TCivilian;
	faction = CIV_F;
	textureList[] =
	{
		Dahoman,1,
		ION,1,
		Vrana,1,
		Wave,1
	};
	hiddenSelectionsTextures[] =
	{
		"\A3\Air_F_Beta\Heli_Transport_02\Data\Skins\Heli_Transport_02_1_Dahoman_CO.paa",
		"\A3\Air_F_Beta\Heli_Transport_02\Data\Skins\Heli_Transport_02_2_Dahoman_CO.paa",
		"\A3\Air_F_Beta\Heli_Transport_02\Data\Skins\Heli_Transport_02_3_Dahoman_CO.paa",
		"\A3\Air_F_Beta\Heli_Transport_02\Data\Heli_Transport_02_int_02_CO.paa"
	};
	class TransportBackpacks
	{
		bag_xx(B_Parachute,16);
	};
	class TransportMagazines{};
	class TransportWeapons{};
	class TransportItems
	{
		item_xx(FirstAidKit,8);
	};
};