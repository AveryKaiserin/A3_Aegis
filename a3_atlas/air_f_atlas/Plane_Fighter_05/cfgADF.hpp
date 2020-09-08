class B_O_Plane_Fighter_05_F: Plane_Fighter_05_Base_F
{
	author = $STR_A3_A_AveryTheKitty_and_OlliKoskelainen;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_O_Plane_Fighter_05_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TWest;
	faction = BLU_O_F;
	crew = B_O_Fighter_Pilot_F;
	typicalCargo[] = {B_O_Fighter_Pilot_F};
	textureList[] = {ADF,1};
	hiddenSelectionsTextures[] =
	{
		"\A3_Atlas\Air_F_Atlas\Plane_Fighter_05\Data\Plane_Fighter_05_ext1_ADF_CO.paa",
		"\A3_Aegis\Air_F_Aegis\Plane_Fighter_05\Data\Plane_Fighter_05_ext2_CO.paa",
		"\A3_Aegis\Air_F_Aegis\Plane_Fighter_05\Data\Plane_Fighter_05_ext3_CO.paa",
		"\A3_Aegis\Air_F_Aegis\Plane_Fighter_05\Data\Plane_Fighter_05_pylon_CO.paa",
		"\A3_Aegis\Air_F_Aegis\Plane_Fighter_05\Data\Plane_Fighter_05_ext_glass_CA.paa",
		"\A3_Aegis\Air_F_Aegis\Plane_Fighter_05\Data\Plane_Fighter_05_int1_CO.paa",
		"\A3_Aegis\Air_F_Aegis\Plane_Fighter_05\Data\Plane_Fighter_05_int2_CO.paa"
	};
	class EjectionSystem: EjectionSystem
	{
		EjectionSeatClass = B_O_Ejection_Seat_Plane_Fighter_05_F;
	};
};
class B_O_Plane_Fighter_05_Stealth_F: B_Plane_Fighter_05_Stealth_F
{
	author = $STR_A3_A_AveryTheKitty_and_OlliKoskelainen;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_O_Plane_Fighter_05_Stealth_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TWest;
	faction = BLU_O_F;
	crew = B_O_Fighter_Pilot_F;
	typicalCargo[] = {B_O_Fighter_Pilot_F};
	textureList[] = {ADF,1};
	hiddenSelectionsTextures[] =
	{
		"\A3_Atlas\Air_F_Atlas\Plane_Fighter_05\Data\Plane_Fighter_05_ext1_ADF_CO.paa",
		"\A3_Aegis\Air_F_Aegis\Plane_Fighter_05\Data\Plane_Fighter_05_ext2_CO.paa",
		"\A3_Aegis\Air_F_Aegis\Plane_Fighter_05\Data\Plane_Fighter_05_ext3_CO.paa",
		"\A3_Aegis\Air_F_Aegis\Plane_Fighter_05\Data\Plane_Fighter_05_pylon_CO.paa",
		"\A3_Aegis\Air_F_Aegis\Plane_Fighter_05\Data\Plane_Fighter_05_ext_glass_CA.paa",
		"\A3_Aegis\Air_F_Aegis\Plane_Fighter_05\Data\Plane_Fighter_05_int1_CO.paa",
		"\A3_Aegis\Air_F_Aegis\Plane_Fighter_05\Data\Plane_Fighter_05_int2_CO.paa"
	};
	class EjectionSystem: EjectionSystem
	{
		EjectionSeatClass = B_O_Ejection_Seat_Plane_Fighter_05_F;
	};
};
class B_O_Ejection_Seat_Plane_Fighter_05_F: Ejection_Seat_Plane_Fighter_05_base_F
{
	class SimpleObject
	{
		eden = false;
		animate[] = {};
		hide[] =
		{
			zasleh,
			"zadni svetlo",
			"brzdove svetlo",
			clan,
			"podsvit pristroju",
			poskozeni
		};
		verticalOffset = 0.002;
		verticalOffsetWorld = 0;
		init = "[this, '', []] call bis_fnc_initVehicle";
	};
	author = $STR_A3_A_AveryTheKitty;
	scope = protected;
	side = TWest;
	faction = BLU_O_F;
	crew = B_O_Fighter_Pilot_F;
};