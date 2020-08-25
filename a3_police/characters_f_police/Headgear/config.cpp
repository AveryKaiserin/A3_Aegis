#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
#include "cfgVehicles.hpp"
class CfgWeapons
{
    // Arma 3 Atlas
    class H_HelmetSpecter_base_F;
	class H_HelmetSpecter_headset_base_F: H_HelmetSpecter_base_F
	{
		class ItemInfo;
    };
    // Arma 3 Police
	class H_HelmetSpecter_headset_noflag_base_F: H_HelmetSpecter_headset_base_F
	{
		author = $STR_A3_A_AveryTheKitty_Deathstruck_and_Midnas;
		model = "\A3_Police\Characters_F_Police\Headgear\H_HelmetSpecter_headset_noflag_F.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\A3_Police\Characters_F_Police\Headgear\H_HelmetSpecter_headset_noflag_F.p3d";
	  	};
	};
	class H_HelmetSpecter_black_headset_noflag_F: H_HelmetSpecter_headset_noflag_base_F
	{
		author = $STR_A3_A_AveryTheKitty_Deathstruck_and_Midnas;
		scope = public;
		displayName = $STR_A3_P_CfgWeapons_H_HelmetSpecter_black_headset_noflag_F0;
		//picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_H_HelmetSpecter_black_headset_F_CA.paa";
		hiddenSelectionsTextures[] =
		{
			"\A3_Atlas\Characters_F_Atlas\Headgear\Data\H_HelmetSpecter_01_black_CO.paa",
			"\A3_Atlas\Characters_F_Atlas\Headgear\Data\H_HelmetSpecter_01_cover_autumn_CO.paa"
		};
	};
};