#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
class CfgVehicles
{
	// Arma 3
	class Tank_F;
	class LT_01_base_F: Tank_F
	{
		class TextureSources
		{
			class Indep_Olive
			{
				textures[] =
				{
					"\A3\Armor_F_Tank\LT_01\Data\LT_01_Main_olive_CO.paa",
					"\A3\Armor_F_Tank\LT_01\Data\LT_01_Radar_olive_CO.paa",
					"\A3\Armor_F\Data\camonet_NATO_Green_CO.paa",
					"\A3\Armor_F\Data\cage_olive_CO.paa"
				};
				factions[] = {BLU_E_F};
			};
		};
		class Turrets;
	};
	class LT_01_AT_base_F: LT_01_base_F
	{
		class TextureSources: TextureSources
		{
			class Indep_Olive: Indep_Olive
			{
				textures[] =
				{
					"\A3\Armor_F_Tank\LT_01\Data\LT_01_Main_olive_CO.paa",
					"\A3\Armor_F_Tank\LT_01\Data\LT_01_AT_olive_CO.paa",
					"\A3\Armor_F\Data\camonet_NATO_Green_CO.paa",
					"\A3\Armor_F\Data\cage_olive_CO.paa"
				};
			};
		};
		class Turrets: Turrets
		{
			class MainTurret;
		};
	};
	class LT_01_scout_base_F: LT_01_base_F
	{
		class TextureSources: TextureSources
		{
			class Indep_Olive: Indep_Olive
			{
				textures[] =
				{
					"\A3\Armor_F_Tank\LT_01\Data\LT_01_Main_olive_CO.paa",
					"\A3\Armor_F_Tank\LT_01\Data\LT_01_Radar_olive_CO.paa",
					"\A3\Armor_F\Data\camonet_NATO_Green_CO.paa",
					"\A3\Armor_F\Data\cage_olive_CO.paa"
				};
			};
		};
		class Turrets: Turrets
		{
			class MainTurret;
		};
	};
	class LT_01_AA_base_F: LT_01_base_F
	{
		class TextureSources: TextureSources
		{
			class Indep_Olive: Indep_Olive
			{
				textures[] =
				{
					"\A3\Armor_F_Tank\LT_01\Data\LT_01_Main_olive_CO.paa",
					"\A3\Armor_F_Tank\LT_01\Data\LT_01_AT_olive_CO.paa",
					"\A3\Armor_F\Data\camonet_NATO_Green_CO.paa",
					"\A3\Armor_F\Data\cage_olive_CO.paa"
				};
			};
		};
		class Turrets: Turrets
		{
			class MainTurret;
		};
	};
	class LT_01_cannon_base_F: LT_01_base_F
	{
		class TextureSources: TextureSources
		{
			class Indep_Olive: Indep_Olive
			{
				textures[] =
				{
					"\A3\Armor_F_Tank\LT_01\Data\LT_01_Main_olive_CO.paa",
					"\A3\Armor_F_Tank\LT_01\Data\LT_01_Cannon_olive_CO.paa",
					"\A3\Armor_F\Data\camonet_NATO_Green_CO.paa",
					"\A3\Armor_F\Data\cage_olive_CO.paa"
				};
			};
		};
		class Turrets: Turrets
		{
			class MainTurret;
		};
	};
	// Arma 3 Atlas
	#include "cfgBlufor_Atlas.hpp"      // NATO (German)
};