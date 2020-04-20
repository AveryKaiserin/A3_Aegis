class B_W_Plane_Fighter_05_F: B_Plane_Fighter_05_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_W_Plane_Fighter_05_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TWest;
	faction = BLU_W_F;
	crew = B_W_Fighter_Pilot_F;
	typicalCargo[] = {B_W_Fighter_Pilot_F};
	class EjectionSystem: EjectionSystem
	{
		EjectionSeatClass = B_W_Ejection_Seat_Plane_Fighter_05_F;
	};
};
class B_W_Plane_Fighter_05_Stealth_F: B_Plane_Fighter_05_Stealth_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_W_Plane_Fighter_05_Stealth_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TWest;
	faction = BLU_W_F;
	crew = B_W_Fighter_Pilot_F;
	typicalCargo[] = {B_W_Fighter_Pilot_F};
	class EjectionSystem: EjectionSystem
	{
		EjectionSeatClass = B_W_Ejection_Seat_Plane_Fighter_05_F;
	};
};
class B_W_Ejection_Seat_Plane_Fighter_05_F: Ejection_Seat_Plane_Fighter_05_base_F
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
	faction = BLU_W_F;
	crew = B_W_Fighter_Pilot_F;
};