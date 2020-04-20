#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
class CfgVehicles
{
	// Arma 3
	class Air;
	class Helicopter: Air
	{
		class HitPoints;
	};
	class Helicopter_Base_F: Helicopter
	{
		class Turrets;
	};
	class Helicopter_Base_H: Helicopter_Base_F
	{
		class Turrets: Turrets
		{
			class CopilotTurret;
		};
	};
	class Heli_Transport_02_base_F: Helicopter_Base_H
	{
		class EventHandlers;
		class TextureSources
		{
			class ION
			{
				displayName = $STR_A3_TEXTURESOURCES_ION1;
				factions[] = {BLU_ION_F};
			};
			class President
			{
				displayName = "President";
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Aegis\Air_F_Aegis\Heli_Transport_02\Data\Skins\Heli_Transport_02_1_President_CO.paa",
					"\A3_Aegis\Air_F_Aegis\Heli_Transport_02\Data\Skins\Heli_Transport_02_2_President_CO.paa",
					"\A3_Aegis\Air_F_Aegis\Heli_Transport_02\Data\Skins\Heli_Transport_02_3_President_CO.paa",
					"\A3\Air_F_Beta\Heli_Transport_02\Data\Heli_Transport_02_int_02_CO.paa"
				};
				factions[] = {CIV_F};
			};
			class Vrana
			{
				displayName = $STR_A3_TEXTURESOURCES_VRANA0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Aegis\Air_F_Aegis\Heli_Transport_02\Data\Skins\Heli_Transport_02_1_Vrana_CO.paa",
					"\A3_Aegis\Air_F_Aegis\Heli_Transport_02\Data\Skins\Heli_Transport_02_2_Vrana_CO.paa",
					"\A3_Aegis\Air_F_Aegis\Heli_Transport_02\Data\Skins\Heli_Transport_02_3_Vrana_CO.paa",
					"\A3\Air_F_Beta\Heli_Transport_02\Data\Heli_Transport_02_int_02_CO.paa"
				};
				factions[] = {CIV_F};
			};
			class Wave
			{
				displayName = $STR_A3_TEXTURESOURCES_WAVE0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Aegis\Air_F_Aegis\Heli_Transport_02\Data\Skins\Heli_Transport_02_1_Wave_CO.paa",
					"\A3_Aegis\Air_F_Aegis\Heli_Transport_02\Data\Skins\Heli_Transport_02_2_Wave_CO.paa",
					"\A3_Aegis\Air_F_Aegis\Heli_Transport_02\Data\Skins\Heli_Transport_02_3_Wave_CO.paa",
					"\A3\Air_F_Beta\Heli_Transport_02\Data\Heli_Transport_02_int_02_CO.paa"
				};
				factions[] = {CIV_F};
			};
			class Black
			{
				displayName = $STR_A3_TEXTURESOURCES_BLACK0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Aegis\Air_F_Aegis\Heli_Transport_02\Data\Skins\Heli_Transport_02_1_Black_CO.paa",
					"\A3_Aegis\Air_F_Aegis\Heli_Transport_02\Data\Skins\Heli_Transport_02_2_Black_CO.paa",
					"\A3_Aegis\Air_F_Aegis\Heli_Transport_02\Data\Skins\Heli_Transport_02_3_Black_CO.paa",
					"\A3\Air_F_Beta\Heli_Transport_02\Data\Heli_Transport_02_int_02_CO.paa"
				};
				factions[] = {BLU_A_F};
			};
			class Blufor
			{
				displayName = $STR_A3_TEXTURESOURCES_BLU0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Aegis\Air_F_Aegis\Heli_Transport_02\Data\Heli_Transport_02_1_CO.paa",
					"\A3_Aegis\Air_F_Aegis\Heli_Transport_02\Data\Heli_Transport_02_2_CO.paa",
					"\A3_Aegis\Air_F_Aegis\Heli_Transport_02\Data\Heli_Transport_02_3_CO.paa",
					"\A3\Air_F_Beta\Heli_Transport_02\Data\Heli_Transport_02_int_02_CO.paa"
				};
				factions[] = {BLU_A_F};
			};
			class Grey
			{
				displayName = $STR_A3_TEXTURESOURCES_GREY0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Aegis\Air_F_Aegis\Heli_Transport_02\Data\Skins\Heli_Transport_02_1_Grey_CO.paa",
					"\A3_Aegis\Air_F_Aegis\Heli_Transport_02\Data\Skins\Heli_Transport_02_2_Grey_CO.paa",
					"\A3_Aegis\Air_F_Aegis\Heli_Transport_02\Data\Skins\Heli_Transport_02_3_Grey_CO.paa",
					"\A3\Air_F_Beta\Heli_Transport_02\Data\Heli_Transport_02_int_02_CO.paa"
				};
				factions[] = {BLU_A_F};
			};
		};
		textureList[] =
		{
			AAF,1,
			ION,0,
			Dahoman,0,
			President,0,
			Vrana,0,
			Black,0,
			Blufor,0,
			Grey,0,
			IDAP,0
		};
	};
	// Arma 3 Aegis
	class Heli_Transport_02_civil_base_F: Heli_Transport_02_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_CfgVehicles_C_IDAP_Heli_Transport_02_F0;
		cost = 800000;
		threat[] = {0,0,0};
		class TransportBackpacks
		{
			bag_xx(B_Parachute,16);
		};
		class TransportMagazines{};
		class TransportWeapons{};
		class TransportItems
		{
			item_xx(FirstAidKit,8);
		};
		weapons[] = {};
		magazines[] = {};
		availableForSupportTypes[] =
		{
			Drop,
			Transport
		};
		class EventHandlers: EventHandlers
		{
			init = "if (local (_this select 0)) then {[(_this select 0), """", [], false] call bis_fnc_initVehicle;};";
		};
	};
	class Heli_Transport_02_medevac_base_F: Heli_Transport_02_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = "CH-49 Mohawk (Medical)";
		cost = 800000;
		threat[] = {0,0,0};
		attendant = true;
		forceInGarage = true;
		class TransportBackpacks
		{
			bag_xx(B_Parachute,16);
		};
		class TransportMagazines{};
		class TransportWeapons{};
		class TransportItems
		{
			item_xx(FirstAidKit,16);
			item_xx(ToolKit,1);
			item_xx(Medikit,2);
			item_xx(ItemGPS,1);
		};
		weapons[] = {};
		magazines[] = {};
		availableForSupportTypes[] =
		{
			Drop,
			Transport
		};
		class TextureSources
		{
			class AAF
			{
				displayName = $STR_A3_TEXTURESOURCES_INDEP0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Aegis\Air_F_Aegis\Heli_Transport_02\Data\Heli_Transport_02_1_medevac_INDP_CO.paa",
					"\A3_Aegis\Air_F_Aegis\Heli_Transport_02\Data\Heli_Transport_02_2_medevac_INDP_CO.paa",
					"\A3\Air_F_Beta\Heli_Transport_02\Data\Heli_Transport_02_3_INDP_CO.paa",
					"\A3\Air_F_Beta\Heli_Transport_02\Data\Heli_Transport_02_int_02_CO.paa"
				};
				factions[] = {IND_F};
			};
			class Blufor
			{
				displayName = $STR_A3_TEXTURESOURCES_BLU0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Aegis\Air_F_Aegis\Heli_Transport_02\Data\Heli_Transport_02_1_medevac_CO.paa",
					"\A3_Aegis\Air_F_Aegis\Heli_Transport_02\Data\Heli_Transport_02_2_medevac_CO.paa",
					"\A3_Aegis\Air_F_Aegis\Heli_Transport_02\Data\Heli_Transport_02_3_CO.paa",
					"\A3\Air_F_Beta\Heli_Transport_02\Data\Heli_Transport_02_int_02_CO.paa"
				};
				factions[] = {BLU_A_F};
			};
		};
		textureList[] =
		{
			AAF,1,
			Blufor,0
		};
		class EventHandlers: EventHandlers
		{
			init = "if (local (_this select 0)) then {[(_this select 0), """", [], false] call bis_fnc_initVehicle;};";
		};
	};
	#include "cfgCivil.hpp"
	#include "cfgIndep.hpp"
	#include "cfgBlufor_Aegis.hpp"
	#include "cfgIon.hpp"
};