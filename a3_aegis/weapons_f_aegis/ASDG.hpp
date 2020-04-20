class asdg_SlotInfo;
class asdg_OpticRail;
class asdg_MuzzleSlot;
class asdg_OpticRail1913: asdg_OpticRail
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
class asdg_MuzzleSlot_762: asdg_MuzzleSlot
{
    class compatibleItems
    {
		muzzle_snds_B_wdm_F = true;
		muzzle_mzls_B = true;
    };
};
class asdg_MuzzleSlot_65: asdg_MuzzleSlot_762
{
    class compatibleItems: compatibleItems
    {
		muzzle_mzls_H = true;
    };
};
class asdg_MuzzleSlot_556: asdg_MuzzleSlot
{
    class compatibleItems
    {
		muzzle_mzls_M = true;
    };
};
class asdg_MuzzleSlot_762MG: asdg_MuzzleSlot
{
    class compatibleItems
    {
		muzzle_mzls_H = true;
    };
};
class asdg_MuzzleSlot_9MM: asdg_MuzzleSlot
{
    class compatibleItems
    {
        muzzle_mzls_L = true;
    };
};
class asdg_MuzzleSlot_9MM_SMG: asdg_MuzzleSlot
{
    class compatibleItems
    {
        muzzle_mzls_L = true;
    };
};
class asdg_MuzzleSlot_45ACP: asdg_MuzzleSlot
{
    class compatibleItems
    {
        muzzle_mzls_acp = true;
        muzzle_mzls_smg_01 = true;
    };
};
class asdg_MuzzleSlot_45ACP_SMG: asdg_MuzzleSlot
{
    class compatibleItems
    {
        muzzle_mzls_acp = true;
    };
};
class asdg_MuzzleSlot_545R: asdg_MuzzleSlot
{
    class compatibleItems
    {
        muzzle_snds_545 = true;
        muzzle_snds_545_wdm_F = true;
        muzzle_snds_545_lush_F = true;
        muzzle_snds_545_arid_F = true;
        muzzle_mzls_545 = true;
    };
};
class asdg_MuzzleSlot_762R: asdg_MuzzleSlot
{
    class compatibleItems
    {
        muzzle_snds_B = true;
        muzzle_snds_B_wdm_F = true;
        muzzle_snds_B_lush_F = true;
        muzzle_snds_B_arid_F = true;
        muzzle_mzls_B = true;
    };
};
class asdg_MuzzleSlot_58: asdg_MuzzleSlot
{
    class compatibleItems
    {
        muzzle_mzls_58_F = true;
    };
};
class asdg_MuzzleSlot_46: asdg_MuzzleSlot
{
    class compatibleItems
    {
        muzzle_snds_460 = true;
    };
};