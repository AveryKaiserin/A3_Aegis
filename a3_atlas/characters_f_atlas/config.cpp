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
	#include "cfgOpfor_Aegis.hpp"		// Belarus
    #include "cfgLegion.hpp"			// Legionnaires
	#include "cfgBlufor_Atlas.hpp"		// Germany
	#include "cfgOpfor_Atlas.hpp"		// Takistani Army
	/*
    #include "cfgADF.hpp"				// ANZAC
	*/
    #include "cfgHIMF.hpp"				// HIMF
    /*
	#include "cfgCDF.hpp"				// CDF
	*/
    #include "cfgIDF.hpp"				// IDF
    #include "cfgUNO.hpp"				// UNO
    #include "cfgUniforms.hpp"
    // Deprecated classes
    #include "deprecated.hpp"
};
#include "cfgGroups.hpp"