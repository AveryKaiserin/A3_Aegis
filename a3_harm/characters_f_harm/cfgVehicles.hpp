class CfgVehicles
{
    /* Definitons */
    #include "\A3_Aegis\macros_characters.hpp"
    #include "\A3_Aegis\macros_smokeShells.hpp"

    /* Inheritance Tree */
    class CAManBase;
    class Civilian;

    /* Bases */
    class Civilian_F: Civilian
    {
        modelSides[] = {TFriendly};
        linkedItems[] = {ItemSmartPhone};
        respawnLinkedItems[] = {ItemSmartPhone};
    };
	class SoldierWB: CAManBase
    {
	    modelSides[] = {TFriendly};
    };

     /* Factions */
    #include "cfgBLUFOR.hpp"        // US
    #include "cfgUSMC.hpp"
    #include "cfgBluforPacific.hpp"
    #include "cfgBluforWoodland.hpp"
};