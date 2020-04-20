#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
class CfgVehicles
{
	// Arma 3 Jets
	class Plane;
	class Plane_Base_F: Plane
	{
		class AnimationSources;
		class Components;
	};
	class Plane_Fighter_02_Base_F: Plane_Base_F
	{
		class AnimationSources: AnimationSources
		{
			class pylon_1_hide;
			class pylon_2_hide;
			class pylon_3_hide;
			class pylon_4_hide;
			class pylon_5_hide;
			class pylon_6_hide;
		};
		class Components: Components{};
		class TextureSources
		{
			class CamoAridHex
			{
				displayName = $STR_A3_TEXTURESOURCES_HEX0;
			};
			class CamoGreyHex
			{
				displayName = $STR_A3_TEXTURESOURCES_GREY0;
				factions[] =
				{
					OPF_F,
					OPF_T_F
				};
			};
			class CamoBlue
			{
				displayName = $STR_A3_TEXTURESOURCES_BLUE0;
				textures[] =
				{
					"\A3_Aegis\Air_F_Aegis\Plane_Fighter_02\Data\Fighter_02_fuselage_01_blue_CO.paa",
					"\A3_Aegis\Air_F_Aegis\Plane_Fighter_02\Data\Fighter_02_fuselage_02_blue_CO.paa",
					"\A3_Aegis\Air_F_Aegis\Plane_Fighter_02\Data\Fighter_02_fuselage_01_blue_CO.paa",
					"\A3\Air_F_Jets\Plane_Fighter_02\Data\Numbers\Fighter_02_number_02_CO.paa",
					"\A3\Air_F_Jets\Plane_Fighter_02\Data\Numbers\Fighter_02_number_00_CO.paa",
					"\A3\Air_F_Jets\Plane_Fighter_02\Data\Numbers\Fighter_02_number_01_CO.paa",
					"\A3\Data_F\clear_empty.paa"
				};
				factions[] = {OPF_R_F};
			};
			class CamoGreenHex
			{
				displayName = $STR_A3_TEXTURESOURCES_GREENHEX0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Aegis\Air_F_Aegis\Plane_Fighter_02\Data\Fighter_02_fuselage_01_ghex_CO.paa",
					"\A3_Aegis\Air_F_Aegis\Plane_Fighter_02\Data\Fighter_02_fuselage_02_ghex_CO.paa",
					"\A3_Aegis\Air_F_Aegis\Plane_Fighter_02\Data\Fighter_02_fuselage_01_ghex_CO.paa",
					"\A3\Air_F_Jets\Plane_Fighter_02\Data\Numbers\Fighter_02_number_02_CO.paa",
					"\A3\Air_F_Jets\Plane_Fighter_02\Data\Numbers\Fighter_02_number_00_CO.paa",
					"\A3\Air_F_Jets\Plane_Fighter_02\Data\Numbers\Fighter_02_number_01_CO.paa",
					"\A3\Data_F\clear_empty.paa"
				};
				factions[] = {OPF_T_F};
			};
		};
		textureList[] =
		{
			CamoAridHex,1,
			CamoGreyHex,0,
			CamoBlue,0,
			CamoGreenHex,0
		};
		class EjectionSystem;
	};
	class O_Plane_Fighter_02_F: Plane_Fighter_02_Base_F{};
	class O_Plane_Fighter_02_Stealth_F: Plane_Fighter_02_Base_F{};
	class Ejection_Seat_Plane_Fighter_02_base_F;
	// Arma 3 Aegis
	#include "cfgOpfor_Exp.hpp"
	#include "cfgSpetsnaz.hpp"
};