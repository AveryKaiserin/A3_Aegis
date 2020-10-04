class CfgWeapons
{
	// Arma 3
	class CannonCore;
	class LMG_Zafir_F;
	class arifle_Katiba_F;
	class arifle_Katiba_C_F;
	class SMG_02_F;
	// Arma 3 Aegis
	class srifle_DMR_01_black_F;
	class srifle_DMR_01_lush_F;
	class arifle_TRG21_black_F;
	class arifle_TRG20_black_F;
	class arifle_TRG21_GL_black_F;
	// Arma 3 Opposing Forces
	/*
	class autocannon_23mm: CannonCore
	{
		scope = protected;
		displayName = "ZU-23 23 mm";
		nameSound = cannon;
		cursor = EmptyCursor;
		cursorAim = mg;
		magazines[] =
		{
			80Rnd_23mm_Shells,
			80Rnd_23mm_Shells_Tracer_Red,
			80Rnd_23mm_Shells_Tracer_Green,
			80Rnd_23mm_Shells_Tracer_Yellow
		};
		magazineReloadTime = 30;
		modes[] =
		{
			manual,
			close,
			short,
			medium,
			far
		};
		canLock = false;
		class GunParticles
		{
			class FirstEffect
			{
				effectName = MachineGun1;
				positionName = "usti hlavne 1";
				directionName = "konec hlavne 1";
			};
			class SecondEffect
			{
				effectName = MachineGun1;
				positionName = "usti hlavne 2";
				directionName = "konec hlavne 2";
			};
			class effect3
			{
				positionName = cartridge1_pos;
				directionName = cartridge1_dir;
				effectName = MachineGunCartridge2;
			};
			class effect4
			{
				positionName = cartridge2_pos;
				directionName = cartridge2_dir;
				effectName = MachineGunCartridge2;
			};
		};
		class manual: CannonCore
		{
			displayName = "ZU-23 23 mm";
			textureType = fullAuto;
			autoFire = true;
			burst = 2;
			sounds[] = {StandardSound};
			soundContinuous = false;
			soundBurst = false;
			reloadTime = 0.03;
			dispersion = 0.00144;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 10;
			minRange = 0;
			minRangeProbab = 0.01;
			midRange = 1;
			midRangeProbab = 0.01;
			maxRange = 2;
			maxRangeProbab = 0.01;
		};
		class close: manual
		{
			aiBurstTerminable = true;
			showToPlayer = false;
			burst = 12;
			burstRangeMax = 28;
			aiRateOfFire = 0.5;
			aiRateOfFireDispersion = 0.5;
			aiRateOfFireDistance = 200;
			minRange = 1;
			minRangeProbab = 0.1;
			midRange = 100;
			midRangeProbab = 0.75;
			maxRange = 400;
			maxRangeProbab = 0.85;
		};
		class short: close
		{
			aiBurstTerminable = true;
			showToPlayer = false;
			burst = 18;
			burstRangeMax = 42;
			aiRateOfFire = 1;
			aiRateOfFireDispersion = 1;
			aiRateOfFireDistance = 300;
			minRange = 200;
			minRangeProbab = 0.3;
			midRange = 400;
			midRangeProbab = 0.85;
			maxRange = 750;
			maxRangeProbab = 0.85;
		};
		class medium: close
		{
			aiBurstTerminable = true;
			showToPlayer = false;
			burst = 18;
			burstRangeMax = 42;
			aiRateOfFire = 2;
			aiRateOfFireDispersion = 2;
			aiRateOfFireDistance = 800;
			minRange = 600;
			minRangeProbab = 0.6;
			midRange = 750;
			midRangeProbab = 0.85;
			maxRange = 1250;
			maxRangeProbab = 0.6;
		};
		class far: close
		{
			aiBurstTerminable = true;
			showToPlayer = false;
			burst = 18;
			burstRangeMax = 42;
			aiRateOfFire = 2;
			aiRateOfFireDispersion = 3;
			aiRateOfFireDistance = 1200;
			minRange = 1000;
			minRangeProbab = 0.7;
			midRange = 1250;
			midRangeProbab = 0.6;
			maxRange = 2500;
			maxRangeProbab = 0.1;
		};
	};
	*/
	class LMG_Zafir_FL_F: LMG_Zafir_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class LinkedItems
		{
			class LinkedItemsAcc
			{
				slot = PointerSlot;
				item = acc_flashlight;
			};
		};
	};
	class arifle_Katiba_FL_F: arifle_Katiba_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class LinkedItems
		{
			class LinkedItemsAcc
			{
				slot = PointerSlot;
				item = acc_flashlight;
			};
		};
	};
	class arifle_Katiba_C_FL_F: arifle_Katiba_C_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class LinkedItems
		{
			class LinkedItemsAcc
			{
				slot = PointerSlot;
				item = acc_flashlight;
			};
		};
	};
	class SMG_02_ACO_flash_F: SMG_02_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = CowsSlot;
				item = optic_ACO_grn_smg;
			};
			class LinkedItemsAcc
			{
				slot = PointerSlot;
				item = acc_flashlight;
			};
		};
	};
	class srifle_DMR_01_black_KHS_BI_F: srifle_DMR_01_black_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = CowsSlot;
				item = optic_KHS_blk;
			};
			class LinkedItemsUnder
			{
				slot = UnderBarrelSlot;
				item = bipod_02_F_blk;
			};
		};
	};
	class srifle_DMR_01_lush_ARCO_BI_F: srifle_DMR_01_lush_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = CowsSlot;
				item = optic_Arco_lush_F;
			};
			class LinkedItemsUnder
			{
				slot = UnderBarrelSlot;
				item = bipod_02_F_lush;
			};
		};
	};
	class arifle_TRG21_black_FL_F: arifle_TRG21_black_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class LinkedItems
		{
			class LinkedItemsAcc
			{
				slot = PointerSlot;
				item = acc_flashlight;
			};
		};
	};
	class arifle_TRG20_black_FL_F: arifle_TRG20_black_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class LinkedItems
		{
			class LinkedItemsAcc
			{
				slot = PointerSlot;
				item = acc_flashlight;
			};
		};
	};
	class arifle_TRG21_GL_black_FL_F: arifle_TRG21_GL_black_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class LinkedItems
		{
			class LinkedItemsAcc
			{
				slot = PointerSlot;
				item = acc_flashlight;
			};
		};
	};
};