#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
class CfgVehicles
{
	// Arma 3
    class Helicopter_Base_H;
    class Heli_Light_01_base_F: Helicopter_Base_H
	{
        class Components;
		class TextureSources
		{
			class Desert
			{
				displayName = $STR_A3_TEXTURESOURCES_DESERT0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] = {"A3_Atlas\Air_F_Atlas\Heli_Light_01\Data\Heli_Light_01_ext_desert_CO.paa"};
				factions[] = {Aegis_IND_I_F};
			};
		};
    };
    class Heli_Light_01_unarmed_base_F: Heli_Light_01_base_F{};
    class Heli_Light_01_armed_base_F: Heli_Light_01_base_F
    {
		class TextureSources: TextureSources
		{
			class Desert: Desert
			{
				textures[] =
                {
                    "\A3_Atlas\Air_F_Atlas\Heli_Light_01\Data\Heli_Light_01_ext_desert_CO.paa",
                    "\A3\Air_F\Heli_Light_01\Data\Heli_Light_01_dot_CA.paa"
                };
			};
		};
    };
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