#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
class CfgVehicles
{
	// Arma 3
	class B_static_AA_F;
	class O_static_AA_F;
	class I_static_AA_F;
	class Bag_Base;
	class Weapon_Bag_Base: Bag_Base
	{
		class assembleInfo;
	};
	// Arma 3 Atlas
	#include "cfgOpfor_Aegis.hpp"		// CSAT (Woodland)
    #include "cfgLegion.hpp"		    // Legion
	#include "cfgBlufor_Atlas.hpp"		// NATO (German)
	/*
    #include "cfgOpfor_Atlas.hpp"		// CSAT (Caspian)
	#include "cfgADF.hpp"				// ADF
	#include "cfgCDF.hpp"				// CDF
    */
	#include "cfgIDF.hpp"				// IDF
};