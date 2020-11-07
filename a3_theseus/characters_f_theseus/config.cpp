#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
class UniformSlotInfo;
class SoldierGB;
class I_Soldier_base_F: SoldierGB
{
    class EventHandlers;
};
class I_soldier_F: I_Soldier_base_F{};
class I_L_Soldier_Base_F: I_Soldier_base_F{};
class O_G_Soldier_F;
class CfgVehicles
{
    // NAAF
    #include "cfgNAAF.hpp"
    // Bandits
    #include "cfgBandits.hpp"
    // IDF
    #include "cfgIDF.hpp"
    // Remnants
    #include "cfgRemnants.hpp"
};
#include "cfgGroups.hpp"