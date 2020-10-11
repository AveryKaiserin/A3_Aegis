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
		class TransportItems
		{
			item_xx(FirstAidKit,10);
			item_xx(Toolkit,1);
			item_xx(Medikit,1);
		};
		class TransportBackpacks
		{
			bag_xx(B_AssaultPack_dgtl,2);
		};
		class AnimationSources;
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
			class Guerilla_01
			{
                factions[] =
                {
                    BLU_G_F,
                    IND_G_F,
                    OPF_G_F
                };
            };
			class Guerilla_02
			{
                factions[] =
                {
                    BLU_G_F,
                    IND_G_F,
                    OPF_G_F
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
                factions[] =
                {
                    BLU_G_F,
                    IND_G_F,
                    OPF_G_F
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
		class EventHandlers;
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
	#include "cfgGuerrilla.hpp"			// FIA
};