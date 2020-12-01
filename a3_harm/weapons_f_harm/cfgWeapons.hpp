class CfgWeapons
{
    /* Definitions */
	#include "\A3_Aegis\macros_weaponAcc.hpp"
    
    /* Inheritance Tree */
	#include "\A3_Aegis\cfgRifles.hpp"

    /* Bases */
	class arifle_SCAR_base_F;
	class arifle_SCAR_GL_base_F;
	class arifle_SCAR_short_base_F;
	class arifle_SCAR_grip_base_F;

    /* Weapons */
	class arifle_SCAR_F: arifle_SCAR_base_F{};
	class arifle_SCAR_GL_F: arifle_SCAR_GL_base_F{};
	class arifle_SCAR_short_F: arifle_SCAR_short_base_F{};
	class arifle_SCAR_grip_F: arifle_SCAR_grip_base_F{};
	class arifle_SCAR_short_black_F;
	class arifle_SCAR_GL_black_F;
	class arifle_SCAR_grip_black_F;
    /* Accessorized Weapons */
	#include "presets.hpp"
};