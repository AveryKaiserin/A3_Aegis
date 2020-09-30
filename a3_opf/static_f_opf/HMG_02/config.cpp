#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
class CfgVehicles
{
	class StaticWeapon;
	class StaticMGWeapon: StaticWeapon
	{
		class Turrets;
	};
	// Arma 3 Oldman
	class HMG_02_base_F: StaticMGWeapon
	{
		class Turrets: Turrets
		{
			class MainTurret;
		};
		class AnimationSources
		{
			class Hide_Shield;
			class Hide_Rail;
		};
	};
	class HMG_02_high_base_F: HMG_02_base_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret{};
		};
	};
	// Arma 3 Opposing Forces
	#include "cfgPara.hpp"              // Paramilitary
	#include "cfgChKDZ.hpp"             // Separatists
	#include "cfgTKM.hpp"               // Insurgents
    /*
	#include "cfgMilitia.hpp"           // Patriots
    */
    // Deprecated... CLASSES! :O
	#include "deprecated.hpp"
};