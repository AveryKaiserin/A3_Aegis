#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
#include "cfgFaces.hpp"
class UniformSlotInfo;
class CfgVehicles
{
	class SoldierWB;
	class SoldierEB;
	class SoldierGB;
    #include "cfgCivil.hpp"             // Civilians
    class I_Soldier_base_F: SoldierGB
    {
        class EventHandlers;
    };
    class I_soldier_F: I_Soldier_base_F{};
    class I_pilot_F;
	#include "cfgViper.hpp"				// Viper
	#include "cfgOpfor_Aegis.hpp"		// CSAT (Woodland)
    #include "cfgLegion.hpp"			// Legion
	#include "cfgBlufor_Atlas.hpp"		// NATO (German)
	/*
	#include "cfgOpfor_Atlas.hpp"		// CSAT (Caspian)
    #include "cfgADF.hpp"				// ADF
	*/
    #include "cfgHIMF.hpp"				// HIMF
    /*
	#include "cfgCDF.hpp"				// CDF
	*/
    #include "cfgIDF.hpp"				// IDF
	/*
    #include "cfgUNO.hpp"				// UNO
    */
};
#include "cfgGroups.hpp"