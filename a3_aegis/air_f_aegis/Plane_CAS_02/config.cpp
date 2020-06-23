#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
class SensorTemplatePassiveRadar;
class SensorTemplateAntiRadiation;
class SensorTemplateActiveRadar;
class SensorTemplateIR;
class SensorTemplateVisual;
class SensorTemplateMan;
class SensorTemplateLaser;
class SensorTemplateNV;
class SensorTemplateDataLink;
class DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class CfgVehicles
{
	// Arma 3
	class Plane;
	class Plane_Base_F: Plane
	{
		class Components;
	};
	class Ejection_Seat_Plane_CAS_02_base_F;
	class Plane_CAS_02_base_F: Plane_Base_F
	{
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent;
					class VisualSensorComponent;
					class AntiRadiationSensorComponent;
					class ActiveRadarSensorComponent: SensorTemplateActiveRadar
					{
						class AirTarget
						{
							minRange = 8000;
							maxRange = 8000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 4000;
							maxRange = 4000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						angleRangeHorizontal = 90;
						angleRangeVertical = 90;
					};
					class PassiveRadarSensorComponent;
					class LaserSensorComponent;
					class NVSensorComponent;
				};
			};
			class VehicleSystemsDisplayManagerComponentLeft;
			class VehicleSystemsDisplayManagerComponentRight;
		};
		class TextureSources
		{
			class Hex
			{
				displayName = $STR_A3_TEXTURESOURCES_HEX0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3\Air_F_EPC\Plane_CAS_02\Data\Fighter02_ext01_CO.paa",
					"\A3\Air_F_EPC\Plane_CAS_02\Data\Fighter02_ext02_CO.paa"
				};
				factions[] = {OPF_F};
			};
			class Grey
			{
				displayName = $STR_A3_TEXTURESOURCES_GREY0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Aegis\Air_F_Aegis\Plane_CAS_02\Data\Fighter02_ext01_grey_CO.paa",
					"\A3_Aegis\Air_F_Aegis\Plane_CAS_02\Data\Fighter02_ext02_grey_CO.paa"
				};
				factions[] =
				{
					OPF_F,
					OPF_T_F,
					OPF_W_F
				};
			};
			class Blue
			{
				displayName = $STR_A3_TEXTURESOURCES_BLUE0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Aegis\Air_F_Aegis\Plane_CAS_02\Data\Fighter02_ext01_blue_CO.paa",
					"\A3_Aegis\Air_F_Aegis\Plane_CAS_02\Data\Fighter02_ext02_blue_CO.paa"
				};
				factions[] = {OPF_R_F};
			};
			class GreenHex
			{
				displayName = $STR_A3_TEXTURESOURCES_GREENHEX0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Aegis\Air_F_Aegis\Plane_CAS_02\Data\Fighter02_ext01_ghex_CO.paa",
					"\A3_Aegis\Air_F_Aegis\Plane_CAS_02\Data\Fighter02_ext02_ghex_CO.paa"
				};
				factions[] =
				{
					OPF_T_F,
					OPF_W_F
				};
			};
		};
		class EjectionSystem;
	};
	class Plane_CAS_02_dynamicLoadout_base_F: Plane_CAS_02_base_F{};
	class O_Plane_CAS_02_dynamicLoadout_F: Plane_CAS_02_dynamicLoadout_base_F
	{
		displayName = $STR_A3_CfgVehicles_O_Plane_02_F0;
		textureList[] =
		{
			Hex,1,
			Grey,0
		};
	};
	// Arma 3 Aegis
	#include "cfgOpfor_Exp.hpp"
	#include "cfgSpetsnaz.hpp"
	#include "cfgOpfor_Aegis.hpp"
};