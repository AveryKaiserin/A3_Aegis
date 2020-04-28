class I_CDF_MBT_02_base_F: MBT_02_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	crew = I_CDF_Crew_F;
	typicalCargo[] = {I_CDF_Soldier_F};
	side = TGuerrila;
	faction = IND_CDF_F;
};
class I_CDF_MBT_02_cannon_F: I_CDF_MBT_02_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\I_CDF_MBT_02_cannon_F.jpg";
	scope = public;
	displayName = $STR_A3_CfgVehicles_MBT_02_base0;
	textureList[] = {CDF,1};
	hiddenSelectionsTextures[] =
	{
		"\A3_Atlas\Armor_F_Atlas\MBT_02\Data\MBT_02_body_CDF_CO.paa",
		"\A3_Atlas\Armor_F_Atlas\MBT_02\Data\MBT_02_turret_CDF_CO.paa",
		"\A3_Atlas\Armor_F_Atlas\MBT_02\Data\MBT_02_CDF_CO.paa",
		"\A3_Atlas\Armor_F_Atlas\Data\camonet_CDF_Green_CO.paa"
	};
	class TransportMagazines
	{
		mag_xx(30Rnd_545x39_Mag_F,6);
		mag_xx(SmokeShell,2);
		mag_xx(SmokeShellYellow,2);
	};
	class TransportWeapons
	{
		weap_xx(arifle_AKS_F,2);
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
						mag_2(150Rnd_127x108_Ball),
						SmokeLauncherMag
					};
				};
			};
			magazines[] =
			{
				16Rnd_125mm_APFSDS_T_Yellow,
                12Rnd_125mm_HEAT_T_Yellow,
                12Rnd_125mm_HE_T_Yellow,
                mag_20(200Rnd_762x51_Belt_Yellow),
                4Rnd_125mm_cannon_missiles
			};
		};
	};
};