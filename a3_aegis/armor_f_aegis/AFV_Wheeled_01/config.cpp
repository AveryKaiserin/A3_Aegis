#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
class CfgVehicles
{
	// Arma 3 Tanks
	class Car;
	class Car_F: Car
	{
		class NewTurret;
	};
	class Wheeled_APC_F: Car_F
	{
		class NewTurret;
		class Turrets
		{
			class MainTurret: NewTurret{};
		};
	};
	class AFV_Wheeled_01_base_F: Wheeled_APC_F
	{
		editorSubcategory = EdSubcat_TankDestroyers;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				magazines[] =
				{
					12Rnd_120mm_APFSDS_shells_Tracer_Red,
					8Rnd_120mm_HE_shells_Tracer_Red,
					8Rnd_120mm_HEAT_MP_T_Red,
					mag_5(200Rnd_338_Mag),
					4Rnd_120mm_LG_cannon_missiles
				};
			};
		};
		class TransportBackpacks
		{
			bag_xx(B_AssaultPack_mcamo,3);
		};
		class TransportItems
		{
			item_xx(FirstAidKit,10);
			item_xx(Toolkit,1);
			item_xx(Medikit,1);
		};
		class TextureSources
		{
			class Sand
			{
				factions[] =
				{
					BLU_F
				};
			};
			class Green
			{
				displayName = $STR_A3_TEXTURESOURCES_OLIVE0;
				factions[] =
				{
					BLU_T_F,
					BLU_W_F
				};
			};
		};
	};
	class AFV_Wheeled_01_up_base_F;
	class B_T_AFV_Wheeled_01_cannon_F: AFV_Wheeled_01_base_F
	{
		class TransportMagazines
		{
			mag_xx(SmokeShell,2);
			mag_xx(SmokeShellBlue,2);
			mag_xx(30Rnd_65x39_caseless_khaki_mag,4);
		};
		class TransportWeapons
		{
			weap_xx(arifle_MXC_khk_F,2);
		};
		class TransportBackpacks
		{
			bag_xx(B_AssaultPack_tna_F,3);
		};
	};
	class B_T_AFV_Wheeled_01_up_cannon_F: AFV_Wheeled_01_up_base_F
	{
		class TransportMagazines
		{
			mag_xx(SmokeShell,2);
			mag_xx(SmokeShellBlue,2);
			mag_xx(30Rnd_65x39_caseless_khaki_mag,4);
		};
		class TransportWeapons
		{
			weap_xx(arifle_MXC_khk_F,2);
		};
		class TransportBackpacks
		{
			bag_xx(B_AssaultPack_tna_F,3);
		};
	};
	// Arma 3 Aegis
	#include "cfgBlufor_Enoch.hpp"
};