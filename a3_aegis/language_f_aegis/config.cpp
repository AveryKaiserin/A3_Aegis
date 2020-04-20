#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
class CfgHints
{
	class FactionList
	{
		displayName = $STR_A3_A_FactionList0;
		logicalOrder = 22;
		category = Assets;
		class NATO
		{
			displayName = $STR_A3_A_NATO1;
			description = $STR_A3_A_NATO0;
			tip = "";
			arguments[] = {};
			image = "\A3\UI_F\Data\GUI\cfg\hints\Miss_icon_CA.paa";
			logicalOrder = 9;
		};
		class AAF
		{
			displayName = $STR_A3_A_AAF1;
			description = $STR_A3_A_AAF0;
			tip = "";
			arguments[] = {};
			image = "\A3\UI_F\Data\GUI\cfg\hints\Miss_icon_CA.paa";
			logicalOrder = 1;
		};
		class CSAT
		{
			displayName = $STR_A3_A_CSAT1;
			description = $STR_A3_A_CSAT0;
			tip = "";
			arguments[] = {};
			image = "\A3\UI_F\Data\GUI\cfg\hints\Miss_icon_CA.paa";
			logicalOrder = 3;
		};
		class FIA
		{
			displayName = $STR_A3_A_FIA1;
			description = $STR_A3_A_FIA0;
			tip = "";
			arguments[] = {};
			image = "\A3\UI_F\Data\GUI\cfg\hints\Miss_icon_CA.paa";
			logicalOrder = 4;
		};
		class Syndikat
		{
			displayName = $STR_A3_A_Syndikat1;
			description = $STR_A3_A_Syndikat0;
			tip = "";
			arguments[] = {};
			image = "\A3\UI_F\Data\GUI\cfg\hints\Miss_icon_CA.paa";
			logicalOrder = 11;
		};
		class CTRG
		{
			displayName = $STR_A3_A_CTRG1;
			description = $STR_A3_A_CTRG0;
			tip = "";
			arguments[] = {};
			image = "\A3\UI_F\Data\GUI\cfg\hints\Miss_icon_CA.paa";
			logicalOrder = 2;
		};
		class Viper
		{
			displayName = $STR_A3_A_Viper1;
			description = $STR_A3_A_Viper0;
			tip = "";
			arguments[] = {};
			image = "\A3\UI_F\Data\GUI\cfg\hints\Miss_icon_CA.paa";
			logicalOrder = 12;
		};
		class IDAP
		{
			displayName = $STR_A3_A_IDAP1;
			description = $STR_A3_A_IDAP0;
			tip = "";
			arguments[] = {};
			image = "\A3\UI_F\Data\GUI\cfg\hints\Miss_icon_CA.paa";
			logicalOrder = 6;
		};
		class LDF
		{
			displayName = $STR_A3_A_LDF1;
			description = $STR_A3_A_LDF0;
			tip = "";
			arguments[] = {};
			image = "\A3\UI_F\Data\GUI\cfg\hints\Miss_icon_CA.paa";
			logicalOrder = 8;
		};
		class Spetsnaz
		{
			displayName = $STR_A3_A_Spetsnaz1;
			description = $STR_A3_A_Spetsnaz0;
			tip = "";
			arguments[] = {};
			image = "\A3\UI_F\Data\GUI\cfg\hints\Miss_icon_CA.paa";
			logicalOrder = 10;
		};
		class ION
		{
			displayName = $STR_A3_A_ION1;
			description = $STR_A3_A_ION0;
			tip = "";
			arguments[] = {};
			image = "\A3\UI_F\Data\GUI\cfg\hints\Miss_icon_CA.paa";
			logicalOrder = 7;
		};
		class HIDF
		{
			displayName = $STR_A3_A_HIDF1;
			description = $STR_A3_A_HIDF0;
			tip = "";
			arguments[] = {};
			image = "\A3\UI_F\Data\GUI\cfg\hints\Miss_icon_CA.paa";
			logicalOrder = 5;
		};
	};
	class WeaponList
	{
		// Arma 3
		// Arma 3 Aegis
		class GL_M32
		{
			displayName = %11;
			description = %12;
			tip = "";
			arguments[] =
			{
				{STR_A3_A_CfgWeapons_GL_M32_F0},
				{STR_A3_A_CfgWeapons_GL_M32_F_Library0}
			};
			image = "\A3_Aegis\UI_F_Aegis\Data\CfgHints\GL_CA.paa";
			weapon = GL_M32_F;
			logicalOrder = 20;
		};
		class GL_XM25
		{
			displayName = %11;
			description = %12;
			tip = "";
			arguments[] =
			{
				{STR_A3_A_CfgWeapons_GL_XM25_F0},
				{STR_A3_A_CfgWeapons_GL_XM25_F_Library0}
			};
			image = "\A3_Aegis\UI_F_Aegis\Data\CfgHints\GL_CA.paa";
			weapon = GL_XM25_F;
			logicalOrder = 40;
		};
		class srifle_WF50
		{
			displayName = %11;
			description = %12;
			tip = "";
			arguments[] =
			{
				{STR_A3_A_CfgWeapons_srifle_WF50_F0},
				{STR_A3_A_CfgWeapons_srifle_WF50_F_Library0}
			};
			image = "\A3\UI_F\Data\GUI\cfg\hints\Ranged_CA.paa";
			weapon = srifle_WF50_F;
			logicalOrder = 57;
		};
		class hgun_C1911
		{
			displayName = %11;
			description = %12;
			tip = "";
			arguments[] =
			{
				{STR_A3_A_CfgWeapons_hgun_C1911_F0},
				{STR_A3_A_CfgWeapons_hgun_C1911_F_Library0}
			};
			image = "\A3\UI_F\Data\GUI\cfg\hints\Handgun_CA.paa";
			weapon = hgun_C1911_F;
			logicalOrder = 9;
		};
		class hgun_G17
		{
			displayName = %11;
			description = %12;
			tip = "";
			arguments[] =
			{
				{STR_A3_A_CfgWeapons_hgun_G17_F0},
				{STR_A3_A_CfgWeapons_hgun_G17_F_Library0}
			};
			image = "\A3\UI_F\Data\GUI\cfg\hints\Handgun_CA.paa";
			weapon = hgun_G17_F;
			logicalOrder = 35;
		};
		class hgun_Mk26
		{
			displayName = %11;
			description = %12;
			tip = "";
			arguments[] =
			{
				{STR_A3_A_CfgWeapons_hgun_Mk26_F0},
				{STR_A3_A_CfgWeapons_hgun_Mk26_F_Library0}
			};
			image = "\A3\UI_F\Data\GUI\cfg\hints\Handgun_CA.paa";
			weapon = hgun_Mk26_F;
			logicalOrder = 28;
		};
		class hgun_Pistol_heavy_03
		{
			displayName = %11;
			description = %12;
			tip = "";
			arguments[] =
			{
				{STR_A3_A_CfgWeapons_hgun_Pistol_heavy_03_F0},
				{STR_A3_A_CfgWeapons_hgun_Pistol_heavy_03_F_Library0}
			};
			image = "\A3\UI_F\Data\GUI\cfg\hints\Handgun_CA.paa";
			weapon = hgun_Pistol_heavy_03_F;
			logicalOrder = 28;
		};
		class arifle_RPK
		{
			displayName = %11;
			description = %12;
			tip = "";
			arguments[] =
			{
				{STR_A3_A_CfgWeapons_arifle_RPK_base_F0},
				{STR_A3_A_CfgWeapons_arifle_RPK_base_F_Library0}
			};
			image = "\A3\UI_F\Data\GUI\cfg\hints\Rifle_CA.paa";
			weapon = arifle_RPK_F;
			logicalOrder = 32;
		};
		class arifle_SA80
		{
			displayName = %11;
			description = %12;
			tip = "";
			arguments[] =
			{
				{STR_A3_A_CfgWeapons_arifle_SA80_base_F0},
				{STR_A3_A_CfgWeapons_arifle_SA80_base_F_Library0}
			};
			image = "\A3\UI_F\Data\GUI\cfg\hints\Rifle_CA.paa";
			weapon = arifle_SA80_blk_F;
			logicalOrder = 45;
		};
		class sgun_AA40
		{
			displayName = %11;
			description = %12;
			tip = "";
			arguments[] =
			{
				{STR_A3_A_CfgWeapons_sgun_AA40_F0},
				{STR_A3_A_CfgWeapons_sgun_AA40_F_Library0}
			};
			image = "\A3\UI_F\Data\GUI\cfg\hints\Shotguns_CA.paa";
			weapon = sgun_AA40_F;
			logicalOrder = 2;
		};
		class sgun_KSG
		{
			displayName = %11;
			description = %12;
			tip = "";
			arguments[] =
			{
				{STR_A3_A_CfgWeapons_sgun_KSG_F0},
				{STR_A3_A_CfgWeapons_sgun_KSG_F_Library0}
			};
			image = "\A3\UI_F\Data\GUI\cfg\hints\Shotguns_CA.paa";
			weapon = sgun_KSG_F;
			logicalOrder = 8;
		};
		class sgun_M4
		{
			displayName = %11;
			description = %12;
			tip = "";
			arguments[] =
			{
				{STR_A3_A_CfgWeapons_sgun_M4_F0},
				{STR_A3_A_CfgWeapons_sgun_M4_F_Library0}
			};
			image = "\A3\UI_F\Data\GUI\cfg\hints\Shotguns_CA.paa";
			weapon = sgun_M4_F;
			logicalOrder = 17;
		};
		class sgun_Mp153
		{
			displayName = %11;
			description = %12;
			tip = "";
			arguments[] =
			{
				{STR_A3_A_CfgWeapons_sgun_Mp153_black_F0},
				{STR_A3_A_CfgWeapons_sgun_Mp153_black_F_Library0}
			};
			image = "\A3\UI_F\Data\GUI\cfg\hints\Shotguns_CA.paa";
			weapon = sgun_Mp153_classic_F;
			logicalOrder = 32;
		};
		class SMG_04
		{
			displayName = %11;
			description = %12;
			tip = "";
			arguments[] =
			{
				{STR_A3_A_CfgWeapons_SMG_04_base_F0},
				{STR_A3_A_CfgWeapons_SMG_04_base_F_Library0}
			};
			image = "\A3\UI_F\Data\GUI\cfg\hints\Rifles_CA.paa";
			weapon = SMG_04_blk_F;
			logicalOrder = 17;
		};
		class SMG_06
		{
			displayName = %11;
			description = %12;
			tip = "";
			arguments[] =
			{
				{STR_A3_A_CfgWeapons_SMG_06_base_F0},
				{STR_A3_A_CfgWeapons_SMG_06_base_F_Library0}
			};
			image = "\A3\UI_F\Data\GUI\cfg\hints\Rifles_CA.paa";
			weapon = SMG_06_F;
			logicalOrder = 17;
		};
	};
	class VehicleList
	{
		// Arma 3
		// Arma 3 Aegis
		class Plane_Fighter_05
		{
			displayName = %11;
			description = %12;
			tip = "";
			arguments[] =
			{
				{STR_A3_A_CfgVehicles_Plane_Fighter_05_base_F0},
				{STR_A3_A_CfgVehicles_Plane_Fighter_05_base_F_Library0}
			};
			image = "\A3\UI_F\Data\GUI\cfg\hints\Miss_icon_CA.paa";
			vehicle = B_Plane_Fighter_05_F;
			modelScale = 0.4;
			logicalOrder = 42;
		};
		class Plane_Transport_01
		{
			displayName = %11;
			description = %12;
			tip = "";
			arguments[] =
			{
				{STR_A3_A_CfgVehicles_Plane_Transport_01_base_F0},
				{STR_A3_A_CfgVehicles_Plane_Transport_01_base_F_Library0}
			};
			image = "\A3\UI_F\Data\GUI\cfg\hints\Miss_icon_CA.paa";
			vehicle = B_Plane_Transport_01_infantry_F;
			modelScale = 0.3;
			logicalOrder = 42;
		};
		class UAV_07
		{
			displayName = %11;
			description = %12;
			tip = "";
			arguments[] =
			{
				{STR_A3_A_CfgVehicles_UAV_07_base_F0},
				{STR_A3_A_CfgVehicles_UAV_07_base_F_Armory0}
			};
			image = "\A3\UI_F\Data\GUI\cfg\hints\Miss_icon_CA.paa";
			vehicle = O_R_UAV_07_F;
			modelScale = 0.5;
			logicalOrder = 42;
		};
		class Boat_Civil_02
		{
			displayName = %11;
			description = %12;
			tip = "";
			arguments[] =
			{
				{STR_A3_A_CfgVehicles_Boat_Civil_02_base_F0},
				{STR_A3_A_CfgVehicles_Boat_Civil_02_base_F_Library0}
			};
			image = "\A3\UI_F\Data\GUI\cfg\hints\Miss_icon_CA.paa";
			vehicle = C_Boat_Civil_02_F;
			modelScale = 1.2;
			logicalOrder = 42;
		};
		class Boat_Civil_03
		{
			displayName = %11;
			description = %12;
			tip = "";
			arguments[] =
			{
				{STR_A3_A_CfgVehicles_Boat_Civil_03_base0},
				{STR_A3_A_CfgVehicles_Boat_Civil_03_base_Library0}
			};
			image = "\A3\UI_F\Data\GUI\cfg\hints\Miss_icon_CA.paa";
			vehicle = C_Boat_Civil_03_F;
			modelScale = 0.6;
			logicalOrder = 42;
		};
	};
};