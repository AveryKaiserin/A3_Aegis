class O_E_Offroad_01_F: O_G_Offroad_01_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Opf\EditorPreviews_F_Opf\Data\CfgVehicles\O_E_Offroad_01_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TEast;
	faction = OPF_E_F;
	crew = O_E_Soldier_1_F;
	typicalCargo[] = {O_E_Soldier_1_F};
	textureList[] =
	{
		Guerilla_01,1,
		Guerilla_02,1,
		Guerilla_04,1,
		Guerilla_05,1,
		Guerilla_07,1,
		Guerilla_08,1,
		Guerilla_09,1
	};
};
class O_E_Offroad_01_AT_F: O_G_Offroad_01_AT_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Opf\EditorPreviews_F_Opf\Data\CfgVehicles\O_E_Offroad_01_AT_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TEast;
	faction = OPF_E_F;
	crew = O_E_Soldier_1_F;
	typicalCargo[] = {O_E_Soldier_1_F};
	textureList[] =
	{
		Guerilla_01,1,
		Guerilla_02,1,
		Guerilla_04,1,
		Guerilla_05,1,
		Guerilla_07,1,
		Guerilla_08,1,
		Guerilla_09,1
	};
};
class O_E_Offroad_01_armed_F: O_G_Offroad_01_armed_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Opf\EditorPreviews_F_Opf\Data\CfgVehicles\O_E_Offroad_01_armed_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TEast;
	faction = OPF_E_F;
	crew = O_E_Soldier_1_F;
	typicalCargo[] = {O_E_Soldier_1_F};
	textureList[] =
	{
		Guerilla_01,1,
		Guerilla_02,1,
		Guerilla_04,1,
		Guerilla_05,1,
		Guerilla_07,1,
		Guerilla_08,1,
		Guerilla_09,1
	};
	class Turrets: Turrets
	{
		class M2_Turret: M2_Turret
		{
			magazines[] = {mag_3(100Rnd_127x99_mag_Tracer_Green)};
		};
	};
};