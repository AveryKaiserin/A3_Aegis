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
			"F:\Games\A3Profile\Users\POLPOX\missions\empty.VR\data\akm_gold_co.jpg",
			"F:\Games\A3Profile\Users\POLPOX\missions\empty.VR\data\akm_wood_gold_co.jpg",
			"\A3\Weapons_F_Exp\Rifles\AKM\Data\akm_steel_mag_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			//"PLP_BlackAK\akm_gold.rvmat",
			//"PLP_BlackAK\akm_wood_gold.rvmat",
			"F:\Games\A3Profile\Users\POLPOX\missions\empty.VR\data\akm_gold.rvmat",
			"F:\Games\A3Profile\Users\POLPOX\missions\empty.VR\data\akm_wood_gold.rvmat",
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