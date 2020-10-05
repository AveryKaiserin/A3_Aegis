#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
class CfgVehicles
{
	// Arma 3
	class Truck_F;
	class Truck_02_base_F: Truck_F
	{
		class Turrets;
	};
	class Truck_02_transport_base_F;
	class O_Truck_02_covered_F;
    class O_Truck_02_transport_F;
	class O_Truck_02_box_F;
	class O_Truck_02_medical_F;
	class O_Truck_02_Ammo_F;
	class O_Truck_02_fuel_F;
    class Truck_02_MRL_base_F;
	// Arma 3 Aegis
	class Truck_02_cargo_base_F;
	class Truck_02_flatbed_base_F;
	// Arma 3 Atlas
	#include "cfgOpfor_Aegis.hpp"       // Belarus
	#include "cfgOpfor_Atlas.hpp"       // Takistani Army
    /*
	#include "cfgHIMF.hpp"              // HIMF
	#include "cfgCDF.hpp"               // CDF
    */
    // Deprecated classes
    #include "deprecated.hpp"
};