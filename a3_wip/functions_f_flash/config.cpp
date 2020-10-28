#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
class CfgFunctions
{
	class A3_Aegis
	{
		tag = "Aegis";
		project = "arma3aegis";
		class Flashbang
		{
			file = "A3_Aegis\Functions_F_Aegis\Flashbang";
			class initFlashbang
			{
			    postInit = true;
			};
            /* This shouldn't be necessary, but here it is just in-case
			class initFlashbang
			{
			    postInit = true;
                file = "A3_Aegis\Functions_F_Aegis\Flashbang\fn_initFlashbang.sqf";
			};
            */
		};
    };
};