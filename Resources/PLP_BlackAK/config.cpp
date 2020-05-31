class CfgPatches
{
	class PLP_BlackAK
	{
		requiredVersion = 0.1;
		requiredAddons[] =
		{
			"A3_Data_F_Oldman_Loadorder"
		};
		units[]={};
		weapons[]={};

	};
};
class CfgWeapons
{
	class arifle_AKM_F;
	class arifle_AKM_black_F: arifle_AKM_F
	{
		scope=2;
		baseWeapon="arifle_AKM_black_F";
		displayName="AKM (Black)";
		hiddenSelectionsTextures[]=
		{
			"PLP_BlackAK\akm_black_co.paa",
			"PLP_BlackAK\akm_wood_black_co.paa",
			"\A3\Weapons_F_Exp\Rifles\AKM\Data\akm_steel_mag_co.paa"
		};
	};
	class arifle_AKM_gold_F: arifle_AKM_F
	{
		scope=2;
		baseWeapon="arifle_AKM_gold_F";
		displayName="AKM (Gold)";
		magazines[] = {"30Rnd_762x39_Mag_Gold_F"};
		hiddenSelectionsTextures[]=
		{
			//"PLP_BlackAK\akm_gold_co.paa",
			//"PLP_BlackAK\akm_wood_gold_co.paa",
			"PLP_BlackAK\akm_gold_co.paa",
			"PLP_BlackAK\akm_wood_gold_co.paa",
			"\A3\Weapons_F_Exp\Rifles\AKM\Data\akm_steel_mag_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			//"PLP_BlackAK\akm_gold.rvmat",
			//"PLP_BlackAK\akm_wood_gold.rvmat",
			"PLP_BlackAK\akm_gold.rvmat",
			"PLP_BlackAK\akm_wood_gold.rvmat",
			"PLP_BlackAK\akm_steel_gold_mag.rvmat"
		};
	};
	
	class arifle_AKS_F;
	class arifle_AKS_black_F: arifle_AKS_F
	{
		baseWeapon="arifle_AKS_black_F";
		displayName="AKS (Black)";
		hiddenSelectionsTextures[]=
		{
			"PLP_BlackAK\aks74u_black_co.paa",
			"\A3\Weapons_F_Exp\Rifles\AKS\Data\magazine_ak74_co.paa"
		};
	};	
	
	class hgun_ACPC2_F;
	class hgun_ACPC2_gold_F: hgun_ACPC2_F
	{
		displayName = "ACPC2 (Gold)";
		baseWeapon = "hgun_ACPC2_gold_F";
		hiddenSelectionsTextures[]=
		{
			"PLP_BlackAK\ACPC2_gold_co.paa"
			//"a3\weapons_f_beta\pistols\acpc2\data\acpc2_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"PLP_BlackAK\acpc2_gold.rvmat"
		};
	};
	class hgun_Pistol_heavy_02_F;
	class hgun_Pistol_heavy_02_gold_F: hgun_Pistol_heavy_02_F
	{
		displayName = "Zubr (Gold)";
		baseWeapon = "hgun_Pistol_heavy_02_gold_F";
		hiddenSelectionsTextures[]=
		{
			"PLP_BlackAK\Pistol_Heavy_02_gold_co.paa",
			//"\a3\weapons_f_epa\pistols\pistol_heavy_02\data\pistol_heavy_02_co.paa",
			"\A3\Weapons_F_EPA\Pistols\Pistol_Heavy_02\data\Pistol_Heavy_02_mag_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"PLP_BlackAK\pistol_heavy_02_gold.rvmat",
			"\A3\Weapons_F_EPA\Pistols\Pistol_Heavy_02\data\Pistol_Heavy_02_mag.rvmat"
		};
	};
	class hgun_Mk26_F;
	class hgun_Mk26_gold_F: hgun_Mk26_F
	{
		displayName = "Mk26 (Gold)";
		baseWeapon = "hgun_Mk26_gold_F";
		
		hiddenSelectionsTextures[] = {"PLP_BlackAK\Mk26_gold_CO.paa"};
		
		hiddenSelectionsMaterials[] = {"PLP_BlackAK\Mk26_gold.rvmat"};
	};
	class hgun_Pistol_heavy_03_F;
	class hgun_Pistol_heavy_03_gold_F: hgun_Pistol_heavy_03_F
	{
		displayName = "RSh-42 (Gold)";
		baseWeapon = "hgun_Pistol_heavy_03_gold_F";
		
		hiddenSelectionsTextures[] = {"PLP_BlackAK\Pistol_Heavy_03_gold_CO.paa"};
		
		hiddenSelectionsMaterials[] = {"PLP_BlackAK\Pistol_Heavy_03_gold.rvmat"};
	};
	class SMG_05_F;
	class SMG_05_gold_F: SMG_05_F
	{
		baseWeapon="SMG_05_gold_F";
		displayName = "Protector (Gold)";
		
		hiddenSelectionsTextures[] = {"PLP_BlackAK\SMG_05_Gold_CO.paa",
			"\a3\weapons_f_exp\smgs\smg_05\data\smg_05_f_acc_co.paa"
		};
		
		hiddenSelectionsMaterials[] = {"PLP_BlackAK\smg_05_gold.rvmat",
			"\a3\weapons_f_exp\smgs\smg_05\data\smg_05_f_acc.rvmat"
		};
		
	};
	class hgun_Pistol_01_F;
	class hgun_Pistol_01_gold_F: hgun_Pistol_01_F
	{
		baseWeapon="hgun_Pistol_01_gold_F";
		displayName = "PM (Gold)";
		
		hiddenSelectionsTextures[] = {"PLP_BlackAK\pmm_gold_co.paa"};
		
		hiddenSelectionsMaterials[] = {"PLP_BlackAK\pmm_gold.rvmat"};
		
	};
};

class CfgMagazines
{
	class 30Rnd_762x39_Mag_F;
	class 30Rnd_762x39_Mag_Gold_F: 30Rnd_762x39_Mag_F
	{
		scope = 2;
		displayName = "7.62 mm 30Rnd Gold AKM Reload Tracer (Yellow) Mag";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Weapons_F_Exp\Rifles\AKM\Data\akm_steel_mag_co.paa"};
		hiddenSelectionsMaterials[] = {"PLP_BlackAK\akm_steel_gold_mag.rvmat"};
	};
};