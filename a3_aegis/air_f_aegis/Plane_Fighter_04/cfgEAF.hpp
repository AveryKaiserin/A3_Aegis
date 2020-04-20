class I_E_Plane_Fighter_04_F: Plane_Fighter_04_Base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_E_Plane_Fighter_04_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_A3_A_CfgVehicles_I_E_Plane_Fighter_04_F0;
	side = TGuerrila;
	faction = IND_E_F;
	crew = I_E_Fighter_Pilot_F;
	typicalCargo[] = {I_E_Fighter_Pilot_F};
	textureList[] =
	{
		EAF,1,
		Green,0
	};
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Air_F_Aegis\Plane_Fighter_04\Data\Fighter_04_fuselage_01_EAF_CO.paa",
		"\A3_Aegis\Air_F_Aegis\Plane_Fighter_04\Data\Fighter_04_fuselage_02_EAF_CO.paa",
		"\A3\Air_F_Jets\Plane_Fighter_04\Data\Fighter_04_misc_01_CO.paa",
		"\A3\Air_F_Jets\Plane_Fighter_04\Data\Numbers\Fighter_04_number_05_CA.paa",
		"\A3\Air_F_Jets\Plane_Fighter_04\Data\Numbers\Fighter_04_number_01_CA.paa",
		"\A3\Air_F_Jets\Plane_Fighter_04\Data\Numbers\Fighter_04_number_04_CA.paa"
	};
	magazines[] =
	{
		magazine_Fighter04_Gun20mm_AA_x120_red,
		Laserbatteries,
		240Rnd_CMFlare_Chaff_Magazine
	};
	class EjectionSystem: EjectionSystem
	{
		EjectionSeatClass = I_E_Ejection_Seat_Plane_Fighter_04_F;
	};
};
class I_Ejection_Seat_Plane_Fighter_04_F: Ejection_Seat_Plane_Fighter_04_base_F
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
	side = TGuerilla;
	faction = IND_E_F;
	crew = I_E_Fighter_Pilot_F;
};