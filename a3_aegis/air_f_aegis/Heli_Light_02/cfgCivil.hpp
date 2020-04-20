class C_Heli_Light_02_civil_F: Heli_Light_02_civil_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\C_Heli_Light_02_civil_F.jpg";
	scope = public;
	scopeGarage = public;
	side = TCivilian;
	faction = CIV_F;
	crew = C_man_pilot_F;
	accuracy = 1.5;
	hiddenSelectionsTextures[] = {"\A3_Aegis\Air_F_Aegis\Heli_Light_02\Data\Heli_Light_02_ext_CIVILIAN_CO.paa"};
	textureList[] = {Blue,1};
	class TransportBackpacks{};
	class TransportMagazines{};
	class TransportWeapons{};
	class TransportItems
	{
		item_xx(FirstAidKit,2);
	};
};