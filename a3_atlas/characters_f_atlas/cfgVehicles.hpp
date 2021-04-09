class CfgVehicles
{
    /* Definitons */
    #include "\A3_Aegis\macros_characters.hpp"
    #include "\A3_Aegis\macros_smokeShells.hpp"

    /* Bases */
    class Civilian_F;
	class SoldierWB;
	class SoldierEB;
	class SoldierGB;

    /* Factions */
    #include "cfgOPFOR.hpp"     // Belarus
    class I_Soldier_base_F: SoldierGB
    {
        class EventHandlers;
    };
    class I_soldier_F: I_Soldier_base_F{};
    class I_pilot_F;
    #include "cfgCivil.hpp"     // Civilians
    #include "cfgViper.hpp"     // Viper
    #include "cfgLegion.hpp"    // Legionnaires
	#include "cfgGER.hpp"		// Bundeswehr
	#include "cfgTKA.hpp"		// Takistani Army
    #include "cfgHIMF.hpp"      // HIMF
    #include "cfgIDF.hpp"       // IDF
    #include "cfgUNO.hpp"       // UNO
    #include "cfgVenezuela.hpp" // Venezuela

    /* Uniforms */
    #include "cfgUniforms.hpp"

    /* Deprecated */
    #include "deprecated.hpp"
};