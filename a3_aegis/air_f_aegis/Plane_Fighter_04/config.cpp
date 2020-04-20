#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
class CfgVehicles
{
	// Arma 3 Jets
	class Plane_Base_F;
	class Plane_Fighter_04_Base_F: Plane_Base_F
	{
		class EjectionSystem;
		magazines[] =
		{
			magazine_Fighter04_Gun20mm_AA_x120,
			Laserbatteries,
			240Rnd_CMFlare_Chaff_Magazine
		};
		class TextureSources
		{
			class DigitalCamoGreen
			{
				displayName = "Green Digital";
			};
			class DigitalCamoGrey
			{
				displayName = "Grey Digital";
			};
			class CamoGrey
			{
				displayName = $STR_A3_TEXTURESOURCES_LIGHTGREY0;
			};
			class EAF
			{
				displayName = $STR_A3_TEXTURESOURCES_EAF0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Aegis\Air_F_Aegis\Plane_Fighter_04\Data\Fighter_04_fuselage_01_EAF_CO.paa",
					"\A3_Aegis\Air_F_Aegis\Plane_Fighter_04\Data\Fighter_04_fuselage_02_EAF_CO.paa",
					"\A3\Air_F_Jets\Plane_Fighter_04\Data\Fighter_04_misc_01_CO.paa",
					"\A3\Air_F_Jets\Plane_Fighter_04\Data\Numbers\Fighter_04_number_04_CA.paa",
					"\A3\Air_F_Jets\Plane_Fighter_04\Data\Numbers\Fighter_04_number_01_CA.paa",
					"\A3\Air_F_Jets\Plane_Fighter_04\Data\Numbers\Fighter_04_number_04_CA.paa"
				};
				factions[] = {IND_E_F};
			};
			class Green
			{
				displayName = $STR_A3_TEXTURESOURCES_GREEN0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Aegis\Air_F_Aegis\Plane_Fighter_04\Data\Fighter_04_fuselage_01_green_CO.paa",
					"\A3_Aegis\Air_F_Aegis\Plane_Fighter_04\Data\Fighter_04_fuselage_02_green_CO.paa",
					"\A3\Air_F_Jets\Plane_Fighter_04\Data\Fighter_04_misc_01_CO.paa",
					"\A3\Air_F_Jets\Plane_Fighter_04\Data\Numbers\Fighter_04_number_04_CA.paa",
					"\A3\Air_F_Jets\Plane_Fighter_04\Data\Numbers\Fighter_04_number_01_CA.paa",
					"\A3\Air_F_Jets\Plane_Fighter_04\Data\Numbers\Fighter_04_number_04_CA.paa"
				};
				factions[] = {IND_E_F};
			};
		};
	};
	class Ejection_Seat_Plane_Fighter_04_base_F;
	// Arma 3 Aegis
	#include "cfgEAF.hpp"
};