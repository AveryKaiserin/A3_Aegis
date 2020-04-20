class B_Heli_Transport_01_medevac_F: Heli_Transport_01_medevac_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_Heli_Transport_01_medevac_F.jpg";
	scope = public;
	side = TWest;
	faction = BLU_F;
	crew = B_Helipilot_F;
	typicalCargo[] = {B_Helipilot_F};
	availableForSupportTypes[] = {Transport};
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Air_F_Aegis\Heli_Transport_01\Data\Heli_Transport_01_ext01_medevac_CO.paa",
		"\A3\Air_F_Beta\Heli_Transport_01\Data\Heli_Transport_01_ext02_CO.paa"
	};
};