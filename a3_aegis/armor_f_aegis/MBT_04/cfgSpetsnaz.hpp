class O_R_MBT_04_cannon_F: MBT_04_cannon_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_MBT_04_cannon_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_A3_CfgVehicles_O_MBT_04_cannon_F0;
	side = TEast;
	faction = OPF_R_F;
	crew = O_R_Crew_F;
	typicalCargo[] = {O_R_Soldier_F};
	textureList[] =
	{
		Green,1,
		Green_02,0,
		Green_03,0
	};
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Armor_F_Aegis\MBT_04\Data\MBT_04_exterior_RUS_1_CO.paa",
		"\A3_Aegis\Armor_F_Aegis\MBT_04\Data\MBT_04_exterior_RUS_2_CO.paa",
		"\A3_Aegis\Armor_F_Aegis\Data\camonet_RUS_Stripe_Green_CO.paa"
	};
	class TransportWeapons
	{
		weap_xx(arifle_AK12U_545_F,2);
	};
	class TransportMagazines
	{
		mag_xx(SmokeShell,2);
		mag_xx(SmokeShellRed,2);
		mag_xx(30Rnd_545x39_black_Mag_F,4);
	};
	class TransportBackpacks
	{
		bag_xx(B_AssaultPack_taiga_F,3);
	};
	class TransportItems
	{
		item_xx(FirstAidKit,10);
		item_xx(Toolkit,1);
		item_xx(Medikit,1);
	};
};
class O_R_MBT_04_command_F: MBT_04_command_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_MBT_04_command_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_A3_CfgVehicles_O_MBT_04_command_F0;
	side = TEast;
	faction = OPF_R_F;
	crew = O_R_Crew_F;
	typicalCargo[] = {O_R_Soldier_F};
	textureList[] =
	{
		Green,1,
		Green_02,0,
		Green_03,0
	};
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Armor_F_Aegis\MBT_04\Data\MBT_04_exterior_RUS_1_CO.paa",
		"\A3_Aegis\Armor_F_Aegis\MBT_04\Data\MBT_04_exterior_RUS_2_CO.paa",
		"\A3_Aegis\Armor_F_Aegis\MBT_04\Data\MBT_04_command_RUS_CO.paa",
		"\A3_Aegis\Armor_F_Aegis\Data\camonet_RUS_Stripe_Green_CO.paa"
	};
	class TransportWeapons
	{
		weap_xx(arifle_AK12U_545_F,2);
	};
	class TransportMagazines
	{
		mag_xx(SmokeShell,2);
		mag_xx(SmokeShellRed,2);
		mag_xx(30Rnd_545x39_black_Mag_F,4);
	};
	class TransportBackpacks
	{
		bag_xx(B_AssaultPack_taiga_F,3);
	};
	class TransportItems
	{
		item_xx(FirstAidKit,10);
		item_xx(Toolkit,1);
		item_xx(Medikit,1);
	};
};