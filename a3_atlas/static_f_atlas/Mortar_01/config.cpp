#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
class CfgVehicles
{
	// Arma 3
	class StaticMortar;
	class Mortar_01_base_F: StaticMortar
	{
		class TextureSources
		{
			class Green
			{
				displayName = $STR_A3_TEXTURESOURCES_GREEN0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] = {"\A3\Static_F\Mortar_01\Data\Mortar_01_CO.paa"};
				factions[] =
				{
					BLU_F,
					IND_F,
					BLU_G_F,
					IND_G_F,
					OPF_G_F,
					BLU_T_F,
					BLU_W_F,
					OPF_R_F,
					IND_E_F,
					BLU_A_F,
					BLU_E_F
				};
			};
		};
	};
	class B_Mortar_01_F;
	class O_Mortar_01_F;
	class I_Mortar_01_F;
	class Bag_Base;
	class Weapon_Bag_Base: Bag_Base
	{
		class assembleInfo{};
	};
	class B_Mortar_01_support_F;
	class B_Mortar_01_weapon_F: Weapon_Bag_Base{};
	// Arma 3 Atlas
	#include "cfgOpfor_Aegis.hpp"		// CSAT (Woodland)
    #include "cfgLegion.hpp"		    // Legion
	#include "cfgBlufor_Atlas.hpp"		// NATO (German)
    #include "cfgOpfor_Atlas.hpp"		// CSAT (Takistani)
	/*
	#include "cfgADF.hpp"				// ADF
	#include "cfgCDF.hpp"				// CDF
    */
	#include "cfgIDF.hpp"				// IDF
};