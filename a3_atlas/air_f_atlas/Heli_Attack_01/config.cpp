#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
class CfgVehicles
{
	// Arma 3
	class Helicopter_Base_F;
	class Heli_Attack_01_base_F: Helicopter_Base_F
	{
		class Turrets;
		class TextureSources
		{
			class IDF
			{
				displayName = $STR_A3_A_TEXTURESOURCES_IDF0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] = {"\A3_Atlas\Air_F_Atlas\Heli_Attack_01\Data\Heli_Attack_01_IDF_CO.paa"};
				factions[] = {IND_I_F};
			};
		};
	};
	class Heli_Attack_01_dynamicLoadout_base_F: Heli_Attack_01_base_F
	{
		class Turrets: Turrets
		{
			class MainTurret;
		};
	};
	// Arma 3 Atlas
	#include "cfgIDF.hpp"
};