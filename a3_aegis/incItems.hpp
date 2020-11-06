
#define mag_2(a) a,a
#define mag_3(a) a,a,a
#define mag_4(a) a,a,a,a
#define mag_5(a) a,a,a,a,a
#define mag_6(a) a,a,a,a,a,a
#define mag_7(a) a,a,a,a,a,a,a
#define mag_8(a) a,a,a,a,a,a,a,a
#define mag_9(a) a,a,a,a,a,a,a,a,a
#define mag_10(a) a,a,a,a,a,a,a,a,a,a
#define mag_11(a) a,a,a,a,a,a,a,a,a,a,a
#define mag_12(a) a,a,a,a,a,a,a,a,a,a,a,a
#define mag_13(a) a,a,a,a,a,a,a,a,a,a,a,a,a
#define mag_14(a) a,a,a,a,a,a,a,a,a,a,a,a,a,a
#define mag_15(a) a,a,a,a,a,a,a,a,a,a,a,a,a,a,a
#define mag_16(a) a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a
#define mag_17(a) a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a
#define mag_18(a) a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a
#define mag_19(a) a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a
#define mag_20(a) a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a

#define mag_xx(a,b) class _xx_##a {magazine = a; count = b;}
#define weap_xx(a,b) class _xx_##a {weapon = a; count = b;}
#define item_xx(a,b) class _xx_##a {name = a; count = b;}
#define bag_xx(a,b) class _xx_##a {backpack = a; count = b;}


// item bags
#define VEST_HOLDER(a,b)                        \
	class Item_##a##: Item_Base_F                \
	{                                            \
		scope = 2;                                \
		scopeCurator = 2;                         \
		displayName = ##b##;                      \
		author = "$STR_LXWS_Author";              \
		editorCategory = "EdCat_Equipment";       \
		editorSubcategory = "EdSubcat_Vests";     \
		vehicleClass = "ItemsUniforms";           \
		model = "\A3\Weapons_f\dummyweapon.p3d";  \
		class TransportItems                      \
		{                                         \
         item_xx(##a##, 1);                     \
		};                                        \
	};
   
#define UNIFORM_HOLDER(a,b)                     \
	class Item_##a##: Item_Base_F                \
	{                                            \
		scope = 2;                                \
		scopeCurator = 2;                         \
		displayName = ##b##;                      \
		author = "$STR_LXWS_Author";              \
		editorCategory = "EdCat_Equipment";       \
		editorSubcategory = "EdSubcat_Uniforms";  \
		vehicleClass = "ItemsUniforms";           \
		model = "\A3\Weapons_f\dummyweapon.p3d";  \
		class TransportItems                      \
		{                                         \
         item_xx(##a##, 1);                     \
		};                                        \
	};

#define HEADGEAR_HOLDER(a,b)                    \
	class Headgear_##a##: Headgear_Base_F        \
	{                                            \
		scope = public;                           \
		scopeCurator = public;                    \
		displayName = ##b##;                      \
		author = "$STR_LXWS_Author";              \
		editorCategory = EdCat_Equipment;         \
		editorSubcategory = EdSubcat_Hats;        \
		vehicleClass = ItemsHeadgear;             \
		DLC = "lxWS";                             \
		class TransportItems                      \
		{                                         \
         item_xx(##a##, 1);                     \
		};                                        \
	};
   
#define WEAPON_HOLDER(a,b,c,d)                  \
	class Weapon_##a##: Weapon_Base_F            \
	{                                            \
		scope = public;                           \
		scopeCurator = public;                    \
		displayName = ##b##;                      \
		author = $STR_LXWS_Author;                \
		editorCategory = EdCat_Weapons;           \
		editorSubcategory = ##c##;                \
		vehicleClass = WeaponsPrimary;            \
		DLC = "lxWS";                             \
		class TransportWeapons                    \
		{                                         \
			weap_xx(##a##,1);                      \
		};                                        \
		class TransportMagazines                  \
		{                                         \
			mag_xx(##d##,1);                       \
		};                                        \
	}
