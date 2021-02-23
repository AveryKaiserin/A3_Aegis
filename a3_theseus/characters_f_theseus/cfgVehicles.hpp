class CfgVehicles
{
    /* Definitions */
    #include "\A3_Aegis\macros_smokeShells.hpp"

    /* Bases */
    class SoldierGB;

    /* Factions */
    class I_Soldier_base_F: SoldierGB
    {
        class EventHandlers;
    };
    class I_soldier_F: I_Soldier_base_F{};
    class I_L_Soldier_Base_F: I_Soldier_base_F{};
    class O_G_Soldier_F;
    class I_Soldier_lite_F;
    class I_officer_F: I_Soldier_base_F{};
    #include "cfgNAAF.hpp"      // NAAF
    #include "cfgBandits.hpp"   // Bandits
    #include "cfgRemnants.hpp"  // Remnants

    /* Uniforms */
    #include "cfgUniforms.hpp"
};