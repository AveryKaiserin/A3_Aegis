#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
class NewTurret;
class CfgVehicles
{
	// Arma 3
	class Car_F;
	class Truck_F: Car_F
	{
		class AnimationSources;
	};
	class Truck_02_base_F: Truck_F
	{
		class TextureSources
		{
			class Separatist_01
			{
				displayName = $STR_A3_O_TEXTURESOURCES_SEPARATIST_010;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_kab_RUS_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_kuz_RUS_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_int_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_chassis_RUS_CO.paa"
				};
				factions[] = {OPF_S_F};
			};
			class Separatist_02
			{
				displayName = $STR_A3_O_TEXTURESOURCES_SEPARATIST_020;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_kab_RUS_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_kuz_RUS_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_int_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_chassis_RUS_CO.paa"
				};
				factions[] = {OPF_S_F};
			};
			class Separatist_03
			{
				displayName = $STR_A3_O_TEXTURESOURCES_SEPARATIST_030;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_kab_RUS_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_kuz_RUS_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_int_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_chassis_RUS_CO.paa"
				};
				factions[] = {OPF_S_F};
			};
		};
		class AnimationSources: AnimationSources
		{
			class spz_hide;
		};
		class Turrets;
	};
	class Truck_02_transport_base_F: Truck_02_base_F
	{
		class TextureSources
		{
			class Separatist_01
			{
				displayName = $STR_A3_O_TEXTURESOURCES_SEPARATIST_010;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_kab_RUS_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_kuz_RUS_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_int_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_chassis_RUS_CO.paa"
				};
				factions[] = {OPF_S_F};
			};
			class Separatist_02
			{
				displayName = $STR_A3_O_TEXTURESOURCES_SEPARATIST_020;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_kab_RUS_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_kuz_RUS_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_int_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_chassis_RUS_CO.paa"
				};
				factions[] = {OPF_S_F};
			};
			class Separatist_03
			{
				displayName = $STR_A3_O_TEXTURESOURCES_SEPARATIST_030;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_kab_RUS_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_kuz_RUS_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_int_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_chassis_RUS_CO.paa"
				};
				factions[] = {OPF_S_F};
			};
		};
	};
	// Arma 3 Aegis
	class Truck_02_cargo_base_F: Truck_02_base_F
	{
		class TextureSources
		{
			class Separatist_01
			{
				displayName = $STR_A3_O_TEXTURESOURCES_SEPARATIST_010;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_kab_RUS_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_kuz_RUS_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_int_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_chassis_RUS_CO.paa"
				};
				factions[] = {OPF_S_F};
			};
			class Separatist_02
			{
				displayName = $STR_A3_O_TEXTURESOURCES_SEPARATIST_020;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_kab_RUS_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_kuz_RUS_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_int_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_chassis_RUS_CO.paa"
				};
				factions[] = {OPF_S_F};
			};
			class Separatist_03
			{
				displayName = $STR_A3_O_TEXTURESOURCES_SEPARATIST_030;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_kab_RUS_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_kuz_RUS_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_int_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_chassis_RUS_CO.paa"
				};
				factions[] = {OPF_S_F};
			};
		};
	};
	// Arma 3 Opposing Forces
	/*
	class Truck_02_AA_base_F: Truck_02_base_F
	{
		model = "\A3_Opf\Soft_F_Opf\Truck_02\Truck_02_AA_F.p3d";
		picture = "\A3_Opf\Soft_F_Opf\Truck_02\Data\UI\Truck_02_AA_CA.paa";
		icon = "\A3_Opf\Soft_F_Opf\Truck_02\Data\UI\Map_Truck_02_AA_CA.paa";
		editorSubcategory = EdSubcat_AAs;
		accuracy = 0.9;
		class TransportItems
		{
			item_xx(FirstAidKit,4);
		};
		transportSoldier = 2;
		cargoProxyIndexes[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17};
		cargoAction[] =
		{
			passenger_apc_narrow_generic01_ns,
			passenger_apc_narrow_generic03still_ns
		};
		driverAction = Truck_02_Driver;
		class Damage
		{
			tex[] = {};
			mat[] =
			{
				"A3\Data_F\glass_veh.rvmat",
				"A3\Soft_F_Beta\Truck_02\Data\Truck_02_glass_damage.rvmat",
				"A3\Soft_F_Beta\Truck_02\Data\Truck_02_glass_damage.rvmat",
				"A3\Data_F\glass_veh.rvmat",
				"A3\Soft_F_Beta\Truck_02\Data\Truck_02_glass_in_damage.rvmat",
				"A3\Soft_F_Beta\Truck_02\Data\Truck_02_glass_in_damage.rvmat",
				"A3\Soft_F_Beta\Truck_02\Data\Truck_02_chassis.rvmat",
				"A3\Soft_F_Beta\Truck_02\Data\Truck_02_chassis_damage.rvmat",
				"A3\Soft_F_Beta\Truck_02\Data\Truck_02_chassis_destruct.rvmat",
				"A3\Soft_F_Beta\Truck_02\Data\Truck_02_int.rvmat",
				"A3\Soft_F_Beta\Truck_02\Data\Truck_02_int_damage.rvmat",
				"A3\Soft_F_Beta\Truck_02\Data\Truck_02_int_destruct.rvmat",
				"A3\Soft_F_Beta\Truck_02\Data\Truck_02_int_VP.rvmat",
				"A3\Soft_F_Beta\Truck_02\Data\Truck_02_int_damage.rvmat",
				"A3\Soft_F_Beta\Truck_02\Data\Truck_02_int_destruct.rvmat",
				"A3\Soft_F_Beta\Truck_02\Data\Truck_02_kab.rvmat",
				"A3\Soft_F_Beta\Truck_02\Data\Truck_02_kab_damage.rvmat",
				"A3\Soft_F_Beta\Truck_02\Data\Truck_02_kab_destruct.rvmat",
				"A3\Soft_F_Beta\Truck_02\Data\Truck_02_panel_VP.rvmat",
				"A3\Soft_F_Beta\Truck_02\Data\Truck_02_panel_damage.rvmat",
				"A3\Soft_F_Beta\Truck_02\Data\Truck_02_panel_destruct.rvmat",
				"A3\Soft_F_Beta\Truck_02\Data\Truck_02_panel_shine.rvmat",
				"A3\Soft_F_Beta\Truck_02\Data\Truck_02_panel_shine_damage.rvmat",
				"A3\Soft_F_Beta\Truck_02\Data\Truck_02_panel_shine_destruct.rvmat",
				"A3_Opf\Soft_F_Opf\Truck_02\Data\ZU23.rvmat",
				"A3_Opf\Soft_F_Opf\Truck_02\Data\ZU23_damage.rvmat",
				"A3_Opf\Soft_F_Opf\Truck_02\Data\ZU23_destruct.rvmat",
				"A3_Opf\Soft_F_Opf\Truck_02\Data\ZU23_base.rvmat",
				"A3_Opf\Soft_F_Opf\Truck_02\Data\ZU23_base_damage.rvmat",
				"A3_Opf\Soft_F_Opf\Truck_02\Data\ZU23_base_destruct.rvmat"
			};
		};
		class TextureSources
		{
			class Separatist_01
			{
				displayName = $STR_A3_O_TEXTURESOURCES_SEPARATIST_010;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_kab_RUS_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_kuz_RUS_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_int_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_chassis_RUS_CO.paa"
				};
				factions[] = {OPF_S_F};
			};
			class Separatist_02
			{
				displayName = $STR_A3_O_TEXTURESOURCES_SEPARATIST_020;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_kab_RUS_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_kuz_RUS_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_int_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_chassis_RUS_CO.paa"
				};
				factions[] = {OPF_S_F};
			};
			class Separatist_03
			{
				displayName = $STR_A3_O_TEXTURESOURCES_SEPARATIST_030;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_kab_RUS_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_kuz_RUS_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_int_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_chassis_RUS_CO.paa"
				};
				factions[] = {OPF_S_F};
			};
		};
		enableManualFire = false;
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class Turrets{};
				commanding = true;
				body = mainTurret;
				gun = mainGun;
				minTurn = -180;
				maxTurn = 180;
				minElev = -10;
				maxElev = 85;
				initElev = 11.5;
				maxHorizontalRotSpeed = 0.78;
				maxVerticalRotSpeed = 0.78;
				startEngine = false;
				weapons[] = {autocannon_23mm};
				magazines[] = {mag_4(80Rnd_23mm_Shells_Tracer_Green)};
				gunnerAction = Truck_02_AA_Gunner;
				gunnergetInAction = GetInHigh;
				gunnergetOutAction = GetOutHigh;
				stabilizedInAxes = StabilizedInAxesNone;
				memoryPointsGetInGunner = pos_Gunner;
				memoryPointsGetInGunnerDir = pos_Gunner_dir;
				class ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.093;
					minFov = 0.093;
					maxFov = 0.093;
				};
				class Hitpoints
				{
					class HitTurret
					{
						armor = 0.8;
						material = -1;
						armorComponent = hit_main_turret;
						name = hit_main_turret_point;
						visual = Turret_base;
						passThrough = 1;
						minimalHit = 0.1;
						explosionShielding = 1;
						radius = 0.2;
						isTurret = true;
					};
					class HitGun
					{
						armor = 0.6;
						material = -1;
						armorComponent = hit_main_gun;
						name = hit_main_gun_point;
						visual = Turret;
						passThrough = 1;
						minimalHit = 0.1;
						explosionShielding = 1;
						radius = 0.2;
						isGun = true;
					};
				};
			};
		};
		class RenderTargets
		{
			class mirrors_Left
			{
				renderTarget = rendertarget0;
				class CameraView1
				{
					pointPosition = PIP0_pos;
					pointDirection = PIP0_dir;
					renderVisionMode = 4;
					renderQuality = 2;
					fov = 0.7;
				};
				BBoxes[] =
				{
					PIP_0_TL,
					PIP_0_TR,
					PIP_0_BL,
					PIP_0_BR
				};
			};
			class mirrors_Right
			{
				renderTarget = rendertarget1;
				class CameraView1
				{
					pointPosition = PIP1_pos;
					pointDirection = PIP1_dir;
					renderVisionMode = 4;
					renderQuality = 2;
					fov = 0.7;
				};
				BBoxes[] =
				{
					PIP_1_TL,
					PIP_1_TR,
					PIP_1_BL,
					PIP_1_BR
				};
			};
		};
		class AnimationSources: AnimationSources
		{
			class muzzle_rot
			{
				source = ammorandom;
				weapon = autocannon_23mm;
			};
		};
	};
	*/
	#include "cfgChKDZ.hpp"
};