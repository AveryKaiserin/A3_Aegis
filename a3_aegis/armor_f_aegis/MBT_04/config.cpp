#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
class CfgVehicles
{
	// Arma 3
	class LandVehicle;
	class Tank: LandVehicle
	{
		class NewTurret;
	};
	class Tank_F: Tank
	{
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class Turrets
				{
					class CommanderOptics;
				};
			};
		};
	};
	class MBT_04_base_F: Tank_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						weapons[] =
						{
							HMG_NSVT,
							SmokeLauncher
						};
						magazines[] =
						{
							mag_2(450Rnd_127x108_Ball),
							SmokeLauncherMag
						};
					};
				};
				magazines[] =
				{
					20Rnd_125mm_APFSDS_T_Green,
					12Rnd_125mm_HEAT_T_Green,
					12Rnd_125mm_HE_T_Green,
					mag_2(2000Rnd_762x51_Belt_Green),
					4Rnd_125mm_cannon_missiles
				};
			};
		};
		class TextureSources
		{
			class Hex
			{
				factions[] = {OPF_F};
			};
			class GreenHex
			{
				factions[] = {OPF_T_F};
			};
			class Jungle;
			class Grey
			{
				factions[] =
				{
					OPF_F,
					OPF_T_F
				};
			};
			class Green
			{
				displayName = $STR_A3_TEXTURESOURCES_GREEN0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Aegis\Armor_F_Aegis\MBT_04\Data\MBT_04_exterior_RUkhk_1_CO.paa",
					"\A3_Aegis\Armor_F_Aegis\MBT_04\Data\MBT_04_exterior_RUkhk_2_CO.paa",
					"\A3_Aegis\Armor_F_Aegis\Data\camonet_RUS_green_CO.paa"
				};
				factions[] =
				{
					OPF_R_F,
					OPF_R_ard_F
				};
			};
		};
	};
	class MBT_04_cannon_base_F: MBT_04_base_F{};
	class MBT_04_command_base_F: MBT_04_base_F
	{
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
							mag_2(60Rnd_30mm_MP_shells_Tracer_Green),
							SmokeLauncherMag
						};
					};
				};
			};
		};
		hiddenSelections[] =
		{
			camo1,
			camo2,
			camo3,
			CamoNet
		};
		class TextureSources: TextureSources
		{
			class Hex: Hex
			{
				textures[] =
				{
					"\A3\Armor_F_Tank\MBT_04\Data\MBT_04_exterior_brown_hex_1_CO.paa",
					"\A3\Armor_F_Tank\MBT_04\Data\MBT_04_exterior_brown_hex_2_CO.paa",
					"\A3_Aegis\Armor_F_Aegis\MBT_04\Data\MBT_04_command_hex_CO.paa",
					"\A3\Armor_F\Data\camonet_CSAT_Hex_Desert_CO.paa"
				};
			};
			class GreenHex: GreenHex
			{
				textures[] =
				{
					"\A3\Armor_F_Tank\MBT_04\Data\MBT_04_exterior_green_hex_1_CO.paa",
					"\A3\Armor_F_Tank\MBT_04\Data\MBT_04_exterior_green_hex_2_CO.paa",
					"\A3_Aegis\Armor_F_Aegis\MBT_04\Data\MBT_04_command_hex_CO.paa",
					"\A3\Armor_F\Data\camonet_CSAT_Hex_Green_CO.paa"
				};
			};
			class Jungle: Jungle
			{
				textures[] =
				{
					"\A3\Armor_F_Tank\MBT_04\Data\MBT_04_exterior_jungle_1_CO.paa",
					"\A3\Armor_F_Tank\MBT_04\Data\MBT_04_exterior_jungle_2_CO.paa",
					"\A3_Aegis\Armor_F_Aegis\MBT_04\Data\MBT_04_command_jungle_CO.paa",
					"\A3\Armor_F\Data\camonet_CSAT_Stripe_Green_CO.paa"
				};
			};
			class Grey: Grey
			{
				textures[] =
				{
					"\A3\Armor_F_Tank\MBT_04\Data\MBT_04_exterior_1_CO.paa",
					"\A3\Armor_F_Tank\MBT_04\Data\MBT_04_exterior_2_CO.paa",
					"\A3\Armor_F_Tank\MBT_04\Data\MBT_04_command_CO.paa",
					"\A3\Armor_F\Data\camonet_CSAT_Stripe_Desert_CO.paa"
				};
			};
			class Green: Green
			{
				textures[] =
				{
					"\A3_Aegis\Armor_F_Aegis\MBT_04\Data\MBT_04_exterior_RUkhk_1_CO.paa",
					"\A3_Aegis\Armor_F_Aegis\MBT_04\Data\MBT_04_exterior_RUkhk_2_CO.paa",
					"\A3\Armor_F_Tank\MBT_04\Data\MBT_04_command_CO.paa",
					"\A3_Aegis\Armor_F_Aegis\Data\camonet_RUS_green_CO.paa"
				};
			};
		};
	};
	class O_MBT_04_cannon_F: MBT_04_cannon_base_F
	{
		class TransportItems
		{
			item_xx(FirstAidKit,10);
			item_xx(Toolkit,1);
			item_xx(Medikit,1);
		};
		class TransportBackpacks
		{
			bag_xx(B_FieldPack_ocamo,2);
		};
	};
	class O_MBT_04_command_F: MBT_04_command_base_F
	{
		hiddenSelectionsTextures[] =
		{
			"\A3\Armor_F_Tank\MBT_04\Data\MBT_04_exterior_brown_hex_1_CO.paa",
			"\A3\Armor_F_Tank\MBT_04\Data\MBT_04_exterior_brown_hex_2_CO.paa",
			"\A3_Aegis\Armor_F_Aegis\MBT_04\Data\MBT_04_command_hex_CO.paa",
			"\A3\Armor_F\Data\camonet_CSAT_Hex_Desert_CO.paa"
		};
		class TransportItems
		{
			item_xx(FirstAidKit,10);
			item_xx(Toolkit,1);
			item_xx(Medikit,1);
		};
		class TransportBackpacks
		{
			bag_xx(B_FieldPack_ocamo,2);
		};
	};
	class O_T_MBT_04_cannon_F: MBT_04_cannon_base_F
	{
		class TransportItems
		{
			item_xx(FirstAidKit,10);
			item_xx(Toolkit,1);
			item_xx(Medikit,1);
		};
		class TransportBackpacks
		{
			bag_xx(B_FieldPack_ghex_F,2);
		};
	};
	class O_T_MBT_04_command_F: MBT_04_command_base_F
	{
		hiddenSelectionsTextures[] =
		{
			"\A3\Armor_F_Tank\MBT_04\Data\MBT_04_exterior_green_hex_1_CO.paa",
			"\A3\Armor_F_Tank\MBT_04\Data\MBT_04_exterior_green_hex_2_CO.paa",
			"\A3_Aegis\Armor_F_Aegis\MBT_04\Data\MBT_04_command_hex_CO.paa",
			"\A3\Armor_F\Data\camonet_CSAT_Hex_Green_CO.paa"
		};
		class TransportItems
		{
			item_xx(FirstAidKit,10);
			item_xx(Toolkit,1);
			item_xx(Medikit,1);
		};
		class TransportBackpacks
		{
			bag_xx(B_FieldPack_ghex_F,2);
		};
	};
	// Arma 3 Aegis
	#include "cfgSpetsnaz.hpp"			// Russia
};