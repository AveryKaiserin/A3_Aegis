#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
class CfgVehicles
{
	// Arma 3
	class Helicopter;
	class Helicopter_Base_F: Helicopter
	{
		class Turrets;
		class HitPoints;
	};
	class Helicopter_Base_H: Helicopter_Base_F
	{
		class Turrets: Turrets
		{
			class CopilotTurret;
		};
	};
	class Heli_Light_02_base_F: Helicopter_Base_H
	{
		class RotorLibHelicopterProperties;
		magazines[] =
		{
			2000Rnd_762x51_Belt_T_Green,
			12Rnd_PG_missiles,
			168Rnd_CMFlare_Chaff_Magazine
		};
		class Components;
		class Turrets: Turrets
		{
			class CopilotTurret: CopilotTurret{};
		};
		class TextureSources
		{
			class Opfor
			{
				textures[] = {"\A3_Aegis\Air_F_Aegis\Heli_Light_02\Data\Heli_Light_02_ext_OPFOR_CO.paa"};
				faction[] =
				{
					OPF_F,
					OPF_A_F
				};
			};
			class Black
			{
				faction[] =
				{
					OPF_F,
					OPF_T_F,
					OPF_A_F,
					OPF_R_F,
					OPF_R_ard_F,
					OPF_W_F
				};
			};
			class Blackcustom
			{
				faction[] =
				{
					OPF_F,
					OPF_T_F,
					OPF_A_F,
					OPF_R_F,
					OPF_R_ard_F,
					OPF_W_F
				};
			};
			class Blue
			{
				textures[] = {"\A3_Aegis\Air_F_Aegis\Heli_Light_02\Data\Heli_Light_02_ext_CIVILIAN_CO.paa"};
			};
			class Indep
			{
				displayName = $STR_A3_TEXTURESOURCES_INDEP0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] = {"\A3_Aegis\Air_F_Aegis\Heli_Light_02\Data\Heli_Light_02_ext_INDP_CO.paa"};
				faction[] = {IND_F};
			};
			class GreenHex
			{
				displayName = $STR_A3_TEXTURESOURCES_GREENHEX0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] = {"\A3_Aegis\Air_F_Aegis\Heli_Light_02\Data\Heli_Light_02_ext_ghex_CO.paa"};
				faction[] =
				{
					OPF_T_F,
					OPF_W_F
				};
			};
		};
		class EventHandlers;
	};
	class Heli_Light_02_unarmed_base_F: Heli_Light_02_base_F
	{
		weapons[] = {};
		magazines[] = {};
	};
	class Heli_Light_02_dynamicLoadout_base_F: Heli_Light_02_base_F
	{
		class Components: Components
		{
			class TransportPylonsComponent
			{
				class Pylons
				{
					class PylonLeft1
					{
						attachment = PylonWeapon_2000Rnd_762x51_Belt_T_Green;
						hardpoints[] =
						{
							O_SKYFIRE,
							DAGR,
							DAR,
							O_S5,
							O_ORCA_RIGHT_PYLON,
							20MM_TWIN_CANNON,
							SCALPEL_1RND_EJECTOR,
							B_ASRRAM_EJECTOR
						};
					};
					class PylonRight1
					{
						hardpoints[] =
						{
							O_SKYFIRE,
							DAGR,
							DAR,
							O_S5,
							20MM_TWIN_CANNON,
							SCALPEL_1RND_EJECTOR,
							B_ASRRAM_EJECTOR
						};
					};
				};
			};
		};
	};
	class O_Heli_Light_02_dynamicLoadout_F: Heli_Light_02_dynamicLoadout_base_F
	{
		hiddenSelectionsTextures[] = {"\A3_Aegis\Air_F_Aegis\Heli_Light_02\Data\Heli_Light_02_ext_OPFOR_CO.paa"};
	};
	class O_Heli_Light_02_unarmed_F: Heli_Light_02_unarmed_base_F
	{
		hiddenSelectionsTextures[] = {"\A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_CO.paa"};
	};
	class O_Heli_Light_02_v2_F: Heli_Light_02_base_F
	{
		magazines[] =
		{
			2000Rnd_762x51_Belt_T_Green,
			12Rnd_missiles,
			168Rnd_CMFlare_Chaff_Magazine
		};
	};
	// Arma 3 Aegis
	class Heli_Light_02_civil_base_F: Heli_Light_02_unarmed_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgVehicles_Heli_Light_02_civil_base_F0;
		model = "\A3_Aegis\Air_F_Aegis\Heli_Light_02\Heli_Light_02_civil_F.p3d";
		forceInGarage = false;
		cost = 900000;
		threat[] = {0,0,0};
		radarType = CM_none;
		class TransportBackpacks{};
		class TransportMagazines{};
		class TransportWeapons{};
		class TransportItems
		{
			item_xx(FirstAidKit,4);
		};
		delete MFD;
		class Damage
		{
			tex[] = {};
			mat[] =
			{
				"A3_Aegis\Air_F_Aegis\Heli_Light_02\Data\Heli_Light_02_ext_CIV.rvmat",
				"A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_damage.rvmat",
				"A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_destruct.rvmat",
				"A3\Air_F\Heli_Light_02\Data\Heli_Light_02_glass.rvmat",
				"A3\Air_F\Heli_Light_02\Data\Heli_Light_02_glass_damage.rvmat",
				"A3\Air_F\Heli_Light_02\Data\Heli_Light_02_glass_destruct.rvmat",
				"A3\Data_F\default_alpha.rvmat",
				"A3\Air_F\Heli_Light_02\Data\Heli_Light_02_glass_damage.rvmat",
				"A3\Air_F\Heli_Light_02\Data\Heli_Light_02_glass_destruct.rvmat",
				"A3\Data_F\default.rvmat",
				"A3\Data_F\default.rvmat",
				"A3\Data_F\default_destruct.rvmat"
			};
		};
		class Turrets: Turrets
		{
			class CopilotTurret: CopilotTurret
			{
				isPersonTurret = false;
			};
		};
		class EventHandlers: EventHandlers
		{
			init = "if (local (_this select 0)) then {[(_this select 0), """", [], false] call bis_fnc_initVehicle;};";
		};
		class RotorLibHelicopterProperties: RotorLibHelicopterProperties
		{
			defaultCollective = 0.545;
		};
	};
	#include "cfgCivil.hpp"
	#include "cfgOpfor_Exp.hpp"
	#include "cfgOpfor_Tacops.hpp"
	#include "cfgSpetsnaz.hpp"
};