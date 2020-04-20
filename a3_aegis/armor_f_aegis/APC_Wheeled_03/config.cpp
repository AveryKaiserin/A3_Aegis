#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
class CfgVehicles
{
	// Arma 3
	class Car_F;
	class Wheeled_APC_F: Car_F
	{
		class Turrets
		{
			class MainTurret;
		};
	};
	class APC_Wheeled_03_base_F: Wheeled_APC_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret{};
		};
		class AnimationSources;
		textureList[] =
		{
			Indep,1,
			Indep_02,0,
			Indep_03,0,
			Guerilla_01,0,
			Guerilla_02,0,
			Guerilla_03,0,
			Sand_01,0,
			Olive_01,0
		};
		class TextureSources
		{
			class Indep_02
			{
				textures[] =
				{
					"\A3\Armor_F_Gamma\APC_Wheeled_03\Data\APC_Wheeled_03_Ext_INDP_CO.paa",
					"\A3\Armor_F_Gamma\APC_Wheeled_03\Data\APC_Wheeled_03_Ext2_INDP_CO.paa",
					"\A3\Armor_F_Gamma\APC_Wheeled_03\Data\RCWS30_INDP_CO.paa",
					"\A3\Armor_F_Gamma\APC_Wheeled_03\Data\APC_Wheeled_03_Ext_alpha_INDP_CO.paa",
					"\A3\Armor_F\Data\camonet_AAF_Digi_Jungle_CO.paa",
					"\A3\Armor_F\Data\cage_AAF_CO.paa"
				};
			};
			class Indep_03
			{
				textures[] =
				{
					"\A3\Armor_F_Gamma\APC_Wheeled_03\Data\APC_Wheeled_03_Ext_INDP_CO.paa",
					"\A3\Armor_F_Gamma\APC_Wheeled_03\Data\APC_Wheeled_03_Ext2_INDP_CO.paa",
					"\A3\Armor_F_Gamma\APC_Wheeled_03\Data\RCWS30_INDP_CO.paa",
					"\A3\Armor_F_Gamma\APC_Wheeled_03\Data\APC_Wheeled_03_Ext_alpha_INDP_CO.paa",
					"\A3\Armor_F\Data\camonet_AAF_Digi_Desert_CO.paa",
					"\A3\Armor_F\Data\cage_AAF_CO.paa"
				};
			};
			class Guerilla_03
			{
				textures[] =
				{
					"\A3\Data_F_Tacops\Data\APC_Wheeled_03_Ext_IG_03_CO.paa",
					"\A3\Data_F_Tacops\Data\APC_Wheeled_03_Ext2_IG_03_CO.paa",
					"\A3\Data_F_Tacops\Data\RCWS30_IG_03_CO.paa",
					"\A3\Data_F_Tacops\Data\APC_Wheeled_03_Ext_alpha_IG_03_CO.paa",
					"\A3_Aegis\Armor_F_Aegis\Data\camonet_AAF_FIA_green_CO.paa",
					"\A3\Armor_F\Data\cage_G3_CO.paa"
				};
			};
			class Sand_01
			{
				DisplayName = $STR_A3_TEXTURESOURCES_SAND0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3\Armor_F_Gamma\APC_Wheeled_03\Data\APC_Wheeled_03_Ext_CO.paa",
					"\A3\Armor_F_Gamma\APC_Wheeled_03\Data\APC_Wheeled_03_Ext2_CO.paa",
					"\A3\Armor_F_Gamma\APC_Wheeled_03\Data\RCWS30_CO.paa",
					"\A3\Armor_F_Gamma\APC_Wheeled_03\Data\APC_Wheeled_03_Ext_alpha_CO.paa",
					"\A3\Armor_F\Data\camonet_NATO_Desert_CO.paa",
					"\A3\Armor_F\Data\cage_sand_CO.paa"
				};
				factions[] = {BLU_F};
			};
			class Olive_01
			{
				displayName = $STR_A3_TEXTURESOURCES_OLIVE0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Aegis\Armor_F_Aegis\APC_Wheeled_03\Data\APC_Wheeled_03_Ext_olive_CO.paa",
					"\A3_Aegis\Armor_F_Aegis\APC_Wheeled_03\Data\APC_Wheeled_03_Ext2_olive_CO.paa",
					"\A3_Aegis\Armor_F_Aegis\APC_Wheeled_03\Data\RCWS30_olive_CO.paa",
					"\A3_Aegis\Armor_F_Aegis\APC_Wheeled_03\Data\APC_Wheeled_03_Ext_alpha_olive_CO.paa",
					"\A3\Armor_F\Data\camonet_NATO_Green_CO.paa",
					"\A3\Armor_F\Data\cage_olive_CO.paa"
				};
				factions[] =
				{
					BLU_T_F,
					BLU_W_F
				};
			};
		};
		animationList[] =
		{
			showCamonetHull,0,
			showBags,0.67,
			showBags2,0.5,
			showTools,0.83,
			showSLATHull,0
		};
	};
	class I_APC_Wheeled_03_base_F: APC_Wheeled_03_base_F{};
	class I_APC_Wheeled_03_cannon_F: I_APC_Wheeled_03_base_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				magazines[] =
				{
					mag_2(140Rnd_30mm_MP_shells_Tracer_Yellow),
					mag_2(60Rnd_30mm_APFSDS_shells_Tracer_Yellow),
					mag_10(200Rnd_762x51_Belt_Yellow),
					mag_2(2Rnd_GAT_missiles)
				};
			};
		};
		textureList[] =
		{
			Indep,1,
			Indep_02,0,
			Indep_03,0
		};
	};
	// Arma 3 Aegis
	#include "cfgGuerrilla.hpp"
};