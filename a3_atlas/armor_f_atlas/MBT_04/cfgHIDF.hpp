class B_HIDF_MBT_04_cannon_F: MBT_04_cannon_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_HIDF_MBT_04_cannon_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_A3_CfgVehicles_O_MBT_04_cannon_F0;
	side = TWest;
	faction = BLU_HIDF_F;
	crew = B_HIDF_Crew_F;
	typicalCargo[] = {B_HIDF_Soldier_F};
	textureList[] = {Jungle,1};
	hiddenSelectionsTextures[] =
	{
		"\A3\Armor_F_Tank\MBT_04\Data\MBT_04_exterior_jungle_1_CO.paa",
		"\A3\Armor_F_Tank\MBT_04\Data\MBT_04_exterior_jungle_2_CO.paa",
		"\A3\Armor_F\Data\camonet_CSAT_Stripe_Green_CO.paa"
	};
	class TransportWeapons
	{
		weap_xx(arifle_G36C_F,2);
	};
	class TransportMagazines
	{
		mag_xx(SmokeShell,2);
		mag_xx(SmokeShellYellow,2);
		mag_xx(30Rnd_65x39_caseless_msbs_mag,4);
	};
	class TransportBackpacks
	{
		bag_xx(B_Fieldpack_oli,3);
	};
	class TransportItems
	{
		item_xx(FirstAidKit,10);
		item_xx(Toolkit,1);
		item_xx(Medikit,1);
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
						mag_2(450Rnd_127x108_Ball),
						SmokeLauncherMag
					};
				};
			};
			magazines[] =
			{
				20Rnd_125mm_APFSDS_T_Red,
				12Rnd_125mm_HEAT_T_Red,
				12Rnd_125mm_HE_T_Red,
				mag_2(2000Rnd_762x51_Belt_Red),
				4Rnd_125mm_cannon_missiles
			};
		};
	};
};
class B_HIDF_MBT_04_command_F: MBT_04_command_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_HIDF_MBT_04_command_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_A3_CfgVehicles_O_MBT_04_command_F0;
	side = TWest;
	faction = BLU_HIDF_F;
	crew = B_HIDF_Crew_F;
	typicalCargo[] = {B_HIDF_Soldier_F};
	textureList[] = {Jungle,1};
	hiddenSelectionsTextures[] =
	{
		"\A3\Armor_F_Tank\MBT_04\Data\MBT_04_exterior_jungle_1_CO.paa",
		"\A3\Armor_F_Tank\MBT_04\Data\MBT_04_exterior_jungle_2_CO.paa",
		"\A3\Armor_F_Tank\MBT_04\Data\MBT_04_command_jungle_CO.paa",
		"\A3\Armor_F\Data\camonet_CSAT_Stripe_Green_CO.paa"
	};
	class TransportWeapons
	{
		weap_xx(arifle_G36C_F,2);
	};
	class TransportMagazines
	{
		mag_xx(SmokeShell,2);
		mag_xx(SmokeShellYellow,2);
		mag_xx(30Rnd_65x39_caseless_msbs_mag,4);
	};
	class TransportBackpacks
	{
		bag_xx(B_Fieldpack_oli,3);
	};
	class TransportItems
	{
		item_xx(FirstAidKit,10);
		item_xx(Toolkit,1);
		item_xx(Medikit,1);
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
						mag_2(60Rnd_30mm_MP_shells_Tracer_Red),
						SmokeLauncherMag
					};
				};
			};
			magazines[] =
			{
				20Rnd_125mm_APFSDS_T_Red,
				12Rnd_125mm_HEAT_T_Red,
				12Rnd_125mm_HE_T_Red,
				mag_2(2000Rnd_762x51_Belt_Red),
				4Rnd_125mm_cannon_missiles
			};
		};
	};
};