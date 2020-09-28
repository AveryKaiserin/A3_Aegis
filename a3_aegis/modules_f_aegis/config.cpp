#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
class CfgVehicles
{
	// Arma 3 Zeus Update
	class Logic;
	class Module_F: Logic
	{
		class ModuleDescription
		{
			class AnyPlayer;
		};
	};
	class ModuleAnimals_F: Module_F
	{
		class Arguments
		{
			class Type
			{
				class values
				{
					class Dogs
					{
						name = $STR_A3_A_CfgVehicles_Aegis_ModuleAnimalsDog_F;
						value = Fin_random_F;
					};
					class Crows
					{
						name = $STR_A3_A_CfgVehicles_Aegis_ModuleAnimalsCrow_F;
						value = Crowe;
					};
					class Eagle
					{
						name = $STR_A3_A_CfgVehicles_Aegis_ModuleAnimalsEagle_F;
						value = Eagle_F;
					};
					class Cows
					{
						name = $STR_A3_A_CfgVehicles_Aegis_ModuleAnimalsCow_F;
						value = Aegis_Cow_random_F;
					};
				};
			};
		};
	};
	class ModulePostprocess_F: Module_F
	{
		class Arguments
		{
			class Template
			{
				class Values
				{
					class Limnos
					{
						name = $STR_A3_A_CfgPostProcessTemplates_Limnos0;
						value = Limnos;
						default = false;
					};
					class Magnitude
					{
						name = $STR_A3_A_CfgPostProcessTemplates_Magnitude0;
						value = Magnitude;
						default = false;
					};
				};
			};
		};
	};
	// Arma 3 Aegis
	class Aegis_ModuleAnimalsDog_F: ModuleAnimals_F
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = protected;
		scopeCurator = public;
		displayName = $STR_A3_A_CfgVehicles_Aegis_ModuleAnimalsDog_F;
		category = Animals;
		portrait = "\A3_Aegis\Modules_F_Aegis\Data\portraitAnimalsDogs_CA.paa";
		animalType = Fin_random_F;
	};
	class Aegis_ModuleAnimalsCrow_F: ModuleAnimals_F
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = protected;
		scopeCurator = public;
		displayName = $STR_A3_A_CfgVehicles_Aegis_ModuleAnimalsCrow_F;
		category = Animals;
		portrait = "\A3_Aegis\Modules_F_Aegis\Data\portraitAnimalsCrows_CA.paa";
		animalType = Crowe;
	};
	class Aegis_ModuleAnimalsEagle_F: ModuleAnimals_F
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = protected;
		scopeCurator = public;
		displayName = $STR_A3_A_CfgVehicles_Aegis_ModuleAnimalsEagle_F;
		category = Animals;
		portrait = "\A3_Aegis\Modules_F_Aegis\Data\portraitAnimalsEagles_CA.paa";
		animalType = Eagle_F;
	};
	class Aegis_ModuleAnimalsCow_F: ModuleAnimals_F
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = protected;
		scopeCurator = public;
		displayName = $STR_A3_A_CfgVehicles_Aegis_ModuleAnimalsCow_F;
		category = Animals;
		portrait = "\A3_Aegis\Modules_F_Aegis\Data\portraitAnimalsCows_CA.paa";
		animalType = Aegis_Cow_random_F;
	};
};