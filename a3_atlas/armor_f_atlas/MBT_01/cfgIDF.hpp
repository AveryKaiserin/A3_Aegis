class I_I_MBT_01_arty_F: B_MBT_01_arty_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\I_I_MBT_01_arty_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_A3_A_CfgVehicles_I_I_MBT_01_arty_F0;
	side = TGuerrila;
	faction = IND_I_F;
	crew = I_I_crew_F;
	typicalCargo[] = {I_I_soldier_F};
	class TransportWeapons
	{
		weap_xx(arifle_TRG20_black_F,2);
	};
	class TransportMagazines
	{
		mag_xx(SmokeShell,2);
		mag_xx(SmokeShellGreen,2);
		mag_xx(30Rnd_556x45_Stanag,4);
	};
    textureList[] = {IDF,1};
	hiddenSelectionsTextures[] =
	{
		"\A3_Atlas\Armor_F_Atlas\MBT_01\Data\MBT_01_body_IDF_CO.paa",
		"\A3_Atlas\Armor_F_Atlas\MBT_01\Data\MBT_01_scorcher_IDF_CO.paa",
		"\A3_Atlas\Data_F_Atlas\Vehicles\Turret_IDF_CO.paa",
		"\A3\Armor_F\Data\camonet_greenbeige_CO.paa"
	};
    class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			class Turrets: Turrets
			{
				class CommanderOptics: CommanderOptics
				{
					magazines[] =
					{
						64Rnd_40mm_G_belt,
						mag_2(200Rnd_127x99_mag_Tracer_Yellow),
						SmokeLauncherMag
					};
				};
			};
		};
    };
	class TextureSources
	{
		class IDF
		{
			displayName = $STR_A3_A_TEXTURESOURCES_IDF0;
			author = $STR_A3_A_AveryTheKitty;
			textures[] =
			{
				"\A3_Atlas\Armor_F_Atlas\MBT_01\Data\MBT_01_body_IDF_CO.paa",
				"\A3_Atlas\Armor_F_Atlas\MBT_01\Data\MBT_01_scorcher_IDF_CO.paa",
				"\A3_Atlas\Data_F_Atlas\Vehicles\Turret_IDF_CO.paa",
				"\A3\Armor_F\Data\camonet_greenbeige_CO.paa"
			};
			factions[] = {IND_I_F};
		};
	};
};
class I_I_MBT_01_cannon_F: B_MBT_01_cannon_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\I_I_MBT_01_cannon_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_A3_A_CfgVehicles_I_I_MBT_01_cannon_F0;
	side = TGuerrila;
	faction = IND_I_F;
	crew = I_I_crew_F;
	typicalCargo[] = {I_I_soldier_F};
	class TransportWeapons
	{
		weap_xx(arifle_TRG20_black_F,2);
	};
	class TransportMagazines
	{
		mag_xx(SmokeShell,2);
		mag_xx(SmokeShellGreen,2);
		mag_xx(30Rnd_556x45_Stanag,4);
	};
    textureList[] = {IDF,1};
	hiddenSelectionsTextures[] =
	{
		"\A3_Atlas\Armor_F_Atlas\MBT_01\Data\MBT_01_body_IDF_CO.paa",
		"\A3_Atlas\Armor_F_Atlas\MBT_01\Data\MBT_01_tow_IDF_CO.paa",
		"\A3\Armor_F\Data\camonet_greenbeige_CO.paa"
	};
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			class Turrets: Turrets
			{
				class CommanderOptics: CommanderOptics{};
			};
			magazines[] =
			{
				24Rnd_120mm_APFSDS_shells_Tracer_Yellow,
				12Rnd_120mm_HE_shells_Tracer_Yellow,
				12Rnd_120mm_HEAT_MP_T_Yellow,
				mag_20(200Rnd_762x51_Belt_Yellow),
				4Rnd_120mm_cannon_missiles
			};
		};
	};
	class TextureSources
	{
		class IDF
		{
			displayName = $STR_A3_A_TEXTURESOURCES_IDF0;
			author = $STR_A3_A_AveryTheKitty;
			textures[] =
			{
				"\A3_Atlas\Armor_F_Atlas\MBT_01\Data\MBT_01_body_IDF_CO.paa",
				"\A3_Atlas\Armor_F_Atlas\MBT_01\Data\MBT_01_tow_IDF_CO.paa",
				"\A3\Armor_F\Data\camonet_greenbeige_CO.paa"
			};
			factions[] = {IND_I_F};
		};
	};
};