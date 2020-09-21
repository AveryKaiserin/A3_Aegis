#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
class RCWSOptics;
class CfgVehicles
{
	// Arma 3
	class LandVehicle;
	class Car: LandVehicle
	{
		class NewTurret;
	};
	class Car_F: Car
	{
		class NewTurret;
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class ViewOptics;
			};
		};
	};
	class UGV_01_base_F: Car_F
	{
		class TextureSources
		{
			class Indep;
			class Opfor;
			class Blufor
            {
				factions[] =
				{
					BLU_F,
                    BLU_A_F
				};
            };
			class GreenHex;
			class Olive
            {
				factions[] =
				{
					BLU_T_F,
                    BLU_W_F,
                    BLU_A_tna_F,
                    BLU_A_wdl_F
				};
            };
			class EAF;
			class Green
			{
				displayName = $STR_A3_TEXTURESOURCES_GREEN0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Aegis\Soft_F_Aegis\UGV_01\Data\UGV_01_ext_RUkhk_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\UGV_01\Data\UGV_01_int_RUkhk_CO.paa",
					"\A3_Aegis\Data_F_Aegis\Vehicles\Turret_RUkhk_CO.paa"
				};
				factions[] =
				{
					OPF_R_F,
					OPF_R_ard_F
				};
			};
			class Ion
			{
				displayName = $STR_A3_TEXTURESOURCES_ION0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Aegis\Soft_F_Aegis\UGV_01\Data\UGV_01_ext_ION_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\UGV_01\Data\UGV_01_int_ION_CO.paa",
					"\A3_Aegis\Data_F_Aegis\Vehicles\Turret_ION_CO.paa"
				};
				factions[] = {BLU_ION_F};
			};
		};
	};
	class UGV_01_rcws_base_F: UGV_01_base_F
	{
		class Turrets: Turrets
		{
			class MainTurret: NewTurret
			{
				magazines[] =
				{
					mag_2(200Rnd_127x99_mag_Tracer_Red),
					mag_2(64Rnd_40mm_G_belt)
				};
				class ViewOptics: RCWSOptics
				{
					directionStabilized = false;
				};
			};
			class CargoTurret_01;
		};
	};
	class B_UGV_01_F;
	class O_UGV_01_F;
	class B_UGV_01_rcws_F: UGV_01_rcws_base_F
	{
		hiddenSelectionsTextures[] =
		{
			"\A3\Drones_F\Soft_F_Gamma\UGV_01\Data\UGV_01_ext_CO.paa",
			"\A3\Drones_F\Soft_F_Gamma\UGV_01\Data\UGV_01_int_CO.paa",
			"\A3_Aegis\Data_F_Aegis\Vehicles\Turret_CO.paa"
		};
	};
	class O_UGV_01_rcws_F: UGV_01_rcws_base_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				magazines[] =
				{
					mag_2(200Rnd_127x99_mag_Tracer_Green),
					mag_2(64Rnd_40mm_G_belt)
				};
			};
			class CargoTurret_01: CargoTurret_01{};
		};
	};
	class I_UGV_01_rcws_F: UGV_01_rcws_base_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				magazines[] =
				{
					mag_2(200Rnd_127x99_mag_Tracer_Yellow),
					mag_2(64Rnd_40mm_G_belt)
				};
			};
			class CargoTurret_01: CargoTurret_01{};
		};
	};
	// Arma 3 Apex
	class O_T_UGV_01_rcws_ghex_F: UGV_01_rcws_base_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				magazines[] =
				{
					mag_2(200Rnd_127x99_mag_Tracer_Green),
					mag_2(64Rnd_40mm_G_belt)
				};
			};
			class CargoTurret_01: CargoTurret_01{};
		};
	};
	class B_T_UGV_01_olive_F;
	class B_T_UGV_01_rcws_olive_F: UGV_01_rcws_base_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				magazines[] =
				{
					mag_2(200Rnd_127x99_mag_Tracer_Red),
					mag_2(64Rnd_40mm_G_belt)
				};
			};
			class CargoTurret_01: CargoTurret_01{};
		};
	};
	// Arma 3 Laws of War
	class C_IDAP_UGV_01_F: UGV_01_base_F
	{
		displayName = $STR_A3_A_CfgVehicles_C_IDAP_UGV_01_F0;
		picture = "\A3_Aegis\Soft_F_Aegis\UGV_01\Data\UI\UGV_01_medical_CA.paa";
		icon = "\A3_Aegis\Soft_F_Aegis\UGV_01\Data\UI\map_UGV_01_medical_CA.paa";
		attendant = true;
	};
	// Arma 3 Aegis
	class UGV_01_medical_base_F: UGV_01_base_F
	{
		displayName = $STR_A3_A_CfgVehicles_UGV_01_medical_base_F0;
		picture = "\A3_Aegis\Soft_F_Aegis\UGV_01\Data\UI\UGV_01_medical_CA.paa";
		icon = "\A3_Aegis\Soft_F_Aegis\UGV_01\Data\UI\map_UGV_01_medical_CA.paa";
		attendant = true;
		class TransportItems
		{
			item_xx(MediKit,2);
			item_xx(FirstAidKit,10);
		};
		class TextureSources: TextureSources
		{
			class Indep: Indep
			{
				textures[] =
				{
					"\A3_Aegis\Soft_F_Aegis\UGV_01\Data\UGV_01_ext_medevac_INDP_CO.paa",
					"\A3\Drones_F\Soft_F_Gamma\UGV_01\Data\UGV_01_int_INDP_CO.paa",
					"\A3\Soft_F_Orange\UGV_01\Data\Turret_IDAP_CO.paa"
				};
			};
			class Opfor: Opfor
			{
				textures[] =
				{
					"\A3_Aegis\Soft_F_Aegis\UGV_01\Data\UGV_01_ext_medevac_OPFOR_CO.paa",
					"\A3\Drones_F\Soft_F_Gamma\UGV_01\Data\UGV_01_int_OPFOR_CO.paa",
					"\A3\Soft_F_Orange\UGV_01\Data\Turret_IDAP_CO.paa"
				};
			};
			class Blufor: Blufor
			{
				textures[] =
				{
					"\A3_Aegis\Soft_F_Aegis\UGV_01\Data\UGV_01_ext_medevac_CO.paa",
					"\A3\Drones_F\Soft_F_Gamma\UGV_01\Data\UGV_01_int_CO.paa",
					"\A3\Soft_F_Orange\UGV_01\Data\Turret_IDAP_CO.paa"
				};
			};
			class GreenHex: GreenHex
			{
				textures[] =
				{
					"\A3_Aegis\Soft_F_Aegis\UGV_01\Data\UGV_01_ext_medevac_ghex_CO.paa",
					"\A3\Soft_F_Exp\UGV_01\Data\UGV_01_int_ghex_CO.paa",
					"\A3\Soft_F_Orange\UGV_01\Data\Turret_IDAP_CO.paa"
				};
			};
			class Olive: Olive
			{
				textures[] =
				{
					"\A3_Aegis\Soft_F_Aegis\UGV_01\Data\UGV_01_ext_medevac_olive_CO.paa",
					"\A3\Soft_F_Exp\UGV_01\Data\UGV_01_int_olive_CO.paa",
					"\A3\Soft_F_Orange\UGV_01\Data\Turret_IDAP_CO.paa"
				};
			};
			class EAF: EAF
			{
				textures[] =
				{
					"\A3_Aegis\Soft_F_Aegis\UGV_01\Data\UGV_01_ext_medevac_EAF_CO.paa",
					"\A3\Soft_F_Enoch\UGV_01\Data\UGV_01_int_EAF_CO.paa",
					"\A3\Soft_F_Orange\UGV_01\Data\Turret_IDAP_CO.paa"
				};
			};
			class Green: Green
			{
				textures[] =
				{
					"\A3_Aegis\Soft_F_Aegis\UGV_01\Data\UGV_01_ext_medevac_RUkhk_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\UGV_01\Data\UGV_01_int_RUkhk_CO.paa",
					"\A3\Soft_F_Orange\UGV_01\Data\Turret_IDAP_CO.paa"
				};
			};
			class Ion: Ion
			{
				textures[] =
				{
					"\A3_Aegis\Soft_F_Aegis\UGV_01\Data\UGV_01_ext_medevac_ION_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\UGV_01\Data\UGV_01_int_ION_CO.paa",
					"\A3\Soft_F_Orange\UGV_01\Data\Turret_IDAP_CO.paa"
				};
			};
		};
	};
	#include "cfgBlufor.hpp"			// NATO
	#include "cfgOpfor.hpp"				// CSAT
	#include "cfgIndep.hpp"				// AAF
	#include "cfgBlufor_Exp.hpp"		// NATO (Pacific)
	#include "cfgOpfor_Exp.hpp"			// CSAT (Pacific)
	#include "cfgBlufor_Enoch.hpp"		// NATO (Woodland)
	#include "cfgSpetsnaz.hpp"			// Russia
	#include "cfgEAF.hpp"				// LDF
	#include "cfgBlufor_Aegis.hpp"		// NATO (British)
	#include "cfgIon.hpp"				// ION
};