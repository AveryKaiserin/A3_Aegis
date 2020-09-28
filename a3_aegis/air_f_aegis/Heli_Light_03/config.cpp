#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
class CfgVehicles
{
	// Arma 3
	class Air;
	class Helicopter: Air
	{
		class Turrets;
	};
	class Helicopter_Base_F: Helicopter
	{
		class Turrets: Turrets
		{
			class MainTurret;
		};
	};
	class Heli_light_03_base_F: Helicopter_Base_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[] = {Laserdesignator_mounted};
				magazines[] = {Laserbatteries};
			};
		};
		class Components;
		class TextureSources
		{
			class Green
			{
				textures[] =
				{
					"\A3\Air_F_EPB\Heli_Light_03\Data\Heli_Light_03_base_CO.paa",
					"\A3\Weapons_F\Ammoboxes\Data\AmmoBox_HAF_CO.paa",
					"\A3\Weapons_F\Ammoboxes\Data\AmmoBox_signs_HAF_CA.paa"
				};
			};
			class Indep
			{
				textures[] =
				{
					"\A3\Air_F_EPB\Heli_Light_03\Data\Heli_Light_03_base_INDP_CO.paa",
					"\A3\Weapons_F\Ammoboxes\Data\AmmoBox_HAF_CO.paa",
					"\A3\Weapons_F\Ammoboxes\Data\AmmoBox_signs_HAF_CA.paa"
				};
			};
			class Blufor
			{
				displayName = $STR_A3_TEXTURESOURCES_BLU0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Aegis\Air_F_Aegis\Heli_Light_03\Data\Heli_Light_03_base_BLUFOR_CO.paa",
					"\A3\Weapons_F\Ammoboxes\Data\AmmoBox_CO.paa",
					"\A3\Weapons_F\Ammoboxes\Data\AmmoBox_signs_CA.paa"
				};
				factions[] =
                {
                    BLU_A_F,
                    BLU_A_tna_F,
                    BLU_A_wdl_F
                };
			};
			class Grey
			{
				displayName = $STR_A3_TEXTURESOURCES_GREY0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Aegis\Air_F_Aegis\Heli_Light_03\Data\Heli_Light_03_base_grey_CO.paa",
					"\A3\Weapons_F\Ammoboxes\Data\AmmoBox_CO.paa",
					"\A3\Weapons_F\Ammoboxes\Data\AmmoBox_signs_CA.paa"
				};
				factions[] =
                {
                    BLU_A_F,
                    BLU_A_tna_F,
                    BLU_A_wdl_F
                };
			};
		};
	};
	class Heli_light_03_dynamicLoadout_base_F: Heli_light_03_base_F
	{
		class Components: Components
		{
			class TransportPylonsComponent
			{
				class Pylons
				{
					class PylonLeft1
					{
						hardpoints[] =
						{
							DAR,
							DAGR,
							B_SHIEKER,
							UNI_SCALPEL,
							20MM_TWIN_CANNON,
							20MM_CANNON,
							B_ASRRAM_EJECTOR
						};
					};
					class PylonRight1: PylonLeft1
					{
						hardpoints[] =
						{
							DAR,
							DAGR,
							B_SHIEKER,
							UNI_SCALPEL,
							20MM_TWIN_CANNON,
							20MM_CANNON,
							B_ASRRAM_EJECTOR
						};
					};
				};
			};
		};
	};
	class Heli_light_03_unarmed_base_F: Heli_light_03_base_F{};
	class I_Heli_light_03_dynamicLoadout_F: Heli_light_03_dynamicLoadout_base_F
	{
		hiddenSelections[] =
		{
			camo,
			ammobox,
			ammobox_sign
		};
		hiddenSelectionsTextures[] =
		{
			"\A3\Air_F_EPB\Heli_Light_03\Data\Heli_Light_03_base_INDP_CO.paa",
			"\A3\Weapons_F\Ammoboxes\Data\AmmoBox_HAF_CO.paa",
			"\A3\Weapons_F\Ammoboxes\Data\AmmoBox_signs_HAF_CA.paa"
		};
	};
	// Arma 3 Aegis
	#include "cfgBlufor_Aegis.hpp"		// BAF
};