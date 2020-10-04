#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
class CfgVehicles
{
	// Arma 3
    class Heli_Light_01_unarmed_base_F;
    class Heli_Light_01_armed_base_F;
    class Heli_Light_01_dynamicLoadout_base_F: Heli_Light_01_armed_base_F
    {
		class Components: Components
        {
			class TransportPylonsComponent
            {
				class Pylons
				{
					class PylonLeft1
                    {
                        hardpoints[] += {UNI_SCALPEL};
                    };
					class PylonRight1: PylonLeft1
                    {
                        hardpoints[] += {UNI_SCALPEL};
                    };
                };
				class Presets
				{
					class Default;
					class AT;
				};
            };
        };
    };
    class B_Heli_Light_01_F;
    class B_Heli_Light_01_dynamicLoadout_F;
    // Arma 3 Aegis
    class Heli_Light_01_recon_base_F;
	// Arma 3 Atlas
	#include "cfgIDF.hpp"               // IDF
    // Deprecated classes
    #include "deprecated.hpp"
};