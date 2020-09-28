#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
class CfgVehicles
{
	// Arma 3
	class Car_F;
	class Quadbike_01_base_F: Car_F
	{
		class Reflectors
		{
			class Left
			{
				useFlare = true;
			};
		};
		class TextureSources
		{
			class Black
			{
				factions[] =
				{
					CIV_F,
                    BLU_GEN_F,
					IND_C_F
				};
			};
			class Blufor
			{
				factions[] =
				{
					BLU_F,
					BLU_A_F
				};
			};
			class Guerrilla_02
			{
				factions[] =
				{
					BLU_G_F,
					IND_G_F,
					OPF_G_F,
					IND_C_F
				};
			};
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
			class LDF
			{
				textures[] =
				{
					"\A3_Aegis\Soft_F_Aegis\Quadbike_01\Data\Quadbike_01_EAF_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Quadbike_01\Data\Quadbike_01_wheel_EAF_CO.paa"
				};
			};
			class Green
			{
				displayName = $STR_A3_TEXTURESOURCES_GREEN0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Aegis\Soft_F_Aegis\Quadbike_01\Data\Quadbike_01_RUkhk_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Quadbike_01\Data\Quadbike_01_wheel_RUkhk_CO.paa"
				};
				factions[] =
				{
					OPF_R_F,
					OPF_R_ard_F
				};
			};
		};
	};
	class B_Quadbike_01_F;
	class O_Quadbike_01_F;
	// Arma 3 Enoch
	class I_E_Quadbike_01_F: Quadbike_01_base_F
	{
		hiddenSelectionsTextures[] =
		{
			"\A3_Aegis\Soft_F_Aegis\Quadbike_01\Data\Quadbike_01_EAF_CO.paa",
			"\A3_Aegis\Soft_F_Aegis\Quadbike_01\Data\Quadbike_01_wheel_EAF_CO.paa"
		};
	};
	// Arma 3 Aegis
	#include "cfgSyndikat.hpp"          // Syndikat
	#include "cfgGendarmerie.hpp"       // Gendarmerie
	#include "cfgOpfor_Tacops.hpp"      // Argana
	#include "cfgBlufor_Enoch.hpp"      // US (Woodland)
	#include "cfgSpetsnaz.hpp"          // Russia
	#include "cfgBlufor_Aegis.hpp"      // BAF
};