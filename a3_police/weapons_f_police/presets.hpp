// G36C 6.5 mm + Mk17 Holosight + Flashlight
class arifle_G36C_holo_FL_f: arifle_G36C_F
{
	author = $STR_A3_A_AveryTheKitty;
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = CowsSlot;
			item = optic_Holosight_blk_F;
		};
		class LinkedItemsAcc
		{
			slot = PointerSlot;
			item = acc_flashlight;
		};
	};
};