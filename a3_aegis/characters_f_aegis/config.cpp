#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
#include "cfgFaces.hpp"
class UniformSlotInfo;
class CfgVehicles
{
    class CAManBase;
	class SoldierWB: CAManBase
    {
	    modelSides[] = {TFriendly};
    };
	class SoldierEB: CAManBase
    {
	    modelSides[] = {TFriendly};
    };
	class SoldierGB: CAManBase
    {
	    modelSides[] = {TFriendly};
    };
	#include "cfgBlufor.hpp"			// US
	#include "cfgCivil.hpp"				// Civilians
	#include "cfgIndep.hpp"				// AAF
	#include "cfgGuerrilla.hpp"			// FIA
	#include "cfgOpfor.hpp"				// Iran
	#include "cfgSyndikat.hpp"			// Syndikat
	#include "cfgBlufor_Exp.hpp"		// US (Pacific)
	#include "cfgOpfor_Exp.hpp"			// China
	#include "cfgCTRG.hpp"				// CTRG
	#include "cfgViper.hpp"				// Viper
	#include "cfgGendarmerie.hpp"		// Gendarmerie
	#include "cfgOpfor_Tacops.hpp"		// Argana
	#include "cfgBlufor_Enoch.hpp"		// US (Woodland)
	#include "cfgSpetsnaz.hpp"			// Russia
	#include "cfgEAF.hpp"				// LDF
	#include "cfgLooters.hpp"			// Looters
	#include "cfgBlufor_Aegis.hpp"		// BAF
	#include "cfgIon.hpp"				// ION
	#include "cfgUniforms.hpp"
};
#include "cfgGroups.hpp"