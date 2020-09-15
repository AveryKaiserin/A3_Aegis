#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
class CfgVehicles
{
	// Arma 3
	class B_GMG_01_F;
	class O_GMG_01_F;
	class I_GMG_01_F;
	class B_GMG_01_A_F;
	class O_GMG_01_A_F;
	class I_GMG_01_A_F;
	class B_GMG_01_high_F;
	class O_GMG_01_high_F;
	class I_GMG_01_high_F;
	class B_GMG_01_weapon_F;
	class I_GMG_01_weapon_F: B_GMG_01_weapon_F
	{
		class assembleInfo;
	};
	class B_GMG_01_A_weapon_F;
	class I_GMG_01_A_weapon_F: B_GMG_01_A_weapon_F
	{
		class assembleInfo;
	};
	class B_GMG_01_high_weapon_F;
	class I_GMG_01_high_weapon_F: B_GMG_01_high_weapon_F
	{
		class assembleInfo;
	};
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