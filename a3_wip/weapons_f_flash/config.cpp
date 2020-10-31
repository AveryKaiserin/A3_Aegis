#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
#include "cfgAmmo.hpp"
#include "cfgMagazines.hpp"
#include "cfgWeapons.hpp"
class CfgVehicles
{
    class B_Soldier_unarmed_F;
    class TEST_B_Soldier_flash_F: B_Soldier_unarmed_F
    {
        displayName = "TEST DUDE WITH FLASHES";
        magazines[] = {mag_10(FlashGrenade)};
        respawnMagazines[] = {mag_10(FlashGrenade)};
    };
};