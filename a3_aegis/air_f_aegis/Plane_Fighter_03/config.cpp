#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
class CfgVehicles
{
	// Arma 3
	class Plane;
	class Plane_Base_F: Plane
	{
		class AnimationSources;
		class Components;
	};
	class Ejection_Seat_Plane_Fighter_03_base_F;
	class Plane_Fighter_03_base_F: Plane_Base_F
	{
		class TextureSources
		{
			class Hex
			{
				factions[] = {OPF_A_F};
			};
			class Grey
			{
				factions[] = {OPF_A_F};
			};
		};
		class AnimationSources: AnimationSources
		{
			class AddScalpel;
			class AddAsraam_mid;
			class AddGbu12;
			class AddMk82;
			class AddZephyr;
			class AddAsraam_out;
		};
		class EjectionSystem;
	};
	class Plane_Fighter_03_dynamicLoadout_base_F: Plane_Fighter_03_base_F{};
	class I_Plane_Fighter_03_dynamicLoadout_F: Plane_Fighter_03_dynamicLoadout_base_F
	{
		displayName = $STR_A3_CfgVehicles_Plane_Fighter_03_base_F0;
		textureList[] = {Green,1};
	};
	// Arma 3 Aegis
	#include "cfgOpfor.hpp"
	#include "cfgOpfor_Tacops.hpp"
};