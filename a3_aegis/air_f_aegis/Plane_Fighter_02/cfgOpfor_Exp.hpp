class O_T_Plane_Fighter_02_ghex_F: O_Plane_Fighter_02_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_T_Plane_Fighter_02_ghex_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TEast;
	faction = OPF_T_F;
	crew = O_T_Fighter_Pilot_F;
	typicalCargo[] = {O_T_Fighter_Pilot_F};
	textureList[] =
	{
		CamoGreyHex,0,
		CamoGreenHex,1
	};
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Air_F_Aegis\Plane_Fighter_02\Data\Fighter_02_fuselage_01_ghex_CO.paa",
		"\A3_Aegis\Air_F_Aegis\Plane_Fighter_02\Data\Fighter_02_fuselage_02_ghex_CO.paa",
		"\A3_Aegis\Air_F_Aegis\Plane_Fighter_02\Data\Fighter_02_fuselage_01_ghex_CO.paa",
		"\A3\Air_F_Jets\Plane_Fighter_02\Data\Numbers\Fighter_02_number_02_CO.paa",
		"\A3\Air_F_Jets\Plane_Fighter_02\Data\Numbers\Fighter_02_number_00_CO.paa",
		"\A3\Air_F_Jets\Plane_Fighter_02\Data\Numbers\Fighter_02_number_01_CO.paa",
		"\A3\Data_F\clear_empty.paa"
	};
	class EjectionSystem: EjectionSystem
	{
		EjectionSeatClass = O_T_Ejection_Seat_Plane_Fighter_02_F;
	};
};
class O_T_Plane_Fighter_02_Stealth_ghex_F: O_Plane_Fighter_02_Stealth_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_T_Plane_Fighter_02_Stealth_ghex_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TEast;
	faction = OPF_T_F;
	crew = O_T_Fighter_Pilot_F;
	typicalCargo[] = {O_T_Fighter_Pilot_F};
	textureList[] =
	{
		CamoGreyHex,0,
		CamoGreenHex,1
	};
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Air_F_Aegis\Plane_Fighter_02\Data\Fighter_02_fuselage_01_ghex_CO.paa",
		"\A3_Aegis\Air_F_Aegis\Plane_Fighter_02\Data\Fighter_02_fuselage_02_ghex_CO.paa",
		"\A3_Aegis\Air_F_Aegis\Plane_Fighter_02\Data\Fighter_02_fuselage_01_ghex_CO.paa",
		"\A3\Air_F_Jets\Plane_Fighter_02\Data\Numbers\Fighter_02_number_02_CO.paa",
		"\A3\Air_F_Jets\Plane_Fighter_02\Data\Numbers\Fighter_02_number_00_CO.paa",
		"\A3\Air_F_Jets\Plane_Fighter_02\Data\Numbers\Fighter_02_number_01_CO.paa",
		"\A3\Data_F\clear_empty.paa"
	};
	class EjectionSystem: EjectionSystem
	{
		EjectionSeatClass = O_T_Ejection_Seat_Plane_Fighter_02_F;
	};
};
class O_T_Ejection_Seat_Plane_Fighter_02_F: Ejection_Seat_Plane_Fighter_02_base_F
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
	side = TEast;
	faction = OPF_T_F;
	crew = O_T_Fighter_Pilot_F;
};