class Police_I_P_Boat_Civil_01_police_F: Boat_Civil_01_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Police\EditorPreviews_F_Police\Data\CfgVehicles\I_P_Boat_Civil_01_police_F.jpg";
	scope = public;
	displayName = $STR_A3_CfgVehicles_C_Boat_Civil_01_police0;
	side = TGuerrila;
	faction = Police_IND_P_F;
	crew = Police_I_P_PoliceOfficer_F;
	typicalCargo[] = {Police_I_P_PoliceOfficer_F};
	class AnimationSources: AnimationSources
	{
		class Proxy
		{
			source = user;
			animPeriod = 1;
			initPhase = false;
		};
		class Beacons
		{
			source = user;
			animPeriod = 1;
			initPhase = false;
		};
	};
	class EventHandlers: EventHandlers
	{
		init = "_this select 0 animate ['HidePoliceSigns',0]; _this select 0 animate ['HideRescueSigns',1]; _this select 0 animate ['HidePolice',0];";
	};
	hiddenSelectionsTextures[] =
	{
		"\A3\Boat_F_Gamma\Boat_Civil_01\Data\Boat_Civil_01_ext_police_CO.paa",
		"\A3\Boat_F_Gamma\Boat_Civil_01\Data\Boat_Civil_01_int_police_CO.paa"
	};
	textureList[] = {Police,1};
	animationList[] =
	{
		hidePolice,0,
		HideRescueSigns,1,
		HidePoliceSigns,0
	};
    // TFAR compatibility
    tf_hasLRradio = true;
};