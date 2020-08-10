#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
class CfgVehicles
{
	// Arma 3 Marksman
	class B_Static_Designator_01_F;
	class B_Static_Designator_01_weapon_F;
	// Arma 3 Atlas
	class I_Static_Designator_01_F;
	class I_Static_Designator_01_weapon_F: B_Static_Designator_01_weapon_F
	{
		class assembleInfo;
	};
	#include "cfgBlufor_Atlas.hpp"		// NATO (European)
	#include "cfgIDF.hpp"				// IDF
};