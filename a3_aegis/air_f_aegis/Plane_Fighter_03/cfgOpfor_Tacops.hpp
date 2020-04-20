class O_A_Ejection_Seat_Plane_Fighter_03_F: Ejection_Seat_Plane_Fighter_03_base_F
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
	faction = OPF_A_F;
	crew = O_A_Fighter_Pilot_F;
};
class O_A_Plane_Fighter_03_dynamicLoadout_F: O_Plane_Fighter_03_dynamicLoadout_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_A_Plane_Fighter_03_dynamicLoadout_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_A3_CfgVehicles_Plane_Fighter_03_base_F0;
	side = TEast;
	faction = OPF_A_F;
	crew = O_A_Fighter_Pilot_F;
	typicalCargo[] = {O_A_Fighter_Pilot_F};
	textureList[] =
	{
		Hex,1,
		Grey,0
	};
	hiddenSelectionsTextures[] =
	{
		"\A3\Air_F_Gamma\Plane_Fighter_03\Data\Plane_Fighter_03_body_1_brownhex_CO.paa",
		"\A3\Air_F_Gamma\Plane_Fighter_03\Data\Plane_Fighter_03_body_2_brownhex_CO.paa"
	};
	class EjectionSystem: EjectionSystem
	{
		EjectionSeatClass = O_A_Ejection_Seat_Plane_Fighter_03_F;
	};
};