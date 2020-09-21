#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class SensorTemplatePassiveRadar;
class SensorTemplateAntiRadiation;
class SensorTemplateActiveRadar;
class SensorTemplateIR;
class SensorTemplateVisual;
class SensorTemplateMan;
class SensorTemplateLaser;
class SensorTemplateNV;
class SensorTemplateDataLink;
class SlotInfo;
class MuzzleSlot;
class CowsSlot: SlotInfo
{
	compatibleItems[] +=
	{
		optic_tws_sniper,
		optic_srs,
		optic_dcl,
		optic_ACOG,
		optic_ACO_grn_AK_F
	};
};
class PointerSlot;
class UnderBarrelSlot;
class MuzzleSlot_556: MuzzleSlot
{
	class compatibleItems
	{
		muzzle_mzls_M = true;
	};
};
class MuzzleSlot_65: MuzzleSlot
{
	class compatibleItems
	{
		muzzle_mzls_H = true;
		muzzle_snds_65_TI_blk_F = true;
		muzzle_snds_65_TI_hex_F = true;
		muzzle_snds_65_TI_ghex_F = true;
	};
};
class MuzzleSlot_762: MuzzleSlot
{
	class compatibleItems
	{
		muzzle_snds_B_wdm_F = true;
		muzzle_mzls_B = true;
	};
};
class MuzzleSlot_MG: MuzzleSlot
{
	class compatibleItems
	{
		muzzle_mzls_H = true;
	};
};
class CowsSlot_Rail: CowsSlot
{
	class compatibleItems
	{
		optic_tws_sniper = true;
		optic_srs = true;
		optic_dcl = true;
		optic_ACOG = true;
		optic_ACO_grn_AK_F = true;
	};
};
class CowsSlot_AK: CowsSlot
{
	class compatibleItems
	{
		optic_Kobra_F = true;
		optic_pso_F = true;
	};
};
class PointerSlot_Rail;
class UnderBarrelSlot_rail;
#include "cfgAmmo.hpp"
#include "cfgMagazines.hpp"
#include "cfgRecoils.hpp"
#include "cfgVehicles.hpp"
#include "cfgMagazineWells.hpp"
#include "ASDG.hpp"
#include "cfgWeapons.hpp"