// MXM 6.5 mm (Black) + RCO + IR Laser Pointer + Bipod [NATO] (Black)
class arifle_MXM_Black_Hamr_pointer_F: arifle_MXM_Black_F
{
	author = $STR_A3_A_AveryTheKitty;
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = CowsSlot;
			item = optic_Hamr;
		};
		class LinkedItemsAcc
		{
			slot = PointerSlot;
			item = acc_pointer_IR;
		};
		class LinkedItemsUnder
		{
			slot = UnderBarrelSlot;
			item = bipod_01_F_blk;
		};
	};
};