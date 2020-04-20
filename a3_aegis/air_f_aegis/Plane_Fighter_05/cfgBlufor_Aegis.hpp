class B_A_Plane_Fighter_05_F: B_Plane_Fighter_05_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Plane_Fighter_05_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TWest;
	faction = BLU_A_F;
	crew = B_A_Fighter_Pilot_F;
	typicalCargo[] = {B_A_Fighter_Pilot_F};
	textureList[] = {DarkGrey,1};
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Air_F_Aegis\Plane_Fighter_05\Data\Plane_Fighter_05_BAF_CO.paa",
		"\A3_Aegis\Air_F_Aegis\Plane_Fighter_05\Data\Plane_Fighter_05_pylon_CO.paa"
	};
	class TextureSources: TextureSources
	{
		class DarkGrey: DarkGrey
		{
            textures[] =
            {
                "\A3_Aegis\Air_F_Aegis\Plane_Fighter_05\Data\Plane_Fighter_05_BAF_CO.paa",
                "\A3_Aegis\Air_F_Aegis\Plane_Fighter_05\Data\Plane_Fighter_05_pylon_CO.paa"
            };
            factions[] = {BLU_A_F};
		};
	};
	class EjectionSystem: EjectionSystem
	{
		EjectionSeatClass = B_A_Ejection_Seat_Plane_Fighter_05_F;
	};
};
class B_A_Plane_Fighter_05_Stealth_F: B_Plane_Fighter_05_Stealth_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Plane_Fighter_05_Stealth_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TWest;
	faction = BLU_A_F;
	crew = B_A_Fighter_Pilot_F;
	typicalCargo[] = {B_A_Fighter_Pilot_F};
	textureList[] = {DarkGrey,1};
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Air_F_Aegis\Plane_Fighter_05\Data\Plane_Fighter_05_BAF_CO.paa",
		"\A3_Aegis\Air_F_Aegis\Plane_Fighter_05\Data\Plane_Fighter_05_pylon_CO.paa"
	};
	class TextureSources: TextureSources
	{
		class DarkGrey: DarkGrey
		{
            textures[] =
            {
                "\A3_Aegis\Air_F_Aegis\Plane_Fighter_05\Data\Plane_Fighter_05_BAF_CO.paa",
                "\A3_Aegis\Air_F_Aegis\Plane_Fighter_05\Data\Plane_Fighter_05_pylon_CO.paa"
            };
            factions[] = {BLU_A_F};
		};
	};
	class EjectionSystem: EjectionSystem
	{
		EjectionSeatClass = B_A_Ejection_Seat_Plane_Fighter_05_F;
	};
};
class B_A_Ejection_Seat_Plane_Fighter_05_F: Ejection_Seat_Plane_Fighter_05_base_F
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
	faction = BLU_A_F;
	crew = B_A_Fighter_Pilot_F;
};
class B_A_Plane_Fighter_05_tna_F: B_A_Plane_Fighter_05_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Plane_Fighter_05_tna_F.jpg";
	faction = BLU_A_tna_F;
	crew = B_A_Fighter_Pilot_tna_F;
	typicalCargo[] = {B_A_Fighter_Pilot_tna_F};
	class EjectionSystem: EjectionSystem
	{
		EjectionSeatClass = B_A_Ejection_Seat_Plane_Fighter_05_tna_F;
	};
};
class B_A_Plane_Fighter_05_Stealth_tna_F: B_A_Plane_Fighter_05_Stealth_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Plane_Fighter_05_Stealth_tna_F.jpg";
	faction = BLU_A_tna_F;
	crew = B_A_Fighter_Pilot_tna_F;
	typicalCargo[] = {B_A_Fighter_Pilot_tna_F};
	class EjectionSystem: EjectionSystem
	{
		EjectionSeatClass = B_A_Ejection_Seat_Plane_Fighter_05_tna_F;
	};
};
class B_A_Ejection_Seat_Plane_Fighter_05_tna_F: B_A_Ejection_Seat_Plane_Fighter_05_F
{
	author = $STR_A3_A_AveryTheKitty;
	faction = BLU_A_tna_F;
	crew = B_A_Fighter_Pilot_tna_F;
};
class B_A_Plane_Fighter_05_wdl_F: B_A_Plane_Fighter_05_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Plane_Fighter_05_wdl_F.jpg";
	faction = BLU_A_wdl_F;
	crew = B_A_Fighter_Pilot_wdl_F;
	typicalCargo[] = {B_A_Fighter_Pilot_wdl_F};
	class EjectionSystem: EjectionSystem
	{
		EjectionSeatClass = B_A_Ejection_Seat_Plane_Fighter_05_wdl_F;
	};
};
class B_A_Plane_Fighter_05_Stealth_wdl_F: B_A_Plane_Fighter_05_Stealth_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Plane_Fighter_05_Stealth_wdl_F.jpg";
	faction = BLU_A_wdl_F;
	crew = B_A_Fighter_Pilot_wdl_F;
	typicalCargo[] = {B_A_Fighter_Pilot_wdl_F};
	class EjectionSystem: EjectionSystem
	{
		EjectionSeatClass = B_A_Ejection_Seat_Plane_Fighter_05_wdl_F;
	};
};
class B_A_Ejection_Seat_Plane_Fighter_05_wdl_F: B_A_Ejection_Seat_Plane_Fighter_05_F
{
	author = $STR_A3_A_AveryTheKitty;
	faction = BLU_A_wdl_F;
	crew = B_A_Fighter_Pilot_wdl_F;
};