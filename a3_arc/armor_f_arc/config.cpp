#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
class CfgVehicles
{
	class Wheeled_APC_F;
	class AFV_Wheeled_01_base_F: Wheeled_APC_F
	{
		class TextureSources
		{
			class Green_Arctic
			{
				displayName = $STR_A3_A_A_TEXTURESOURCES_GREENARCTIC0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3\Armor_F_Tank\AFV_Wheeled_01\Data\AFV_Wheeled_01_EXT1_green_CO.paa",
					"\A3\Armor_F_Tank\AFV_Wheeled_01\Data\AFV_Wheeled_01_EXT2_green_CO.paa",
					"\A3\Armor_F_Tank\AFV_Wheeled_01\Data\AFV_Wheeled_01_wheel_green_CO.paa",
					"\A3\Armor_F\Data\camonet_NATO_Green_CO.paa",
					"\A3\Armor_F_Tank\AFV_Wheeled_01\Data\AFV_Wheeled_01_EXT3_CO.paa"
				};
				factions[] = {BLU_W_F};
			};
		};
	};
	class AFV_Wheeled_01_up_base_F: AFV_Wheeled_01_base_F
	{
		class TextureSources: TextureSources
		{
			class Green_Arctic
			{
				textures[] =
				{
					"\A3\Armor_F_Tank\AFV_Wheeled_01\Data\AFV_Wheeled_01_EXT1_green_CO.paa",
					"\A3\Armor_F_Tank\AFV_Wheeled_01\Data\AFV_Wheeled_01_EXT2_green_CO.paa",
					"\A3\Armor_F_Tank\AFV_Wheeled_01\Data\AFV_Wheeled_01_wheel_green_CO.paa",
					"\A3\Armor_F_Tank\AFV_Wheeled_01\Data\AFV_Wheeled_01_EXT3_CO.paa",
					"\A3\Armor_F_Tank\AFV_Wheeled_01\Data\AFV_commander_tow_CO.paa",
					"\A3\Armor_F\Data\camonet_NATO_Green_CO.paa",
					"\A3\Armor_F_Tank\AFV_Wheeled_01\Data\AFV_Wheeled_01_EXT3_CO.paa"
				};
			};
		};
	};
    class B_APC_Tracked_01_base_F;
	class B_APC_Tracked_01_rcws_F: B_APC_Tracked_01_base_F
	{
		class TextureSources
		{
			class Olive_02
			{
				displayName = $STR_A3_A_A_TEXTURESOURCES_OLIVEARCTIC0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
                    "\A3\Armor_F_Exp\APC_Tracked_01\Data\APC_Tracked_01_body_olive_CO.paa",
                    "\A3\Armor_F_Exp\APC_Tracked_01\Data\MBT_01_body_olive_CO.paa",
                    "\A3\Data_F_Exp\Vehicles\Turret_olive_CO.paa",
					"\A3_Arc\Armor_F_Arc\Data\camonet_NATO_Arctic_CO.paa"
				};
				factions[] = {BLU_W_F};
			};
		};
		textureList[] =
		{
			Olive,0,
            Olive_02,0,
			Sand,1
		};
	};
	class B_APC_Tracked_01_CRV_F: B_APC_Tracked_01_base_F
	{
		class TextureSources
		{
			class Olive_02
			{
				displayName = $STR_A3_A_A_TEXTURESOURCES_OLIVEARCTIC0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
                    "\A3\Armor_F_Exp\APC_Tracked_01\Data\APC_Tracked_01_body_CRV_olive_CO.paa",
                    "\A3\Armor_F_Exp\APC_Tracked_01\Data\MBT_01_body_olive_CO.paa",
                    "\A3\Data_F_Exp\Vehicles\Turret_olive_CO.paa",
                    "\A3\Armor_F_Exp\APC_Tracked_01\Data\APC_Tracked_01_CRV_olive_CO.paa",
					"\A3_Arc\Armor_F_Arc\Data\camonet_NATO_Arctic_CO.paa"
				};
				factions[] = {BLU_W_F};
			};
		};
		textureList[] =
		{
			Olive,0,
            Olive_02,0,
			Sand,1
		};
	};
	class B_APC_Tracked_01_AA_F: B_APC_Tracked_01_base_F
	{
		class TextureSources
		{
			class Olive_02
			{
				displayName = $STR_A3_A_A_TEXTURESOURCES_OLIVEARCTIC0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
                    "\A3\Armor_F_Exp\APC_Tracked_01\Data\APC_Tracked_01_AA_body_olive_CO.paa",
                    "\A3\Armor_F_Exp\APC_Tracked_01\Data\MBT_01_body_olive_CO.paa",
                    "\A3\Armor_F_Exp\APC_Tracked_01\Data\APC_Tracked_01_AA_tower_olive_CO.paa",
					"\A3_Arc\Armor_F_Arc\Data\camonet_NATO_Arctic_CO.paa"
				};
				factions[] = {BLU_W_F};
			};
		};
		textureList[] =
		{
			Olive,0,
            Olive_02,0,
			Sand,1
		};
	};
	class O_APC_Tracked_02_base_F;
	class O_APC_Tracked_02_cannon_F: O_APC_Tracked_02_base_F
	{
		class TextureSources
		{
			class Green_04
			{
				displayName = $STR_A3_A_A_TEXTURESOURCES_GREENARCTIC0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Aegis\Armor_F_Aegis\APC_Tracked_02\Data\APC_Tracked_02_ext_01_RUS_CO.paa",
					"\A3_Aegis\Armor_F_Aegis\APC_Tracked_02\Data\APC_Tracked_02_ext_02_RUS_CO.paa",
					"\A3_Aegis\Armor_F_Aegis\APC_Tracked_02\Data\RCWS30_RUS_CO.paa",
					"\A3_Arc\Armor_F_Arc\Data\camonet_RUS_Stripe_Arctic_CO.paa",
					"\A3_Aegis\Armor_F_Aegis\Data\cage_RUS_CO.paa"
				};
				factions[] = {OPF_R_F};
			};
		};
		textureList[] =
		{
			Hex,1,
			GreenHex,0,
			Green,0,
			Green_02,0,
			Green_03,0,
            Green_04,0
		};
	};
	class O_APC_Tracked_02_AA_F: O_APC_Tracked_02_base_F
	{
		class TextureSources
		{
			class Green_04
			{
				displayName = $STR_A3_A_A_TEXTURESOURCES_GREENARCTIC0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Aegis\Armor_F_Aegis\APC_Tracked_02\Data\APC_Tracked_02_ext_01_AA_RUS_CO.paa",
					"\A3_Aegis\Armor_F_Aegis\APC_Tracked_02\Data\APC_Tracked_02_ext_02_RUS_CO.paa",
					"\A3_Aegis\Armor_F_Aegis\APC_Tracked_02\Data\APC_Tracked_02_AA_tower_RUS_CO.paa",
					"\A3_Arc\Armor_F_Arc\Data\camonet_RUS_Stripe_Arctic_CO.paa",
					"\A3_Aegis\Armor_F_Aegis\Data\cage_RUS_CO.paa"
				};
				factions[] = {OPF_R_F};
			};
		};
		textureList[] =
		{
			Hex,1,
			GreenHex,0,
			Green,1,
			Green_02,0,
			Green_03,0,
			Green_04,0
		};
	};
	class O_R_APC_Tracked_02_base_F;
	class O_R_APC_Tracked_02_cannon_F: O_R_APC_Tracked_02_base_F
	{
		class TextureSources
		{
			class Green_04
			{
				displayName = $STR_A3_A_A_TEXTURESOURCES_GREENARCTIC0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Aegis\Armor_F_Aegis\APC_Tracked_02\Data\APC_Tracked_02_ext_01_RUS_CO.paa",
					"\A3_Aegis\Armor_F_Aegis\APC_Tracked_02\Data\APC_Tracked_02_ext_02_RUS_CO.paa",
					"\A3_Aegis\Armor_F_Aegis\APC_Tracked_02\Data\RCWS30_RUS_CO.paa",
					"\A3_Arc\Armor_F_Arc\Data\camonet_RUS_Stripe_Arctic_CO.paa",
					"\A3_Aegis\Armor_F_Aegis\Data\cage_RUS_CO.paa"
				};
				factions[] = {OPF_R_F};
			};
		};
		textureList[] =
		{
			Hex,1,
			GreenHex,0,
			Green,0,
			Green_02,0,
			Green_03,0,
            Green_04,0
		};
    };
	class O_R_APC_Tracked_02_AA_F: O_R_APC_Tracked_02_base_F
	{
		class TextureSources
		{
			class Green_04
			{
				displayName = $STR_A3_A_A_TEXTURESOURCES_GREENARCTIC0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Aegis\Armor_F_Aegis\APC_Tracked_02\Data\APC_Tracked_02_ext_01_AA_RUS_CO.paa",
					"\A3_Aegis\Armor_F_Aegis\APC_Tracked_02\Data\APC_Tracked_02_ext_02_RUS_CO.paa",
					"\A3_Aegis\Armor_F_Aegis\APC_Tracked_02\Data\APC_Tracked_02_AA_tower_RUS_CO.paa",
					"\A3_Arc\Armor_F_Arc\Data\camonet_RUS_Stripe_Arctic_CO.paa",
					"\A3_Aegis\Armor_F_Aegis\Data\cage_RUS_CO.paa"
				};
				factions[] = {OPF_R_F};
			};
		};
		textureList[] =
		{
			Hex,1,
			GreenHex,0,
			Green,1,
			Green_02,0,
			Green_03,0,
			Green_04,0
		};
    };
	class Tank_F;
	class APC_Tracked_03_base_F: Tank_F
	{
		class TextureSources
		{
			class Olive_02
			{
				displayName = $STR_A3_A_A_TEXTURESOURCES_OLIVEARCTIC0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Aegis\Armor_F_Aegis\APC_Tracked_03\Data\APC_Tracked_03_ext_olive_CO.paa",
					"\A3_Aegis\Armor_F_Aegis\APC_Tracked_03\Data\APC_Tracked_03_ext2_olive_CO.paa",
					"\A3_Arc\Armor_F_Arc\Data\camonet_NATO_Arctic_CO.paa",
					"\A3\Armor_F\Data\cage_olive_CO.paa"
				};
				factions[] = {BLU_A_F};
			};
		};
	};
    class B_A_APC_tracked_03_base_F;
	class B_A_APC_tracked_03_cannon_F: B_A_APC_tracked_03_base_F
	{
		textureList[] =
		{
			Olive_01,0,
            Olive_02,0,
			Sand_01,1
		};
	};
	class APC_Wheeled_01_base_F: Wheeled_APC_F
	{
		class TextureSources
		{
			class Olive_02
			{
				displayName = $STR_A3_A_A_TEXTURESOURCES_OLIVEARCTIC0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3\Armor_F_Exp\APC_Wheeled_01\Data\APC_Wheeled_01_base_olive_CO.paa",
					"\A3\Armor_F_Exp\APC_Wheeled_01\Data\APC_Wheeled_01_adds_olive_CO.paa",
					"\A3\Armor_F_Exp\APC_Wheeled_01\Data\APC_Wheeled_01_tows_olive_CO.paa",
					"\A3_Arc\Armor_F_Arc\Data\camonet_NATO_Arctic_CO.paa",
					"\A3\Armor_F\Data\cage_olive_CO.paa"
				};
				factions[] = {BLU_W_F};
			};
		};
	};
	class B_APC_Wheeled_01_base_F: APC_Wheeled_01_base_F{};
	class B_APC_Wheeled_01_cannon_F;
	class B_APC_Wheeled_01_medical_F: B_APC_Wheeled_01_base_F
	{
		class TextureSources: TextureSources
		{
			class Olive_02: Olive_02
			{
				textures[] =
				{
					"\A3_Aegis\Armor_F_Aegis\APC_Wheeled_01\Data\APC_Wheeled_01_base_medevac_olive_CO.paa",
					"\A3\Armor_F_Exp\APC_Wheeled_01\Data\APC_Wheeled_01_adds_olive_CO.paa",
					"\A3\Armor_F_Exp\APC_Wheeled_01\Data\APC_Wheeled_01_tows_olive_CO.paa",
					"\A3_Arc\Armor_F_Arc\Data\camonet_NATO_Arctic_CO.paa",
					"\A3\Armor_F\Data\cage_olive_CO.paa"
				};
			};
		};
	};
	class B_W_APC_Wheeled_01_cannon_F: B_APC_Wheeled_01_cannon_F
	{
		textureList[] =
		{
			Olive,1,
            Olive_02,0
		};
	};
	class B_W_APC_Wheeled_01_medical_F: B_APC_Wheeled_01_medical_F
	{
		textureList[] =
		{
			Olive,1,
            Olive_02,0
		};
	};
	class APC_Wheeled_02_base_F: Wheeled_APC_F
	{
		class TextureSources
		{
			class Green_03
			{
				displayName = $STR_A3_A_A_TEXTURESOURCES_GREENARCTIC0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Aegis\Armor_F_Aegis\APC_Wheeled_02\Data\APC_Wheeled_02_ext_01_RUS_CO.paa",
					"\A3_Aegis\Armor_F_Aegis\APC_Wheeled_02\Data\APC_Wheeled_02_ext_02_RUS_CO.paa",
					"\A3_Aegis\Data_F_Aegis\Vehicles\Turret_RUS_CO.paa",
					"\A3_Arc\Armor_F_Arc\Data\camonet_RUS_Stripe_Arctic_CO.paa",
					"\A3_Aegis\Armor_F_Aegis\Data\cage_RUS_CO.paa"
				};
				factions[] = {OPF_R_F};
			};
		};
		textureList[] =
		{
			Hex,1,
			GreenHex,0,
			Green,1,
			Green_02,0,
			Green_03,0,
			Green_04,0
		};
	};
	class APC_Wheeled_02_base_v2_F: APC_Wheeled_02_base_F{};
	class O_R_APC_Wheeled_02_rcws_v2_F: APC_Wheeled_02_base_v2_F
	{
		textureList[] =
		{
			Green,1,
			Green_02,0,
			Green_03,0,
			Green_04,0
		};
	};
	class APC_Wheeled_03_base_F: Wheeled_APC_F
	{
		textureList[] =
		{
			Indep,1,
			Indep_02,0,
			Indep_03,0,
			Guerilla_01,0,
			Guerilla_02,0,
			Guerilla_03,0,
			Sand_01,0,
			Olive_01,0,
			Olive_02,0
		};
		class TextureSources
		{
			class Olive_02
			{
				displayName = $STR_A3_A_A_TEXTURESOURCES_OLIVEARCTIC0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Aegis\Armor_F_Aegis\APC_Wheeled_03\Data\APC_Wheeled_03_Ext_olive_CO.paa",
					"\A3_Aegis\Armor_F_Aegis\APC_Wheeled_03\Data\APC_Wheeled_03_Ext2_olive_CO.paa",
					"\A3_Aegis\Armor_F_Aegis\APC_Wheeled_03\Data\RCWS30_olive_CO.paa",
					"\A3_Aegis\Armor_F_Aegis\APC_Wheeled_03\Data\APC_Wheeled_03_Ext_alpha_olive_CO.paa",
					"\A3_Arc\Armor_F_Arc\Data\camonet_NATO_Arctic_CO.paa",
					"\A3\Armor_F\Data\cage_olive_CO.paa"
				};
				factions[] = {BLU_W_F};
			};
		};
	};
	class B_MBT_01_base_F;
	class B_MBT_01_cannon_F: B_MBT_01_base_F
	{
		class TextureSources
		{
			class Olive_02
			{
				displayName = $STR_A3_A_A_TEXTURESOURCES_OLIVEARCTIC0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3\Armor_F_Exp\MBT_01\Data\MBT_01_body_olive_CO.paa",
					"\A3\Armor_F_Exp\MBT_01\Data\MBT_01_MLRS_olive_CO.paa",
					"\A3_Arc\Armor_F_Arc\Data\camonet_NATO_Arctic_CO.paa"
				};
				factions[] = {BLU_W_F};
			};
		};
	};
	class B_MBT_01_arty_base_F;
	class B_MBT_01_arty_F: B_MBT_01_arty_base_F
	{
		class TextureSources
		{
			class Olive_02
			{
				displayName = $STR_A3_A_A_TEXTURESOURCES_OLIVEARCTIC0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3\Armor_F_Exp\MBT_01\Data\MBT_01_body_olive_CO.paa",
					"\A3\Armor_F_Exp\MBT_01\Data\MBT_01_MLRS_olive_CO.paa",
					"\A3_Arc\Armor_F_Arc\Data\camonet_NATO_Arctic_CO.paa"
				};
				factions[] = {BLU_W_F};
			};
		};
	};
	class B_MBT_01_mlrs_base_F;
	class B_MBT_01_mlrs_F: B_MBT_01_mlrs_base_F
	{
		class TextureSources
		{
			class Olive_02
			{
				displayName = $STR_A3_A_A_TEXTURESOURCES_OLIVEARCTIC0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3\Armor_F_Exp\MBT_01\Data\MBT_01_body_olive_CO.paa",
					"\A3\Armor_F_Exp\MBT_01\Data\MBT_01_MLRS_olive_CO.paa",
					"\A3_Arc\Armor_F_Arc\Data\camonet_NATO_Arctic_CO.paa"
				};
				factions[] = {BLU_W_F};
			};
		};
	};
	class B_MBT_01_TUSK_F: B_MBT_01_cannon_F
	{
		class TextureSources
		{
			class Olive_02
			{
				displayName = $STR_A3_A_A_TEXTURESOURCES_OLIVEARCTIC0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3\Armor_F_Exp\MBT_01\Data\MBT_01_body_olive_CO.paa",
					"\A3\Armor_F_Exp\MBT_01\Data\MBT_01_MLRS_olive_CO.paa",
					"\A3\Armor_F_Exp\MBT_01\Data\mbt_addons_olive_CO.paa",
					"\A3_Arc\Armor_F_Arc\Data\camonet_NATO_Arctic_CO.paa"
				};
				factions[] = {BLU_W_F};
			};
		};
	};
	class MBT_02_base_F;
	class MBT_02_arty_base_F;
	class O_R_MBT_02_base_F: MBT_02_base_F
	{
		class TextureSources
		{
			class Green_04
			{
				displayName = $STR_A3_A_A_TEXTURESOURCES_GREENARCTIC0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Aegis\Armor_F_Aegis\MBT_02\Data\MBT_02_body_RUS_CO.paa",
					"\A3_Aegis\Armor_F_Aegis\MBT_02\Data\MBT_02_turret_RUS_CO.paa",
					"\A3_Aegis\Armor_F_Aegis\MBT_02\Data\MBT_02_RUS_CO.paa",
					"\A3_Arc\Armor_F_Arc\Data\camonet_RUS_Stripe_Arctic_CO.paa"
				};
				factions[] = {OPF_R_F};
			};
		};
		textureList[] =
		{
			Green,1,
			Green_02,0,
			Green_03,0,
			Green_04,0
		};
	};
	class O_R_MBT_02_arty_base_F: MBT_02_arty_base_F
	{
		class TextureSources
		{
			class Green_04
			{
				displayName = $STR_A3_A_A_TEXTURESOURCES_GREENARCTIC0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Aegis\Armor_F_Aegis\MBT_02\Data\MBT_02_body_RUS_CO.paa",
					"\A3_Aegis\Armor_F_Aegis\MBT_02\Data\MBT_02_scorcher_RUS_CO.paa",
					"\A3_Aegis\Armor_F_Aegis\MBT_02\Data\MBT_02_RUS_CO.paa",
					"\A3_Aegis\Data_F_Aegis\Vehicles\Turret_RUS_CO.paa",
					"\A3_Arc\Armor_F_Arc\Data\camonet_RUS_Stripe_Arctic_CO.paa"
				};
				factions[] = {OPF_R_F};
			};
		};
		textureList[] =
		{
			Green,1,
			Green_02,0,
			Green_03,0,
			Green_04,0
		};
	};
	class MBT_03_base_F: Tank_F
	{
		textureList[] =
		{
			Indep_01,1,
			Indep_02,0,
			Indep_03,0,
			Sand_01,0,
			Olive_01,0,
			Olive_02,0
		};
		class TextureSources
		{
			class Olive_02
			{
				displayName = $STR_A3_A_A_TEXTURESOURCES_OLIVEARCTIC0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Aegis\Armor_F_Aegis\MBT_03\Data\MBT_03_ext01_olive_CO.paa",
					"\A3_Aegis\Armor_F_Aegis\MBT_03\Data\MBT_03_ext02_olive_CO.paa",
					"\A3_Aegis\Armor_F_Aegis\MBT_03\Data\MBT_03_rcws_olive_CO.paa",
					"\A3_Arc\Armor_F_Arc\Data\camonet_NATO_Arctic_CO.paa"
				};
				factions[] = {BLU_W_F};
			};
		};
	};
	class MBT_04_base_F: Tank_F
	{
		class TextureSources
		{
			class Green_03
			{
				displayName = $STR_A3_A_A_TEXTURESOURCES_GREENARCTIC0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Aegis\Armor_F_Aegis\MBT_04\Data\MBT_04_exterior_RUS_1_CO.paa",
					"\A3_Aegis\Armor_F_Aegis\MBT_04\Data\MBT_04_exterior_RUS_2_CO.paa",
					"\A3_Arc\Armor_F_Arc\Data\camonet_RUS_Stripe_Arctic_CO.paa"
				};
				factions[] = {OPF_R_F};
			};
		};
	};
	class MBT_04_cannon_base_F;
	class MBT_04_command_base_F: MBT_04_base_F
	{
		class TextureSources
		{
			class Green_03
			{
				displayName = $STR_A3_A_A_TEXTURESOURCES_GREENARCTIC0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Aegis\Armor_F_Aegis\MBT_04\Data\MBT_04_exterior_RUS_1_CO.paa",
					"\A3_Aegis\Armor_F_Aegis\MBT_04\Data\MBT_04_exterior_RUS_2_CO.paa",
					"\A3_Aegis\Armor_F_Aegis\MBT_04\Data\MBT_04_command_RUS_CO.paa",
					"\A3_Arc\Armor_F_Arc\Data\camonet_RUS_Stripe_Arctic_CO.paa"
				};
				factions[] = {OPF_R_F};
			};
		};
	};
	class O_R_MBT_04_cannon_F: MBT_04_cannon_base_F
	{
		textureList[] =
		{
			Green,1,
			Green_02,0,
			Green_03,0,
			Green_04,0
		};
	};
	class O_R_MBT_04_command_F: MBT_04_command_base_F
	{
		textureList[] =
		{
			Green,1,
			Green_02,0,
			Green_03,0,
			Green_04,0
		};
	};
};