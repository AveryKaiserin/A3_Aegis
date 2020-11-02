#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
class CfgFunctions
{
	class A3_Aegis
	{
		tag = "Aegis";
		project = "arma3aegis";
		/*
		class Aircraft
		{
			file = "A3_Aegis\Functions_F_Aegis\Aircraft";
			class fighter01InitNumbers{};
			class fighter02InitNumbers{};
			class fighter04InitNumbers{};
			class uav05InitNumbers{};
		};
		*/
		class Ambient
		{
			file = "A3_Aegis\Functions_F_Aegis\Ambient";
			class animalBehaviour
			{
				description = "Animal behaviour control. Called by Animals_F_Aegis\Data\Scripts\main.fsm.";
				headerType = 1;
			};
			class animalRandomization{};
		};
		class GUI
		{
			file = "A3_Aegis\Functions_F_Aegis\GUI";
			class initWorldScene{};
			class initWorldSceneVR{};
			class showHorizontalCompass
			{
				postInit = true;
			};
        };
    };
};