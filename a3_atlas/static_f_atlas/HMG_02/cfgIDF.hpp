class I_I_HMG_02_F: HMG_02_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	scope = public;
	side = TGuerrila;
	faction = IND_I_F;
	crew = I_I_Soldier_F;
	class assembleInfo
	{
		primary = 0;
		base = "";
		assembleTo = "";
		dissasembleTo[] =
		{
			I_I_HMG_02_weapon_F,
			I_I_HMG_02_support_F
		};
		displayName = "";
	};
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			magazines[] = {mag_4(100Rnd_127x99_mag_Tracer_Yellow)};
		};
	};
	class AnimationSources: AnimationSources
	{
		class Hide_Rail: Hide_Rail
		{
			initPhase = false;
		};
	};
};
class I_I_HMG_02_high_F: HMG_02_high_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	scope = public;
	side = TGuerrila;
	faction = IND_I_F;
	crew = I_I_Soldier_F;
	class assembleInfo
	{
		primary = 0;
		base = "";
		assembleTo = "";
		dissasembleTo[] =
		{
			I_I_HMG_02_high_weapon_F,
			I_I_HMG_02_support_high_F
		};
		displayName = "";
	};
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			magazines[] = {mag_4(100Rnd_127x99_mag_Tracer_Yellow)};
		};
	};
	class AnimationSources: AnimationSources
	{
		class Hide_Rail: Hide_Rail
		{
			initPhase = false;
		};
	};
};
class I_I_HMG_02_support_F: B_HMG_02_support_F
{
	author = $STR_A3_A_AveryTheKitty;
	scope = public;
	displayName = $STR_A3_A_CfgVehicles_I_I_HMG_02_support_F0;
	hiddenSelectionsTextures[] = {"\A3\Weapons_F\Ammoboxes\Bags\Data\backpack_small_rgr_CO.paa"};
	picture = "\A3\Weapons_F\Ammoboxes\Bags\data\UI\icon_B_C_Small_rgr.paa";
	faction = IND_I_F;
};
class I_I_HMG_02_support_high_F: B_HMG_02_support_high_F
{
	author = $STR_A3_A_AveryTheKitty;
	scope = public;
	displayName = $STR_A3_A_CfgVehicles_I_I_HMG_02_support_high_F0;
	hiddenSelectionsTextures[] = {"\A3\Weapons_F\Ammoboxes\Bags\Data\backpack_small_rgr_CO.paa"};
	picture = "\A3\Weapons_F\Ammoboxes\Bags\data\UI\icon_B_C_Small_rgr.paa";
	faction = IND_I_F;
};
class I_I_HMG_02_weapon_F: B_HMG_02_weapon_F
{
	author = $STR_A3_A_AveryTheKitty;
	scope = public;
	displayName = $STR_A3_A_CfgVehicles_I_I_HMG_02_weapon_F0;
	hiddenSelectionsTextures[] = {"\A3\Weapons_F\Ammoboxes\Bags\Data\backpack_small_rgr_CO.paa"};
	picture = "\A3\Weapons_F\Ammoboxes\Bags\data\UI\icon_B_C_Small_rgr.paa";
	faction = IND_I_F;
	class assembleInfo: assembleInfo
	{
		assembleTo = I_I_HMG_02_F;
	};
};
class I_I_HMG_02_high_weapon_F: B_HMG_02_high_weapon_F
{
	author = $STR_A3_A_AveryTheKitty;
	scope = public;
	displayName = $STR_A3_A_CfgVehicles_I_I_HMG_02_high_weapon_F0;
	hiddenSelectionsTextures[] = {"\A3\Weapons_F\Ammoboxes\Bags\Data\backpack_small_rgr_CO.paa"};
	picture = "\A3\Weapons_F\Ammoboxes\Bags\data\UI\icon_B_C_Small_rgr.paa";
	faction = IND_I_F;
	class assembleInfo: assembleInfo
	{
		assembleTo = I_I_HMG_02_high_F;
	};
};