class B_E_LT_01_AT_F: LT_01_AT_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_E_LT_01_AT_F.jpg";
	side = TWest;
	faction = BLU_E_F;
	crew = B_E_Crew_F;
	typicalCargo[] = {B_E_Soldier_F};
	scope = public;
	displayName = $STR_A3_CfgVehicles_I_LT_01_AT_F0;
	textureList[] = {Indep_Olive,1};
	hiddenSelectionsTextures[] =
	{
		"\A3\Armor_F_Tank\LT_01\Data\LT_01_Main_olive_CO.paa",
		"\A3\Armor_F_Tank\LT_01\Data\LT_01_AT_olive_CO.paa",
		"\A3\Armor_F\Data\camonet_NATO_Green_CO.paa",
		"\A3\Armor_F\Data\cage_olive_CO.paa"
	};
	class Damage
	{
		tex[] = {};
		mat[] =
		{
			"A3\Armor_F_Tank\LT_01\Data\LT_01_AT.rvmat",
			"A3\Armor_F_Tank\LT_01\Data\LT_01_AT_damage.rvmat",
			"A3\Armor_F_Tank\LT_01\Data\LT_01_AT_destruct.rvmat",
			"A3\Armor_F_Tank\LT_01\Data\LT_01_Main.rvmat",
			"A3\Armor_F_Tank\LT_01\Data\LT_01_Main_damage.rvmat",
			"A3\Armor_F_Tank\LT_01\Data\LT_01_Main_destruct.rvmat"
		};
	};
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			magazines[] =
			{
				mag_2(100Rnd_127x99_mag_Tracer_Red),
				mag_2(2Rnd_127mm_Firefist_missiles),
				SmokeLauncherMag
			};
		};
	};
};
class B_E_LT_01_scout_F: LT_01_scout_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_E_LT_01_scout_F.jpg";
	side = TWest;
	faction = BLU_E_F;
	crew = B_E_Crew_F;
	typicalCargo[] = {B_E_Soldier_F};
	scope = public;
	displayName = $STR_A3_CfgVehicles_I_LT_01_scout_F0;
	textureList[] = {Indep_Olive,1};
	hiddenSelectionsTextures[] =
	{
		"\A3\Armor_F_Tank\LT_01\Data\LT_01_Main_olive_CO.paa",
		"\A3\Armor_F_Tank\LT_01\Data\LT_01_Radar_olive_CO.paa",
		"\A3\Armor_F\Data\camonet_NATO_Green_CO.paa",
		"\A3\Armor_F\Data\cage_olive_CO.paa"
	};
	class Damage
	{
		tex[] = {};
		mat[] =
		{
			"A3\Armor_F_Tank\LT_01\Data\LT_01_Radar.rvmat",
			"A3\Armor_F_Tank\LT_01\Data\LT_01_Radar_damage.rvmat",
			"A3\Armor_F_Tank\LT_01\Data\LT_01_Radar_destruct.rvmat",
			"A3\Armor_F_Tank\LT_01\Data\LT_01_Main.rvmat",
			"A3\Armor_F_Tank\LT_01\Data\LT_01_Main_damage.rvmat",
			"A3\Armor_F_Tank\LT_01\Data\LT_01_Main_destruct.rvmat"
		};
	};
};
class B_E_LT_01_AA_F: LT_01_AA_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_E_LT_01_AA_F.jpg";
	side = TWest;
	faction = BLU_E_F;
	crew = B_E_Crew_F;
	typicalCargo[] = {B_E_Soldier_F};
	scope = public;
	displayName = $STR_A3_CfgVehicles_I_LT_01_AA_F0;
	editorSubcategory = EdSubcat_AAs;
	textureList[] = {Indep_Olive,1};
	hiddenSelectionsTextures[] =
	{
		"\A3\Armor_F_Tank\LT_01\Data\LT_01_Main_olive_CO.paa",
		"\A3\Armor_F_Tank\LT_01\Data\LT_01_AT_olive_CO.paa",
		"\A3\Armor_F\Data\camonet_NATO_Green_CO.paa",
		"\A3\Armor_F\Data\cage_olive_CO.paa"
	};
	class Damage
	{
		tex[] = {};
		mat[] =
		{
			"A3\Armor_F_Tank\LT_01\Data\LT_01_AT.rvmat",
			"A3\Armor_F_Tank\LT_01\Data\LT_01_AT_damage.rvmat",
			"A3\Armor_F_Tank\LT_01\Data\LT_01_AT_destruct.rvmat",
			"A3\Armor_F_Tank\LT_01\Data\LT_01_Main.rvmat",
			"A3\Armor_F_Tank\LT_01\Data\LT_01_Main_damage.rvmat",
			"A3\Armor_F_Tank\LT_01\Data\LT_01_Main_destruct.rvmat"
		};
	};
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			magazines[] =
			{
				mag_2(100Rnd_127x99_mag_Tracer_Red),
				mag_2(4Rnd_70mm_SAAMI_missiles),
				SmokeLauncherMag
			};
		};
	};
};
class B_E_LT_01_cannon_F: LT_01_cannon_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_E_LT_01_cannon_F.jpg";
	side = TWest;
	faction = BLU_E_F;
	crew = B_E_Crew_F;
	typicalCargo[] = {B_E_Soldier_F};
	scope = public;
	displayName = $STR_A3_CfgVehicles_I_LT_01_cannon_F0;
	textureList[] = {Indep_Olive,1};
	hiddenSelectionsTextures[] =
	{
		"\A3\Armor_F_Tank\LT_01\Data\LT_01_Main_olive_CO.paa",
		"\A3\Armor_F_Tank\LT_01\Data\LT_01_Cannon_olive_CO.paa",
		"\A3\Armor_F\Data\camonet_NATO_Green_CO.paa",
		"\A3\Armor_F\Data\cage_olive_CO.paa"
	};
	class Damage
	{
		tex[] = {};
		mat[] =
		{
			"A3\Armor_F_Tank\LT_01\Data\LT_01_Cannon.rvmat",
			"A3\Armor_F_Tank\LT_01\Data\LT_01_Cannon_damage.rvmat",
			"A3\Armor_F_Tank\LT_01\Data\LT_01_Cannon_destruct.rvmat",
			"A3\Armor_F_Tank\LT_01\Data\LT_01_Main.rvmat",
			"A3\Armor_F_Tank\LT_01\Data\LT_01_Main_damage.rvmat",
			"A3\Armor_F_Tank\LT_01\Data\LT_01_Main_destruct.rvmat"
		};
	};
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			magazines[] =
			{
				mag_2(60Rnd_20mm_HE_shells),
				mag_2(60Rnd_20mm_AP_shells),
				mag_4(250Rnd_762x51_Belt_Red),
				SmokeLauncherMag
			};
		};
	};
};