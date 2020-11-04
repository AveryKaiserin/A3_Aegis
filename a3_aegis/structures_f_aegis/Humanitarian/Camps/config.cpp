////////////////////////////////////////////////////////////////////
//DeRap: structures_f_orange\Humanitarian\Camps\config.bin
//Produced from mikero's Dos Tools Dll version 7.46
//https://bytex.market/products/item/weodpphdknnzm70o0h8q/Mikero%27s%20Dos%20Tools
//'now' is Sun Oct 25 17:56:01 2020 : 'file' last modified on Thu Nov 21 13:26:32 2019
////////////////////////////////////////////////////////////////////

#define _ARMA_

//(13 Enums)
enum {
	destructengine = 2,
	destructdefault = 6,
	destructwreck = 7,
	destructtree = 3,
	destructtent = 4,
	stabilizedinaxisx = 1,
	stabilizedinaxesxyz = 4,
	stabilizedinaxisy = 2,
	stabilizedinaxesboth = 3,
	destructno = 0,
	stabilizedinaxesnone = 0,
	destructman = 5,
	destructbuilding = 1
};

class CfgPatches
{
	class A3_Structures_F_Orange_Humanitarian_Camps
	{
		addonRootClass = "A3_Structures_F_Orange";
		requiredAddons[] = {"A3_Structures_F_Orange_Humanitarian"};
		requiredVersion = 0.1;
		units[] = {"Land_MedicalTent_01_brownhex_closed_F","Land_MedicalTent_01_digital_closed_F","Land_MedicalTent_01_floor_dark_F","Land_MedicalTent_01_floor_light_F","Land_MedicalTent_01_greenhex_closed_F","Land_MedicalTent_01_MTP_closed_F","Land_MedicalTent_01_tropic_closed_F","Land_MedicalTent_01_white_generic_closed_F","Land_MedicalTent_01_white_generic_inner_F","Land_MedicalTent_01_white_generic_open_F","Land_MedicalTent_01_white_generic_outer_F","Land_MedicalTent_01_white_IDAP_closed_F","Land_MedicalTent_01_white_IDAP_med_closed_F","Land_MedicalTent_01_white_IDAP_open_F","Land_MedicalTent_01_white_IDAP_outer_F"};
		weapons[] = {};
	};
};
class CfgVehicles
{
	class Camping_base_F;
	class Land_MedicalTent_01_base_F: Camping_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "Land_MedicalTent_01_base_F";
		scope = 0;
		hiddenSelections[] = {"Camo"};
		DLC = "Orange";
		model = "\A3\Structures_F_Orange\Humanitarian\Camps\MedicalTent_01_F.p3d";
		icon = "iconObject_2x3";
		attendant = 1;
		disableInventory = 1;
		class AnimationSources
		{
			class Door_Hide
			{
				source = "user";
				animPeriod = 1e-06;
			};
			class InnerTent_Hide
			{
				source = "user";
				animPeriod = 1e-06;
			};
			class OuterTent_Hide
			{
				source = "user";
				animPeriod = 1e-06;
			};
			class MedSign_Hide
			{
				source = "user";
				animPeriod = 1e-06;
			};
			class SolarPanel1_Hide
			{
				source = "user";
				animPeriod = 1e-06;
			};
			class SolarPanel2_Hide
			{
				source = "user";
				animPeriod = 1e-06;
			};
		};
		class Attributes
		{
			class Door_Hide
			{
				property = "Door_Hide";
				displayName = "$STR_A3_CfgVehicles_Land_MedicalTent_01_base_F_Attributes_Door_Hide0";
				control = "CheckboxNumber";
				defaultValue = 0;
				expression = "_this animateSource ['%s',_value,true]";
			};
			class MedSign_Hide: Door_Hide
			{
				property = "MedSign_Hide";
				displayName = "$STR_A3_CfgVehicles_Land_MedicalTent_01_base_F_Attributes_MedSign_Hide0";
			};
			class SolarPanel1_Hide: Door_Hide
			{
				property = "SolarPanel1_Hide";
				displayName = "$STR_A3_CfgVehicles_Land_MedicalTent_01_base_F_Attributes_SolarPanel1_Hide0";
			};
			class SolarPanel2_Hide: Door_Hide
			{
				property = "SolarPanel2_Hide";
				displayName = "$STR_A3_CfgVehicles_Land_MedicalTent_01_base_F_Attributes_SolarPanel2_Hide0";
			};
		};
	};
	class Land_MedicalTent_01_tropic_closed_F: Land_MedicalTent_01_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		class SimpleObject
		{
			eden = 0;
			animate[] = {{"door1_hide",0},{"door2_hide",0},{"windows_hide",0},{"roof_1_solar_hide",0},{"roof_1_nosolar_unhide",0},{"roof_2_solar_hide",0},{"roof_2_nosolar_unhide",0}};
			hide[] = {};
			verticalOffset = 1.375;
			verticalOffsetWorld = 0;
			init = "[this, '', []] call bis_fnc_initVehicle";
		};
		editorPreview = "\A3\EditorPreviews_F_Orange\Data\CfgVehicles\Land_MedicalTent_01_tropic_closed_F.jpg";
		_generalMacro = "Land_MedicalTent_01_tropic_closed_F";
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_CfgVehicles_Land_MedicalTent_01_tropic_closed_F0";
		editorCategory = "EdCat_Structures_Tanoa";
		editorSubcategory = "EdSubcat_Military";
		hiddenSelectionsTextures[] = {"\A3\Structures_F_Orange\Humanitarian\Camps\Data\MedicalTent_01_tropic_F_CO.paa"};
	};
	class Land_MedicalTent_01_MTP_closed_F: Land_MedicalTent_01_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		class SimpleObject
		{
			eden = 0;
			animate[] = {{"door1_hide",0},{"door2_hide",0},{"windows_hide",0},{"roof_1_solar_hide",0},{"roof_1_nosolar_unhide",0},{"roof_2_solar_hide",0},{"roof_2_nosolar_unhide",0}};
			hide[] = {};
			verticalOffset = 1.375;
			verticalOffsetWorld = 0;
			init = "[this, '', []] call bis_fnc_initVehicle";
		};
		editorPreview = "\A3\EditorPreviews_F_Orange\Data\CfgVehicles\Land_MedicalTent_01_MTP_closed_F.jpg";
		_generalMacro = "Land_MedicalTent_01_MTP_closed_F";
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_CfgVehicles_Land_MedicalTent_01_MTP_closed_F0";
		editorCategory = "EdCat_Structures_Altis";
		editorSubcategory = "EdSubcat_Military";
		hiddenSelectionsTextures[] = {"\A3\Structures_F_Orange\Humanitarian\Camps\Data\MedicalTent_01_MTP_F_CO.paa"};
	};
	class Land_MedicalTent_01_greenhex_closed_F: Land_MedicalTent_01_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		class SimpleObject
		{
			eden = 0;
			animate[] = {{"door1_hide",0},{"door2_hide",0},{"windows_hide",0},{"roof_1_solar_hide",0},{"roof_1_nosolar_unhide",0},{"roof_2_solar_hide",0},{"roof_2_nosolar_unhide",0}};
			hide[] = {};
			verticalOffset = 1.375;
			verticalOffsetWorld = 0;
			init = "[this, '', []] call bis_fnc_initVehicle";
		};
		editorPreview = "\A3\EditorPreviews_F_Orange\Data\CfgVehicles\Land_MedicalTent_01_greenhex_closed_F.jpg";
		_generalMacro = "Land_MedicalTent_01_greenhex_closed_F";
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_CfgVehicles_Land_MedicalTent_01_greenhex_closed_F0";
		editorCategory = "EdCat_Structures_Tanoa";
		editorSubcategory = "EdSubcat_Military";
		hiddenSelectionsTextures[] = {"\A3\Structures_F_Orange\Humanitarian\Camps\Data\MedicalTent_01_greenhex_F_CO.paa"};
	};
	class Land_MedicalTent_01_brownhex_closed_F: Land_MedicalTent_01_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		class SimpleObject
		{
			eden = 0;
			animate[] = {{"door1_hide",0},{"door2_hide",0},{"windows_hide",0},{"roof_1_solar_hide",0},{"roof_1_nosolar_unhide",0},{"roof_2_solar_hide",0},{"roof_2_nosolar_unhide",0}};
			hide[] = {};
			verticalOffset = 1.375;
			verticalOffsetWorld = 0;
			init = "[this, '', []] call bis_fnc_initVehicle";
		};
		editorPreview = "\A3\EditorPreviews_F_Orange\Data\CfgVehicles\Land_MedicalTent_01_brownhex_closed_F.jpg";
		_generalMacro = "Land_MedicalTent_01_brownhex_closed_F";
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_CfgVehicles_Land_MedicalTent_01_brownhex_closed_F0";
		editorCategory = "EdCat_Structures_Altis";
		editorSubcategory = "EdSubcat_Military";
		hiddenSelectionsTextures[] = {"\A3\Structures_F_Orange\Humanitarian\Camps\Data\MedicalTent_01_brownhex_F_CO.paa"};
	};
	class Land_MedicalTent_01_digital_closed_F: Land_MedicalTent_01_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		class SimpleObject
		{
			eden = 0;
			animate[] = {{"door1_hide",0},{"door2_hide",0},{"windows_hide",0},{"roof_1_solar_hide",0},{"roof_1_nosolar_unhide",0},{"roof_2_solar_hide",0},{"roof_2_nosolar_unhide",0}};
			hide[] = {};
			verticalOffset = 1.375;
			verticalOffsetWorld = 0;
			init = "[this, '', []] call bis_fnc_initVehicle";
		};
		editorPreview = "\A3\EditorPreviews_F_Orange\Data\CfgVehicles\Land_MedicalTent_01_digital_closed_F.jpg";
		_generalMacro = "Land_MedicalTent_01_digital_closed_F";
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_CfgVehicles_Land_MedicalTent_01_digital_closed_F0";
		editorCategory = "EdCat_Structures_Altis";
		editorSubcategory = "EdSubcat_Military";
		hiddenSelectionsTextures[] = {"\A3\Structures_F_Orange\Humanitarian\Camps\Data\MedicalTent_01_digital_F_CO.paa"};
	};
	class Land_MedicalTent_01_white_IDAP_med_closed_F: Land_MedicalTent_01_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		class SimpleObject
		{
			eden = 0;
			animate[] = {{"door1_hide",0},{"door2_hide",0},{"windows_hide",0},{"roof_1_solar_hide",0},{"roof_1_nosolar_unhide",0},{"roof_2_solar_hide",0},{"roof_2_nosolar_unhide",0}};
			hide[] = {};
			verticalOffset = 1.375;
			verticalOffsetWorld = 0;
			init = "[this, '', []] call bis_fnc_initVehicle";
		};
		editorPreview = "\A3\EditorPreviews_F_Orange\Data\CfgVehicles\Land_MedicalTent_01_white_IDAP_med_closed_F.jpg";
		_generalMacro = "Land_MedicalTent_01_white_IDAP_med_closed_F";
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_CfgVehicles_Land_MedicalTent_01_white_IDAP_med_closed_F0";
		editorCategory = "EdCat_Structures";
		editorSubcategory = "EdSubcat_Humanitarian";
		hiddenSelectionsTextures[] = {"\A3\Structures_F_Orange\Humanitarian\Camps\Data\MedicalTent_01_white_IDAP_F_CO.paa"};
	};
	class Land_MedicalTent_01_white_generic_closed_F: Land_MedicalTent_01_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		class SimpleObject
		{
			eden = 0;
			animate[] = {{"door1_hide",0},{"door2_hide",0},{"windows_hide",0},{"roof_1_solar_hide",1},{"roof_1_nosolar_unhide",1},{"roof_2_solar_hide",0},{"roof_2_nosolar_unhide",0}};
			hide[] = {};
			verticalOffset = 1.375;
			verticalOffsetWorld = 0;
			init = "[this, '', []] call bis_fnc_initVehicle";
		};
		editorPreview = "\A3\EditorPreviews_F_Orange\Data\CfgVehicles\Land_MedicalTent_01_white_generic_closed_F.jpg";
		_generalMacro = "Land_MedicalTent_01_white_generic_closed_F";
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_CfgVehicles_Land_MedicalTent_01_white_generic_closed_F0";
		editorCategory = "EdCat_Structures";
		editorSubcategory = "EdSubcat_Humanitarian";
		hiddenSelectionsTextures[] = {"\A3\Structures_F_Orange\Humanitarian\Camps\Data\MedicalTent_01_white_generic_F_CO.paa"};
		attendant = 0;
		class AnimationSources: AnimationSources
		{
			class MedSign_Hide: MedSign_Hide
			{
				initPhase = 1;
			};
			class SolarPanel1_Hide: SolarPanel1_Hide
			{
				initPhase = 1;
			};
		};
		class Attributes: Attributes
		{
			class Door_Hide: Door_Hide
			{
				defaultValue = 1;
			};
			class MedSign_Hide: MedSign_Hide{};
			class SolarPanel1_Hide: SolarPanel1_Hide
			{
				defaultValue = 1;
			};
			class SolarPanel2_Hide: SolarPanel2_Hide{};
		};
	};
	class Land_MedicalTent_01_white_generic_open_F: Land_MedicalTent_01_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		class SimpleObject
		{
			eden = 0;
			animate[] = {{"door1_hide",1},{"door2_hide",1},{"windows_hide",1},{"roof_1_solar_hide",1},{"roof_1_nosolar_unhide",1},{"roof_2_solar_hide",0},{"roof_2_nosolar_unhide",0}};
			hide[] = {};
			verticalOffset = 1.375;
			verticalOffsetWorld = 0;
			init = "[this, '', []] call bis_fnc_initVehicle";
		};
		editorPreview = "\A3\EditorPreviews_F_Orange\Data\CfgVehicles\Land_MedicalTent_01_white_generic_open_F.jpg";
		_generalMacro = "Land_MedicalTent_01_white_generic_open_F";
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_CfgVehicles_Land_MedicalTent_01_white_generic_open_F0";
		editorCategory = "EdCat_Structures";
		editorSubcategory = "EdSubcat_Humanitarian";
		hiddenSelectionsTextures[] = {"\A3\Structures_F_Orange\Humanitarian\Camps\Data\MedicalTent_01_white_generic_F_CO.paa"};
		attendant = 0;
		class AnimationSources: AnimationSources
		{
			class Door_Hide: Door_Hide
			{
				initPhase = 1;
			};
			class MedSign_Hide: MedSign_Hide
			{
				initPhase = 1;
			};
			class SolarPanel1_Hide: SolarPanel1_Hide
			{
				initPhase = 1;
			};
		};
		class Attributes: Attributes
		{
			class Door_Hide: Door_Hide
			{
				defaultValue = 1;
			};
			class MedSign_Hide: MedSign_Hide
			{
				defaultValue = 1;
			};
			class SolarPanel1_Hide: SolarPanel1_Hide
			{
				defaultValue = 1;
			};
			class SolarPanel2_Hide: SolarPanel2_Hide{};
		};
	};
	class Land_MedicalTent_01_white_generic_outer_F: Land_MedicalTent_01_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		class SimpleObject
		{
			eden = 0;
			animate[] = {{"door1_hide",0},{"door2_hide",0},{"windows_hide",0},{"roof_1_solar_hide",1},{"roof_1_nosolar_unhide",1},{"roof_2_solar_hide",1},{"roof_2_nosolar_unhide",1}};
			hide[] = {};
			verticalOffset = 1.375;
			verticalOffsetWorld = 0;
			init = "[this, '', []] call bis_fnc_initVehicle";
		};
		editorPreview = "\A3\EditorPreviews_F_Orange\Data\CfgVehicles\Land_MedicalTent_01_white_generic_outer_F.jpg";
		_generalMacro = "Land_MedicalTent_01_white_generic_outer_F";
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_CfgVehicles_Land_MedicalTent_01_white_generic_outer_F0";
		editorCategory = "EdCat_Structures";
		editorSubcategory = "EdSubcat_Humanitarian";
		hiddenSelectionsTextures[] = {"\A3\Structures_F_Orange\Humanitarian\Camps\Data\MedicalTent_01_white_generic_F_CO.paa"};
		attendant = 0;
		class AnimationSources: AnimationSources
		{
			class InnerTent_Hide: InnerTent_Hide
			{
				initPhase = 1;
			};
			class SolarPanel1_Hide: SolarPanel1_Hide
			{
				initPhase = 1;
			};
			class SolarPanel2_Hide: SolarPanel2_Hide
			{
				initPhase = 1;
			};
		};
		class Attributes: Attributes
		{
			class Door_Hide: Door_Hide{};
			class MedSign_Hide: MedSign_Hide{};
			class SolarPanel1_Hide: SolarPanel1_Hide
			{
				defaultValue = 1;
			};
			class SolarPanel2_Hide: SolarPanel2_Hide
			{
				defaultValue = 1;
			};
		};
	};
	class Land_MedicalTent_01_white_generic_inner_F: Land_MedicalTent_01_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		class SimpleObject
		{
			eden = 0;
			animate[] = {{"door1_hide",1},{"door2_hide",1},{"windows_hide",1},{"roof_1_solar_hide",0},{"roof_1_nosolar_unhide",0},{"roof_2_solar_hide",0},{"roof_2_nosolar_unhide",0}};
			hide[] = {};
			verticalOffset = 1.375;
			verticalOffsetWorld = 0;
			init = "[this, '', []] call bis_fnc_initVehicle";
		};
		editorPreview = "\A3\EditorPreviews_F_Orange\Data\CfgVehicles\Land_MedicalTent_01_white_generic_inner_F.jpg";
		_generalMacro = "Land_MedicalTent_01_white_generic_inner_F";
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_CfgVehicles_Land_MedicalTent_01_white_generic_inner_F0";
		editorCategory = "EdCat_Structures";
		editorSubcategory = "EdSubcat_Humanitarian";
		hiddenSelectionsTextures[] = {"\A3\Structures_F_Orange\Humanitarian\Camps\Data\MedicalTent_01_white_generic_F_CO.paa"};
		attendant = 0;
		class AnimationSources: AnimationSources
		{
			class OuterTent_Hide: OuterTent_Hide
			{
				initPhase = 1;
			};
			class Door_Hide: Door_Hide
			{
				initPhase = 1;
			};
			class MedSign_Hide: MedSign_Hide
			{
				initPhase = 1;
			};
		};
		class Attributes: Attributes
		{
			class Door_Hide: Door_Hide
			{
				defaultValue = 1;
			};
			class MedSign_Hide: MedSign_Hide
			{
				defaultValue = 1;
			};
			class SolarPanel1_Hide: SolarPanel1_Hide{};
			class SolarPanel2_Hide: SolarPanel2_Hide{};
		};
	};
	class Land_MedicalTent_01_white_IDAP_closed_F: Land_MedicalTent_01_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		class SimpleObject
		{
			eden = 0;
			animate[] = {{"door1_hide",0},{"door2_hide",0},{"windows_hide",0},{"roof_1_solar_hide",1},{"roof_1_nosolar_unhide",1},{"roof_2_solar_hide",0},{"roof_2_nosolar_unhide",0}};
			hide[] = {};
			verticalOffset = 1.375;
			verticalOffsetWorld = 0;
			init = "[this, '', []] call bis_fnc_initVehicle";
		};
		editorPreview = "\A3\EditorPreviews_F_Orange\Data\CfgVehicles\Land_MedicalTent_01_white_IDAP_closed_F.jpg";
		_generalMacro = "Land_MedicalTent_01_white_IDAP_closed_F";
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_CfgVehicles_Land_MedicalTent_01_white_IDAP_closed_F0";
		editorCategory = "EdCat_Structures";
		editorSubcategory = "EdSubcat_Humanitarian";
		hiddenSelectionsTextures[] = {"\A3\Structures_F_Orange\Humanitarian\Camps\Data\MedicalTent_01_white_IDAP_F_CO.paa"};
		attendant = 0;
		class AnimationSources: AnimationSources
		{
			class MedSign_Hide: MedSign_Hide
			{
				initPhase = 1;
			};
			class SolarPanel1_Hide: SolarPanel1_Hide
			{
				initPhase = 1;
			};
		};
		class Attributes: Attributes
		{
			class Door_Hide: Door_Hide{};
			class MedSign_Hide: MedSign_Hide
			{
				defaultValue = 1;
			};
			class SolarPanel1_Hide: SolarPanel1_Hide
			{
				defaultValue = 1;
			};
			class SolarPanel2_Hide: SolarPanel2_Hide{};
		};
	};
	class Land_MedicalTent_01_white_IDAP_open_F: Land_MedicalTent_01_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		class SimpleObject
		{
			eden = 0;
			animate[] = {{"door1_hide",1},{"door2_hide",1},{"windows_hide",1},{"roof_1_solar_hide",1},{"roof_1_nosolar_unhide",1},{"roof_2_solar_hide",0},{"roof_2_nosolar_unhide",0}};
			hide[] = {};
			verticalOffset = 1.375;
			verticalOffsetWorld = 0;
			init = "[this, '', []] call bis_fnc_initVehicle";
		};
		editorPreview = "\A3\EditorPreviews_F_Orange\Data\CfgVehicles\Land_MedicalTent_01_white_IDAP_open_F.jpg";
		_generalMacro = "Land_MedicalTent_01_white_IDAP_open_F";
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_CfgVehicles_Land_MedicalTent_01_white_IDAP_open_F0";
		editorCategory = "EdCat_Structures";
		editorSubcategory = "EdSubcat_Humanitarian";
		hiddenSelectionsTextures[] = {"\A3\Structures_F_Orange\Humanitarian\Camps\Data\MedicalTent_01_white_IDAP_F_CO.paa"};
		attendant = 0;
		class AnimationSources: AnimationSources
		{
			class Door_Hide: Door_Hide
			{
				initPhase = 1;
			};
			class MedSign_Hide: MedSign_Hide
			{
				initPhase = 1;
			};
			class SolarPanel1_Hide: SolarPanel1_Hide
			{
				initPhase = 1;
			};
		};
		class Attributes: Attributes
		{
			class Door_Hide: Door_Hide
			{
				defaultValue = 1;
			};
			class MedSign_Hide: MedSign_Hide
			{
				defaultValue = 1;
			};
			class SolarPanel1_Hide: SolarPanel1_Hide
			{
				defaultValue = 1;
			};
			class SolarPanel2_Hide: SolarPanel2_Hide{};
		};
	};
	class Land_MedicalTent_01_white_IDAP_outer_F: Land_MedicalTent_01_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		class SimpleObject
		{
			eden = 0;
			animate[] = {{"door1_hide",0},{"door2_hide",0},{"windows_hide",0},{"roof_1_solar_hide",1},{"roof_1_nosolar_unhide",1},{"roof_2_solar_hide",1},{"roof_2_nosolar_unhide",1}};
			hide[] = {};
			verticalOffset = 1.375;
			verticalOffsetWorld = 0;
			init = "[this, '', []] call bis_fnc_initVehicle";
		};
		editorPreview = "\A3\EditorPreviews_F_Orange\Data\CfgVehicles\Land_MedicalTent_01_white_IDAP_outer_F.jpg";
		_generalMacro = "Land_MedicalTent_01_white_IDAP_outer_F";
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_CfgVehicles_Land_MedicalTent_01_white_IDAP_outer_F0";
		editorCategory = "EdCat_Structures";
		editorSubcategory = "EdSubcat_Humanitarian";
		hiddenSelectionsTextures[] = {"\A3\Structures_F_Orange\Humanitarian\Camps\Data\MedicalTent_01_white_IDAP_F_CO.paa"};
		attendant = 0;
		class AnimationSources: AnimationSources
		{
			class InnerTent_Hide: InnerTent_Hide
			{
				initPhase = 1;
			};
			class SolarPanel1_Hide: SolarPanel1_Hide
			{
				initPhase = 1;
			};
			class SolarPanel2_Hide: SolarPanel2_Hide
			{
				initPhase = 1;
			};
		};
		class Attributes: Attributes
		{
			class Door_Hide: Door_Hide{};
			class MedSign_Hide: MedSign_Hide{};
			class SolarPanel1_Hide: SolarPanel1_Hide
			{
				defaultValue = 1;
			};
			class SolarPanel2_Hide: SolarPanel2_Hide
			{
				defaultValue = 1;
			};
		};
	};
	class Land_MedicalTent_01_floor_base_F: Camping_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		mapSize = 10;
		_generalMacro = "Land_MedicalTent_01_floor_base_F";
		scope = 0;
		editorCategory = "EdCat_Structures";
		editorSubcategory = "EdSubcat_Humanitarian";
		DLC = "Orange";
		icon = "iconObject_1x1";
	};
	class Land_MedicalTent_01_floor_light_F: Land_MedicalTent_01_floor_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F_Orange\Data\CfgVehicles\Land_MedicalTent_01_floor_light_F.jpg";
		_generalMacro = "Land_MedicalTent_01_floor_light_F";
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_CfgVehicles_Land_MedicalTent_01_floor_light_F0";
		model = "\A3\Structures_F_Orange\Humanitarian\Camps\MedicalTent_01_floor_light_F.p3d";
	};
	class Land_MedicalTent_01_floor_dark_F: Land_MedicalTent_01_floor_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F_Orange\Data\CfgVehicles\Land_MedicalTent_01_floor_dark_F.jpg";
		_generalMacro = "Land_MedicalTent_01_floor_dark_F";
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_CfgVehicles_Land_MedicalTent_01_floor_dark_F0";
		model = "\A3\Structures_F_Orange\Humanitarian\Camps\MedicalTent_01_floor_dark_F.p3d";
	};
};
