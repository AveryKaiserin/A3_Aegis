#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
#include "cfgFaces.hpp"
class UniformSlotInfo;
class CfgVehicles
{
	class SoldierWB;
	class SoldierEB;
	class SoldierGB;
	#include "cfgBlufor.hpp"			// NATO
	#include "cfgBlufor_Exp.hpp"		// NATO (Pacific)
	#include "cfgViper.hpp"				// Viper
	#include "cfgBlufor_Enoch.hpp"		// NATO (Woodland)
	#include "cfgOpfor_Aegis.hpp"		// CSAT (Woodland)
	#include "cfgLegion.hpp"			// Legion
	#include "cfgBlufor_Atlas.hpp"		// NATO (European)
	#include "cfgADF.hpp"				// ADF
	#include "cfgHIL.hpp"				// HIL
	#include "cfgOpfor_Atlas.hpp"		// CSAT (Caspian)
	class I_Soldier_base_F: SoldierGB
	{
		class EventHandlers;
	};
	class I_soldier_F: I_Soldier_base_F{};
	class I_pilot_F;
	// #include "cfgCDF.hpp"				// CDF
	#include "cfgIDF.hpp"				// IDF
	#include "cfgUNO.hpp"				// UNO
};
#include "cfgGroups.hpp"