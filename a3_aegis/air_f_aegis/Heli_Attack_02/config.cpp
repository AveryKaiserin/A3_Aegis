#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
class CfgVehicles
{
	// Arma 3
	class Helicopter_Base_F;
	class Heli_Attack_02_base_F: Helicopter_Base_F
	{
		class Components;
		class TextureSources
		{
			class Black
			{
				factions[] =
				{
					OPF_F,
					OPF_T_F,
					Aegis_OPF_A_F,
					OPF_R_F,
					Aegis_OPF_R_ard_F
				};
			};
			class Opfor
			{
				displayName = $STR_A3_TEXTURESOURCES_HEX0;
				factions[] =
				{
					OPF_F,
					Aegis_OPF_A_F
				};
			};
			class GreenHex
			{
				displayName = $STR_A3_TEXTURESOURCES_GREENHEX0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Aegis\Air_F_Aegis\Heli_Attack_02\Data\Heli_Attack_02_body1_ghex_CO.paa",
					"\A3_Aegis\Air_F_Aegis\Heli_Attack_02\Data\Heli_Attack_02_body2_ghex_CO.paa"
				};
				factions[] = {OPF_T_F};
			};
		};
	};
	class Heli_Attack_02_dynamicLoadout_base_F: Heli_Attack_02_base_F
	{
		class Components: Components
		{
			class TransportPylonsComponent
			{
				class Pylons
				{
					class PylonLeft1;
					class PylonLeft2;
					class PylonRight2;
					class PylonRight1;
				};
				class Presets
				{
					class Empty;
					class Default;
					class AT;
					class HAT;
					class CAS;
				};
			};
		};
	};
	class O_Heli_Attack_02_dynamicLoadout_F: Heli_Attack_02_dynamicLoadout_base_F{};
	// Arma 3 Aegis
	#include "cfgOpfor_Exp.hpp"     // China
	#include "cfgOpfor_Tacops.hpp"  // Argana
	#include "cfgSpetsnaz.hpp"      // Russia
    // Deprecated classes
    #include "deprecated.hpp"
};