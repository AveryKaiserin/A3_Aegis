#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
class CfgVehicles
{
	// Arma 3 Laws of War
	class Helicopter_Base_F;
	class UAV_06_base_F: Helicopter_Base_F
	{
		class TextureSources
		{
			class Opfor;
			class Blufor;
			class ION
			{
				displayName = $STR_A3_TEXTURESOURCES_ION0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] = {"\A3_Aegis\Air_F_Aegis\UAV_06\Data\B_ION_UAV_06_CO.paa"};
				factions[]= {BLU_ION_F};
			};
			class Rus
			{
				displayName = $STR_A3_A_TEXTURESOURCES_RUS0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] = {"\A3_Aegis\Air_F_Aegis\UAV_06\Data\O_R_UAV_06_CO.paa"};
				factions[] = {OPF_R_F};
			};
		};
	};
	class UAV_06_medical_base_F: UAV_06_base_F
	{
		class TextureSources
		{
			class Blufor;
			class Opfor;
			class ION
			{
				displayName = $STR_A3_TEXTURESOURCES_ION0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Aegis\Air_F_Aegis\UAV_06\Data\B_ION_UAV_06_medical_CO.paa",
					"\A3_Aegis\Air_F_Aegis\UAV_06\Data\B_ION_UAV_06_medical_CO.paa"
				};
				factions[]= {BLU_ION_F};
			};
			class Rus
			{
				displayName = $STR_A3_A_TEXTURESOURCES_RUS0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Aegis\Air_F_Aegis\UAV_06\Data\O_R_UAV_06_medical_CO.paa",
					"\A3_Aegis\Air_F_Aegis\UAV_06\Data\O_R_UAV_06_medical_CO.paa"
				};
				factions[] = {OPF_R_F};
			};
		};
	};
	class Box_UAV_06_base_F;
	class Box_UAV_06_medical_base_F;
    class Weapon_Bag_Base;
	class UAV_06_backpack_base_F: Weapon_Bag_Base
	{
		class assembleInfo;
	};
	class UAV_06_medical_backpack_base_F: UAV_06_backpack_base_F{};
	class C_IDAP_UAV_06_medical_backpack_F: UAV_06_medical_backpack_base_F
	{
		displayName = $STR_A3_A_CfgVehicles_C_IDAP_UAV_06_medical_backpack_F0;
	};
	// Arma 3 Aegis
	#include "cfgBlufor_Exp.hpp"
	#include "cfgOpfor_Exp.hpp"
	#include "cfgBlufor_Enoch.hpp"
	#include "cfgSpetsnaz.hpp"
	#include "cfgBlufor_Aegis.hpp"
	#include "cfgIon.hpp"
};