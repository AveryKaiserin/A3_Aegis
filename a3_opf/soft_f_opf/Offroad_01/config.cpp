#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
class CfgVehicles
{
	// Arma 3
	class LandVehicle;
	class Car: LandVehicle
	{
		class NewTurret;
	};
	class Car_F: Car
	{
		class Turrets
		{
			class MainTurret: NewTurret{};
		};
		class EventHandlers;
	};
	class Offroad_01_base_F: Car_F
	{
		class TextureSources
		{
			class Insurgent_01
			{
				displayName = $STR_A3_O_TEXTURESOURCES_INSURGENT_010;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Opf\Soft_F_Opf\Offroad_01\Data\Offroad_01_ext_ins01_CO.paa",
					"\A3_Opf\Soft_F_Opf\Offroad_01\Data\Offroad_01_ext_ins01_CO.paa"
				};
				materials[] =
				{
					"\A3_Aegis\Soft_F_Aegis\Offroad_01\Data\Offroad_01_ext_IG.rvmat",
					"\A3\Soft_F\Offroad_01\Data\Offroad_01_ext_plastic.rvmat"
				};
				faction[] = {IND_T_F};
			};
			class Insurgent_02
			{
				displayName = $STR_A3_O_TEXTURESOURCES_INSURGENT_020;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Opf\Soft_F_Opf\Offroad_01\Data\Offroad_01_ext_ins02_CO.paa",
					"\A3_Opf\Soft_F_Opf\Offroad_01\Data\Offroad_01_ext_ins02_CO.paa"
				};
				materials[] =
				{
					"\A3_Aegis\Soft_F_Aegis\Offroad_01\Data\Offroad_01_ext_IG.rvmat",
					"\A3\Soft_F\Offroad_01\Data\Offroad_01_ext_plastic.rvmat"
				};
				faction[] = {IND_T_F};
			};
			class Insurgent_03
			{
				displayName = $STR_A3_O_TEXTURESOURCES_INSURGENT_030;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Opf\Soft_F_Opf\Offroad_01\Data\Offroad_01_ext_ins03_CO.paa",
					"\A3_Opf\Soft_F_Opf\Offroad_01\Data\Offroad_01_ext_ins03_CO.paa"
				};
				materials[] =
				{
					"\A3_Aegis\Soft_F_Aegis\Offroad_01\Data\Offroad_01_ext_IG.rvmat",
					"\A3\Soft_F\Offroad_01\Data\Offroad_01_ext_plastic.rvmat"
				};
				faction[] = {IND_T_F};
			};
			class Insurgent_04
			{
				displayName = $STR_A3_O_TEXTURESOURCES_INSURGENT_040;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Opf\Soft_F_Opf\Offroad_01\Data\Offroad_01_ext_ins04_CO.paa",
					"\A3_Opf\Soft_F_Opf\Offroad_01\Data\Offroad_01_ext_ins04_CO.paa"
				};
				materials[] =
				{
					"\A3_Aegis\Soft_F_Aegis\Offroad_01\Data\Offroad_01_ext_IG.rvmat",
					"\A3\Soft_F\Offroad_01\Data\Offroad_01_ext_plastic.rvmat"
				};
				faction[] = {IND_T_F};
			};
			class Insurgent_05
			{
				displayName = $STR_A3_O_TEXTURESOURCES_INSURGENT_050;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Opf\Soft_F_Opf\Offroad_01\Data\Offroad_01_ext_ins05_CO.paa",
					"\A3_Opf\Soft_F_Opf\Offroad_01\Data\Offroad_01_ext_ins05_CO.paa"
				};
				materials[] =
				{
					"\A3_Aegis\Soft_F_Aegis\Offroad_01\Data\Offroad_01_ext_IG.rvmat",
					"\A3\Soft_F\Offroad_01\Data\Offroad_01_ext_plastic.rvmat"
				};
				faction[] = {IND_T_F};
			};
			class Insurgent_06
			{
				displayName = $STR_A3_O_TEXTURESOURCES_INSURGENT_060;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Opf\Soft_F_Opf\Offroad_01\Data\Offroad_01_ext_ins06_CO.paa",
					"\A3_Opf\Soft_F_Opf\Offroad_01\Data\Offroad_01_ext_ins06_CO.paa"
				};
				materials[] =
				{
					"\A3_Aegis\Soft_F_Aegis\Offroad_01\Data\Offroad_01_ext_IG.rvmat",
					"\A3\Soft_F\Offroad_01\Data\Offroad_01_ext_plastic.rvmat"
				};
				faction[] = {IND_T_F};
			};
		};
	};
	class Offroad_01_military_base_F: Offroad_01_base_F
	{
		class AnimationSources;
		class TextureSources
		{
			class Insurgent_01
			{
				displayName = $STR_A3_O_TEXTURESOURCES_INSURGENT_010;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Opf\Soft_F_Opf\Offroad_01\Data\Offroad_01_ext_ins01_CO.paa",
					"\A3_Opf\Soft_F_Opf\Offroad_01\Data\Offroad_01_ext_ins01_CO.paa"
				};
				materials[] =
				{
					"\A3_Aegis\Soft_F_Aegis\Offroad_01\Data\Offroad_01_ext_IG.rvmat",
					"\A3\Soft_F\Offroad_01\Data\Offroad_01_ext_plastic.rvmat"
				};
				faction[] = {IND_T_F};
			};
			class Insurgent_02
			{
				displayName = $STR_A3_O_TEXTURESOURCES_INSURGENT_020;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Opf\Soft_F_Opf\Offroad_01\Data\Offroad_01_ext_ins02_CO.paa",
					"\A3_Opf\Soft_F_Opf\Offroad_01\Data\Offroad_01_ext_ins02_CO.paa"
				};
				materials[] =
				{
					"\A3_Aegis\Soft_F_Aegis\Offroad_01\Data\Offroad_01_ext_IG.rvmat",
					"\A3\Soft_F\Offroad_01\Data\Offroad_01_ext_plastic.rvmat"
				};
				faction[] = {IND_T_F};
			};
			class Insurgent_03
			{
				displayName = $STR_A3_O_TEXTURESOURCES_INSURGENT_030;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Opf\Soft_F_Opf\Offroad_01\Data\Offroad_01_ext_ins03_CO.paa",
					"\A3_Opf\Soft_F_Opf\Offroad_01\Data\Offroad_01_ext_ins03_CO.paa"
				};
				materials[] =
				{
					"\A3_Aegis\Soft_F_Aegis\Offroad_01\Data\Offroad_01_ext_IG.rvmat",
					"\A3\Soft_F\Offroad_01\Data\Offroad_01_ext_plastic.rvmat"
				};
				faction[] = {IND_T_F};
			};
			class Insurgent_04
			{
				displayName = $STR_A3_O_TEXTURESOURCES_INSURGENT_040;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Opf\Soft_F_Opf\Offroad_01\Data\Offroad_01_ext_ins04_CO.paa",
					"\A3_Opf\Soft_F_Opf\Offroad_01\Data\Offroad_01_ext_ins04_CO.paa"
				};
				materials[] =
				{
					"\A3_Aegis\Soft_F_Aegis\Offroad_01\Data\Offroad_01_ext_IG.rvmat",
					"\A3\Soft_F\Offroad_01\Data\Offroad_01_ext_plastic.rvmat"
				};
				faction[] = {IND_T_F};
			};
			class Insurgent_05
			{
				displayName = $STR_A3_O_TEXTURESOURCES_INSURGENT_050;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Opf\Soft_F_Opf\Offroad_01\Data\Offroad_01_ext_ins05_CO.paa",
					"\A3_Opf\Soft_F_Opf\Offroad_01\Data\Offroad_01_ext_ins05_CO.paa"
				};
				materials[] =
				{
					"\A3_Aegis\Soft_F_Aegis\Offroad_01\Data\Offroad_01_ext_IG.rvmat",
					"\A3\Soft_F\Offroad_01\Data\Offroad_01_ext_plastic.rvmat"
				};
				faction[] = {IND_T_F};
			};
			class Insurgent_06
			{
				displayName = $STR_A3_O_TEXTURESOURCES_INSURGENT_060;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Opf\Soft_F_Opf\Offroad_01\Data\Offroad_01_ext_ins06_CO.paa",
					"\A3_Opf\Soft_F_Opf\Offroad_01\Data\Offroad_01_ext_ins06_CO.paa"
				};
				materials[] =
				{
					"\A3_Aegis\Soft_F_Aegis\Offroad_01\Data\Offroad_01_ext_IG.rvmat",
					"\A3\Soft_F\Offroad_01\Data\Offroad_01_ext_plastic.rvmat"
				};
				faction[] = {IND_T_F};
			};
		};
	};
	class Offroad_01_armed_base_F: Offroad_01_military_base_F
	{
		class Turrets: Turrets
		{
			class M2_Turret: MainTurret{};
		};
		class AnimationSources: AnimationSources
		{
			class Hide_Shield
			{
				initPhase = false;
			};
			class Hide_Rail;
		};
	};
	class Offroad_01_AT_base_F: Offroad_01_military_base_F
	{
		class Turrets: Turrets
		{
			class AT_Turret: MainTurret{};
		};
	};
	// Arma 3 Opposing Forces
	#include "cfgChKDZ.hpp"
	#include "cfgTKM.hpp"
};