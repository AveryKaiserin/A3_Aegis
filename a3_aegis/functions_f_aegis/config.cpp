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
		class Environment
		{
			file = "A3_Aegis\Functions_F_Aegis\Environment";
			class initWorldScene{};
			class initWorldSceneVR{};
		};
    };
};