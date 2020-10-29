#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
class CfgVehicles
{
    // Arma 3
	class Plane;
	class Plane_Base_F: Plane
	{
		class Components;
	};
	// Arma 3 Jets
	class Plane_Fighter_01_Base_F: Plane_Base_F
	{
		class Components: Components
		{
			class TransportPylonsComponent
			{
				class pylons
				{
					class pylon1;
					class pylon2;
					class pylon3
					{
						hardpoints[] += {B_AGM_154};
					};
					class pylon4;
                    class pylonBayRight1;
                    class pylonBayLeft1;
                    class pylonBayCenter1;
                    class pylonBayCenter2;
                    class pylonBayCenter3;
                    class pylonBayCenter4;
					class pylonBayCenter5;
                    class pylonBayCenter6;
				};
			};
        };
		class TextureSources
		{
			class DarkGrey
			{
				displayName = $STR_A3_A_TEXTURESOURCES_DARKGREY0;
				factions[] =
				{
					BLU_F,
					BLU_T_F,
					BLU_W_F
				};
			};
			class DarkGreyCamo
			{
				displayName = $STR_A3_A_TEXTURESOURCES_DARKGREYCAMO0;
				factions[] =
				{
					BLU_F,
					BLU_T_F,
					BLU_W_F
				};
			};
		};
		class EjectionSystem;
		/*
		class Attributes
		{
			class CustomPlaneNumber1
			{
				displayName = $STR_3den_object_attribute_CustomShipNumber1_displayname;
				tooltip = $STR_3den_object_attribute_CustomShipNumber1_tooltip;
				property = CustomPlaneNumber1;
				control = EditShort;
				expression = "_this setVariable ['Aegis_fnc_fighter01InitNumbers',_value,0]";
				defaultValue = "1";
				validate = number;
				typeName = NUMBER;
			};
			class CustomPlaneNumber2
			{
				displayName = $STR_3den_object_attribute_CustomShipNumber2_displayName;
				tooltip = $STR_3den_object_attribute_CustomShipNumber2_tooltip;
				property = CustomPlaneNumber2;
				control = EditShort;
				expression = "_this setVariable ['Aegis_fnc_fighter01InitNumbers',_value,1]";
				defaultValue = "0";
				validate = number;
				typeName = NUMBER;
			};
			class CustomPlaneNumber3
			{
				displayName = $STR_3den_object_attribute_CustomShipNumber3_displayName;
				tooltip = $STR_3den_object_attribute_CustomShipNumber3_tooltip;
				property = CustomPlaneNumber3;
				control = EditShort;
				expression = "_this setVariable ['Aegis_fnc_fighter01InitNumbers',_value,2]";
				defaultValue = "1";
				validate = number;
				typeName = NUMBER;
			};
		};
		*/
	};
	class Ejection_Seat_Plane_Fighter_01_base_F;
	class B_Plane_Fighter_01_F: Plane_Fighter_01_Base_F{};
	class B_Plane_Fighter_01_Stealth_F: Plane_Fighter_01_Base_F{};
	// Arma 3 Aegis
	#include "cfgBlufor_Exp.hpp"        // US (Pacific)
	#include "cfgBlufor_Enoch.hpp"		// US (Woodland)
};