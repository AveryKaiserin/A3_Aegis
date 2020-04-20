class O_R_MBT_02_base_F: MBT_02_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	mapSize = 10.31;
	side = TEast;
	faction = OPF_R_F;
	crew = O_R_Crew_F;
	typicalCargo[] =
	{
		O_R_Soldier_F,
		O_R_Soldier_F,
		O_R_Soldier_F
	};
	hiddenSelections[] =
	{
		camo1,
		camo2,
		camo3,
		camoNet
	};
	class TextureSources
	{
		class Green
		{
            displayName = $STR_A3_TEXTURESOURCES_GREEN0;
            author = $STR_A3_A_AveryTheKitty;
            textures[] =
            {
                "\A3_Aegis\Armor_F_Aegis\MBT_02\Data\MBT_02_body_RUS_CO.paa",
                "\A3_Aegis\Armor_F_Aegis\MBT_02\Data\MBT_02_turret_RUS_CO.paa",
                "\A3_Aegis\Armor_F_Aegis\MBT_02\Data\MBT_02_RUS_CO.paa",
                "\A3_Aegis\Armor_F_Aegis\Data\camonet_RUS_Stripe_Green_CO.paa"
            };
            factions[] = {OPF_R_F};
		};
		class Green_02
		{
            displayName = $STR_A3_A_TEXTURESOURCES_GREENJUNGLE0;
            author = $STR_A3_A_AveryTheKitty;
            textures[] =
            {
                "\A3_Aegis\Armor_F_Aegis\MBT_02\Data\MBT_02_body_RUS_CO.paa",
                "\A3_Aegis\Armor_F_Aegis\MBT_02\Data\MBT_02_turret_RUS_CO.paa",
                "\A3_Aegis\Armor_F_Aegis\MBT_02\Data\MBT_02_RUS_CO.paa",
                "\A3_Aegis\Armor_F_Aegis\Data\camonet_RUS_Stripe_Jungle_CO.paa"
            };
            factions[] = {OPF_R_F};
		};
		class Green_03
		{
            displayName = $STR_A3_A_TEXTURESOURCES_GREENDESERT0;
            author = $STR_A3_A_AveryTheKitty;
            textures[] =
            {
                "\A3_Aegis\Armor_F_Aegis\MBT_02\Data\MBT_02_body_RUS_CO.paa",
                "\A3_Aegis\Armor_F_Aegis\MBT_02\Data\MBT_02_turret_RUS_CO.paa",
                "\A3_Aegis\Armor_F_Aegis\MBT_02\Data\MBT_02_RUS_CO.paa",
                "\A3_Aegis\Armor_F_Aegis\Data\camonet_RUS_Stripe_Desert_CO.paa"
            };
            factions[] = {OPF_R_F};
		};
	};
	textureList[] =
	{
		Green,1,
		Green_02,0,
		Green_03,0
	};
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Armor_F_Aegis\MBT_02\Data\MBT_02_body_RUS_CO.paa",
		"\A3_Aegis\Armor_F_Aegis\MBT_02\Data\MBT_02_turret_RUS_CO.paa",
		"\A3_Aegis\Armor_F_Aegis\MBT_02\Data\MBT_02_RUS_CO.paa",
		"\A3_Aegis\Armor_F_Aegis\Data\camonet_RUS_Stripe_Green_CO.paa"
	};
	class HitPoints: HitPoints
	{
		class HitERA_Top_Left_1: HitERA_Front
		{
            name = era_L_T_1_point;
            armorComponent = hit_era_L_T_1;
            class DestructionEffects: DestructionEffects
            {
                class Explo: Explo
                {
                    position = era_L_T_1_pos;
                };
                class Smoke: Explo
                {
                    type = ERASmoke;
                    lifeTime = 0.1;
                };
            };
		};
		class HitERA_Top_Left_2: HitERA_Front
		{
            name = era_L_T_2_point;
            armorComponent = hit_era_L_T_2;
            class DestructionEffects: DestructionEffects
            {
                class Explo: Explo
                {
                    position = era_L_T_2_pos;
                };
                class Smoke: Explo
                {
                    type = ERASmoke;
                    lifeTime = 0.1;
                };
            };
		};
		class HitERA_Top_Right_1: HitERA_Front
		{
            name = era_R_T_1_point;
            armorComponent = hit_era_R_T_1;
            class DestructionEffects: DestructionEffects
            {
                class Explo: Explo
                {
                    position = era_R_T_1_pos;
                };
                class Smoke: Explo
                {
                    type = ERASmoke;
                    lifeTime = 0.1;
                };
            };
		};
		class HitERA_Top_Right_2: HitERA_Front
		{
            name = era_R_T_2_point;
            armorComponent = hit_era_R_T_2;
            class DestructionEffects: DestructionEffects
            {
                class Explo: Explo
                {
                    position = era_R_T_2_pos;
                };
                class Smoke: Explo
                {
                    type = ERASmoke;
                    lifeTime = 0.1;
                };
            };
		};
	};
};
class O_R_MBT_02_cannon_F: O_R_MBT_02_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	mapSize = 10.72;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_MBT_02_cannon_F.jpg";
	scope = public;
	textureList[] = {Green,1};
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
};
class O_R_MBT_02_arty_base_F: MBT_02_arty_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	side = TEast;
	faction = OPF_R_F;
	crew = O_R_Crew_F;
	typicalCargo[] =
	{
		O_R_Soldier_F,
		O_R_Soldier_F,
		O_R_Soldier_F
	};
	maxFordingDepth = -1.25;
	hiddenSelections[] =
	{
		camo1,
		camo2,
		camo3,
		camo4,
		camoNet
	};
	class TextureSources
	{
		class Green
		{
            displayName = $STR_A3_TEXTURESOURCES_GREEN0;
            author = $STR_A3_A_AveryTheKitty;
            textures[] =
            {
                "\A3_Aegis\Armor_F_Aegis\MBT_02\Data\MBT_02_body_RUS_CO.paa",
                "\A3_Aegis\Armor_F_Aegis\MBT_02\Data\MBT_02_scorcher_RUS_CO.paa",
                "\A3_Aegis\Armor_F_Aegis\MBT_02\Data\MBT_02_RUS_CO.paa",
                "\A3_Aegis\Data_F_Aegis\Vehicles\Turret_RUS_CO.paa",
                "\A3_Aegis\Armor_F_Aegis\Data\camonet_RUS_Stripe_Green_CO.paa"
            };
            factions[] = {OPF_R_F};
		};
            class Green_02
            {
            displayName = $STR_A3_A_TEXTURESOURCES_GREENJUNGLE0;
            author = $STR_A3_A_AveryTheKitty;
            textures[] =
            {
                "\A3_Aegis\Armor_F_Aegis\MBT_02\Data\MBT_02_body_RUS_CO.paa",
                "\A3_Aegis\Armor_F_Aegis\MBT_02\Data\MBT_02_scorcher_RUS_CO.paa",
                "\A3_Aegis\Armor_F_Aegis\MBT_02\Data\MBT_02_RUS_CO.paa",
                "\A3_Aegis\Data_F_Aegis\Vehicles\Turret_RUS_CO.paa",
                "\A3_Aegis\Armor_F_Aegis\Data\camonet_RUS_Stripe_Jungle_CO.paa"
            };
            factions[] = {OPF_R_F};
		};
		class Green_03
		{
            displayName = $STR_A3_A_TEXTURESOURCES_GREENDESERT0;
            author = $STR_A3_A_AveryTheKitty;
            textures[] =
            {
                "\A3_Aegis\Armor_F_Aegis\MBT_02\Data\MBT_02_body_RUS_CO.paa",
                "\A3_Aegis\Armor_F_Aegis\MBT_02\Data\MBT_02_scorcher_RUS_CO.paa",
                "\A3_Aegis\Armor_F_Aegis\MBT_02\Data\MBT_02_RUS_CO.paa",
                "\A3_Aegis\Data_F_Aegis\Vehicles\Turret_RUS_CO.paa",
                "\A3_Aegis\Armor_F_Aegis\Data\camonet_RUS_Stripe_Desert_CO.paa"
            };
            factions[] = {OPF_R_F};
		};
	};
	textureList[] =
	{
		Green,1,
		Green_02,0,
		Green_03,0
	};
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Armor_F_Aegis\MBT_02\Data\MBT_02_body_RUS_CO.paa",
		"\A3_Aegis\Armor_F_Aegis\MBT_02\Data\MBT_02_scorcher_RUS_CO.paa",
		"\A3_Aegis\Armor_F_Aegis\MBT_02\Data\MBT_02_RUS_CO.paa",
		"\A3_Aegis\Data_F_Aegis\Vehicles\Turret_RUS_CO.paa",
		"\A3_Aegis\Armor_F_Aegis\Data\camonet_RUS_Stripe_Green_CO.paa"
	};
};
class O_R_MBT_02_arty_F: O_R_MBT_02_arty_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	mapSize = 12.09;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_MBT_02_arty_F.jpg";
	scope = public;
	textureList[] = {Green,1};
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
};