class CfgWeapons
{
	// Arma 3
	class CannonCore;
	class cannon_120mm: CannonCore
	{
		class player;
	};
	class GrenadeLauncher;
	class Rifle_Long_Base_F;
	class Throw: GrenadeLauncher
	{
		class ThrowMuzzle;
		class IRGrenade: ThrowMuzzle
		{
			magazines[] += {I_I_IR_Grenade};
		};
	};
	class ItemCore;
	class LMG_Zafir_F;
	class optic_MRCO: ItemCore
	{
		class ItemInfo;
	};
	// Arma 3 Marksman
	class srifle_DMR_06_olive_F;
	class MMG_01_base_F: Rifle_Long_Base_F
	{
		magazines[] += {150Rnd_93x64_Mag_Red};
	};
	// Arma 3 Apex
	class arifle_SPAR_01_blk_F;
	class arifle_SPAR_02_blk_F;
	class SMG_05_F;
	// Arma 3 Enoch
	class LMG_Mk200_black_F;
	// Arma 3 Aegis
	class LMG_Mk200_plain_F;
	class LMG_Zafir_black_F: LMG_Zafir_F
	{
		magazines[] =
		{
			150Rnd_762x51_Box_Yellow,
			150Rnd_762x51_Box_Tracer_Yellow
		};
	};
	class MMG_01_black_F;
	class arifle_TRG21_black_F;
	class arifle_TRG20_black_F;
	class arifle_TRG21_GL_black_F;
	// Arma 3 Atlas
	/*
	class cannon_120mm_advanced: cannon_120mm
	{
		FCSMaxLeadSpeed = 30.5556;
		FCSZeroingDelay = 0.5;
		class player: player
		{
			dispersion = 0.000544;
			reloadTime = 5;
			magazineReloadTime = 5;
		};
	};
	class coil_veh: CannonCore
	{
		scope = protected;
		displayName = "Coilgun";
		cursor = EmptyCursor;
		cursorAim = coil;
		showAimCursorInternal = false;
		nameSound = cannon;
		reloadSound[] = {"\A3\Sounds_F\arsenal\weapons_vehicles\cannon_120mm\Cannon_120mm_Reload_01",db8,1,10};
		reloadMagazineSound[] = {"\A3\Sounds_F\arsenal\weapons_vehicles\cannon_120mm\Cannon_120mm_Reload_01",db8,1,10};
		magazines[] = {40Rnd_20G_spikes};
		reloadTime = 10;
		magazineReloadTime = 10;
		autoReload = true;
		canLock = false;
		ballisticsComputer = BallisticsManualZero + BallisticsFCS;
		FCSMaxLeadSpeed = 25;
		FCSZeroingDelay = 1;
		aiDispersionCoefY = 2;
		aiDispersionCoefX = 2;
		autoFire = false;
		modes[] =
		{
			player,
			close,
			short,
			medium,
			far
		};
		class GunParticles
		{
			class FirstEffect
			{
				effectName = HeavyCaliber;
				positionName = "Usti hlavne";
				directionName = "Konec hlavne";
			};
		};
		class player: Mode_SemiAuto
		{
			sounds[] = {StandardSound};
			soundContinuous = false;
			reloadTime = 10;
			magazineReloadTime = 10;
			autoReload = true;
			autoFire = false;
			dispersion = 0.00029;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 10;
			minRange = 0;
			minRangeProbab = 0.01;
			midRange = 1;
			midRangeProbab = 0.01;
			maxRange = 2;
			maxRangeProbab = 0.01;
		};
		class close: player
		{
			showToPlayer = false;
			burst = 1;
			burstRangeMax = 1;
			aiRateOfFire = 6;
			aiRateOfFireDispersion = 0.5;
			aiRateOfFireDistance = 500;
			minRange = 5;
			minRangeProbab = 0.1;
			midRange = 1500;
			midRangeProbab = 0.8;
			maxRange = 2000;
			maxRangeProbab = 0.85;
		};
		class short: close
		{
			showToPlayer = false;
			burst = 1;
			burstRangeMax = 1;
			aiRateOfFire = 6;
			aiRateOfFireDispersion = 1;
			aiRateOfFireDistance = 1000;
			minRange = 1500;
			minRangeProbab = 0.3;
			midRange = 2000;
			midRangeProbab = 0.85;
			maxRange = 2500;
			maxRangeProbab = 0.85;
		};
		class medium: close
		{
			dispersion = 0.0005;
			showToPlayer = false;
			burst = 1;
			burstRangeMax = 1;
			aiRateOfFire = 8;
			aiRateOfFireDispersion = 4;
			aiRateOfFireDistance = 1250;
			minRange = 2000;
			minRangeProbab = 0.6;
			midRange = 2500;
			midRangeProbab = 0.85;
			maxRange = 3000;
			maxRangeProbab = 0.8;
		};
		class far: close
		{
			dispersion = 0.0005;
			showToPlayer = false;
			burst = 1;
			burstRangeMax = 1;
			aiRateOfFire = 10;
			aiRateOfFireDispersion = 8;
			aiRateOfFireDistance = 1500;
			minRange = 2500;
			minRangeProbab = 0.75;
			midRange = 3000;
			midRangeProbab = 0.8;
			maxRange = 4500;
			maxRangeProbab = 0.05;
		};
	};
	*/
	class srifle_DMR_06_olive_DMS_BI_F: srifle_DMR_06_olive_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = CowsSlot;
				item = optic_DMS;
			};
			class LinkedItemsUnder
			{
				slot = UnderBarrelSlot;
				item = bipod_03_F_oli;
			};
		};
	};
	class LMG_Mk200_black_LRCO_LP_BI_F: LMG_Mk200_black_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = CowsSlot;
				item = optic_LRCO_blk_F;
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
	class LMG_Zafir_black_MRCO_pointer_F: LMG_Zafir_black_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = CowsSlot;
				item = optic_MRCO;
			};
			class LinkedItemsAcc
			{
				slot = PointerSlot;
				item = acc_pointer_IR;
			};
		};
	};
	class MMG_01_black_LRCO_LP_F: MMG_01_black_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = CowsSlot;
				item = optic_LRCO_blk_F;
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
	class arifle_TRG20_black_ACO_F: arifle_TRG20_black_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = CowsSlot;
				item = optic_ACO_grn;
			};
		};
	};
	class arifle_TRG20_black_ACO_pointer_F: arifle_TRG20_black_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = CowsSlot;
				item = optic_ACO_grn;
			};
			class LinkedItemsAcc
			{
				slot = PointerSlot;
				item = acc_pointer_IR;
			};
		};
	};
	class arifle_TRG21_black_ACO_pointer_F: arifle_TRG21_black_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = CowsSlot;
				item = optic_ACO_grn;
			};
			class LinkedItemsAcc
			{
				slot = PointerSlot;
				item = acc_pointer_IR;
			};
		};
	};
	class arifle_TRG21_black_MRCO_pointer_F: arifle_TRG21_black_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = CowsSlot;
				item = optic_MRCO;
			};
			class LinkedItemsAcc
			{
				slot = PointerSlot;
				item = acc_pointer_IR;
			};
		};
	};
	class arifle_TRG21_GL_black_ACO_pointer_F: arifle_TRG21_GL_black_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = CowsSlot;
				item = optic_ACO_grn;
			};
			class LinkedItemsAcc
			{
				slot = PointerSlot;
				item = acc_pointer_IR;
			};
		};
	};
	class arifle_TRG21_GL_black_MRCO_pointer_F: arifle_TRG21_GL_black_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = CowsSlot;
				item = optic_MRCO;
			};
			class LinkedItemsAcc
			{
				slot = PointerSlot;
				item = acc_pointer_IR;
			};
		};
	};
	class arifle_SPAR_01_blk_LRCO_Pointer_Snds_F: arifle_SPAR_01_blk_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = CowsSlot;
				item = optic_LRCO_blk_F;
			};
			class LinkedItemsAcc
			{
				slot = PointerSlot;
				item = acc_pointer_IR;
			};
			class LinkedItemsMuzzle
			{
				slot = MuzzleSlot;
				item = muzzle_snds_M;
			};
		};
	};
	class arifle_SPAR_02_blk_LRCO_Pointer_Bipod_Snds_F: arifle_SPAR_02_blk_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = CowsSlot;
				item = optic_LRCO_blk_F;
			};
			class LinkedItemsAcc
			{
				slot = PointerSlot;
				item = acc_pointer_IR;
			};
			class LinkedItemsMuzzle
			{
				slot = MuzzleSlot;
				item = muzzle_snds_M;
			};
			class LinkedItemsUnder
			{
				slot = UnderBarrelSlot;
				item = bipod_01_F_blk;
			};
		};
	};
	class SMG_05_Holo_F: SMG_05_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = CowsSlot;
				item = optic_Holosight_smg_blk_F;
			};
		};
	};
	class LMG_Mk200_plain_LRCO_LP_BI_F: LMG_Mk200_plain_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = CowsSlot;
				item = optic_LRCO_snd_F;
			};
			class LinkedItemsAcc
			{
				slot = PointerSlot;
				item = acc_pointer_IR;
			};
			class LinkedItemsUnder
			{
				slot = UnderBarrelSlot;
				item = bipod_01_F_snd;
			};
		};
	};
	class optic_LRCO_blk_F: optic_MRCO
	{
		author = $STR_A3_A_AveryTheKitty_and_Toadie2K;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_optic_LRCO_blk_F0;
		descriptionShort = $STR_A3_A_CfgWeapons_optic_LRCO_blk_F1;
		model = "\A3_Atlas\Weapons_F_Atlas\Acc\acco_LRCO_blk_F.p3d";
		picture = "\A3_Atlas\Weapons_F_Atlas\Acc\Data\UI\icon_acco_LRCO_blk_F_CA.paa";
		class ItemInfo: ItemInfo
		{
			modelOptics = "\A3_Atlas\Weapons_F_Atlas\Acc\acco_LRCO_blk_F.p3d";
		};
	};
	class optic_LRCO_snd_F: optic_LRCO_blk_F
	{
		author = $STR_A3_A_AveryTheKitty_and_Toadie2K;
		displayName = $STR_A3_A_CfgWeapons_optic_LRCO_snd_F0;
		model = "\A3_Atlas\Weapons_F_Atlas\Acc\acco_LRCO_snd_F.p3d";
		picture = "\A3_Atlas\Weapons_F_Atlas\Acc\Data\UI\icon_acco_LRCO_snd_F_CA.paa";
		class ItemInfo: ItemInfo
		{
			modelOptics = "\A3_Atlas\Weapons_F_Atlas\Acc\acco_LRCO_snd_F.p3d";
		};
	};
};