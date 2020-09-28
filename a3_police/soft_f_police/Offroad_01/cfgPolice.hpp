class Police_I_P_Offroad_01_police_F: Offroad_01_civil_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Police\EditorPreviews_F_Police\Data\CfgVehicles\I_P_Offroad_01_police_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_A3_CfgVehicles_Offroad_Base0;
	weapons[] = {PoliceHorn};
	icon = "\A3\Soft_F_Exp\Offroad_01\Data\UI\Map_Offroad_01_gen_CA.paa";
	picture = "\A3\Soft_F_Exp\Offroad_01\Data\UI\Offroad_01_gen_CA.paa";
	side = TGuerrila;
	faction = Police_IND_P_F;
	crew = Police_I_P_PoliceOfficer_F;
	typicalCargo[] = {Police_I_P_PoliceOfficer_F};
	textureList[] = {Police,1};
	hiddenSelectionsTextures[] =
	{
		"\A3_Police\Soft_F_Police\Offroad_01\Data\Offroad_01_ext_police_CO.paa",
		"\A3_Police\Soft_F_Police\Offroad_01\Data\Offroad_01_ext_police_CO.paa"
	};
	animationList[] =
	{
		HidePolice,0,
		HideBumper1,0,
		HideBumper2,0,
		HideConstruction,0,
		HideDoor3,0.33,
		HideBackpacks,1
	};
};
class Police_I_P_Offroad_01_covered_F: Offroad_01_military_covered_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Police\EditorPreviews_F_Police\Data\CfgVehicles\I_P_Offroad_01_covered_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TGuerrila;
	faction = Police_IND_P_F;
	crew = Police_I_P_PoliceOfficer_F;
	typicalCargo[] = {Police_I_P_PoliceOfficer_F};
	weapons[] = {PoliceHorn};
	textureList[] = {Police,1};
	hiddenSelectionsTextures[] =
	{
		"\A3_Police\Soft_F_Police\Offroad_01\Data\Offroad_01_ext_police_CO.paa",
		"\A3_Police\Soft_F_Police\Offroad_01\Data\Offroad_01_ext_police_CO.paa",
		"\A3_Police\Soft_F_Police\Offroad_01\Data\Offroad_01_cover_police_CO.paa"
	};
	animationList[] =
    {
        hidePolice,0,
        HideRoofRack,1,
        HideCover,0,
        HideDoor3,0,
        HideBumper1,1,
        HideBumper2,0
    };
};
class Police_I_P_Offroad_01_comms_F: Offroad_01_military_comms_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Police\EditorPreviews_F_Police\Data\CfgVehicles\I_P_Offroad_01_comms_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TGuerrila;
	faction = Police_IND_P_F;
	crew = Police_I_P_PoliceOfficer_F;
	typicalCargo[] = {Police_I_P_PoliceOfficer_F};
	weapons[] = {PoliceHorn};
	textureList[] = {Police,1};
	hiddenSelectionsTextures[] =
	{
		"\A3_Police\Soft_F_Police\Offroad_01\Data\Offroad_01_ext_police_CO.paa",
		"\A3_Police\Soft_F_Police\Offroad_01\Data\Offroad_01_ext_police_CO.paa",
		"\A3_Police\Soft_F_Police\Offroad_01\Data\Offroad_01_cover_police_CO.paa"
	};
	animationList[] =
    {
        HideCover,0,
        HideDoor3,0,
        HideBumper1,1,
        HideBumper2,0
    };
};