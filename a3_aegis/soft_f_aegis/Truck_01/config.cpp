#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
class CfgVehicles
{
	// Arma 3
	class Truck_01_base_F;
	class B_Truck_01_transport_F: Truck_01_base_F
    {
		cargoProxyIndexes[] =
        {
            2,
            3,
            4,
            5,
            6,
            7,
            9,
            10,
            11,
            12,
            13,
            14,
            15,
            17,
            1
        };
		getInProxyOrder[] =
        {
            2,
            3,
            4,
            5,
            6,
            7,
            8,
            9,
            10,
            11,
            12,
            13,
            14,
            15,
            16,
            17,
            1
        };
    };
	class B_Truck_01_covered_F: Truck_01_base_F
    {
		cargoProxyIndexes[] =
        {
            2,
            3,
            4,
            5,
            6,
            7,
            9,
            10,
            11,
            12,
            13,
            14,
            15,
            17,
            1
        };
		getInProxyOrder[] =
        {
            2,
            3,
            4,
            5,
            6,
            7,
            8,
            9,
            10,
            11,
            12,
            13,
            14,
            15,
            16,
            17,
            1
        };
    };
	class B_Truck_01_mover_F;
	class B_Truck_01_box_F;
	class B_Truck_01_Repair_F;
	class B_Truck_01_ammo_F;
	class B_Truck_01_fuel_F;
	class B_Truck_01_medical_F;
	// Arma 3 Enoch
	class Truck_01_flatbed_base_F;
	class Truck_01_cargo_base_F;
	// Arma 3 Aegis
	#include "cfgBlufor_Enoch.hpp"
	#include "cfgBlufor_Aegis.hpp"
};