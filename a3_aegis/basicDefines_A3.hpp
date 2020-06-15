// boolean
#define true 1
#define false 0

// sides
#define TEast 0
#define TWest 1
#define TGuerrila 2
#define TCivilian 3
#define TSideUnknown 4
#define TEnemy 5
#define TFriendly 6
#define TLogic 7

#define VSoft 0
#define VArmor 1
#define VAir 2

// scope
#define private 0
#define protected 1
#define public 2

#define CanSeeRadar 1
#define CanSeeEye 2
#define CanSeeOptics 4
#define CanSeeEar 8
#define CanSeeCompass 16
#define CanSeeRadarC CanSeeRadar + CanSeeCompass
#define CanSeeAll 31
#define CanSeePeripheral 32

//ballistics computer
#define BallisticsNone 0
#define BallisticsAutoZero 1
#define BallisticsManualZero 2
#define BallisticsTargetLead 4
#define BallisticsCCIP 8
#define BallisticsFCS 16

//lock acquiring
#define manualLA 0
#define automaticLA 1

//lockable target type
#define lockGroundTT 0
#define lockAirGroundTT 1
#define lockAirTT 2
#define lockGround 0
#define lockAirGround 1
#define lockAir 2

//missile lock type
#define fireAndForgetLT 0
#define keepLockedLT 1
#define manualLT 2

#define SPEED_STATIC 1e10

#define LockNo 0
#define LockCadet 1
#define LockYes 2
#define LockLaser 4

enum
{
	StabilizedInAxesNone,
	StabilizedInAxisX,
	StabilizedInAxisY,
	StabilizedInAxesBoth,
	StabilizedInAxesXYZ
};

#define StabilizedInAxesNone 0
#define StabilizedInAxisX 1
#define StabilizedInAxisY 2
#define StabilizedInAxesBoth 3
#define StabilizedInAxesXYZ 4

#define CM_none 0
#define CM_Lock_Visual 1
#define CM_Lock_IR 2
#define CM_Lock_Laser 4
#define CM_Lock_Radar 8
#define CM_Missile 16

#define CM_No_Missiles 0
#define CM_Radar_Missiles 8
#define CM_All_Missiles 16

#define CMImmunity_GOOD 0.9
#define CMImmunity_MIDDLE 0.65
#define CMImmunity_BAD 0.5

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

#define DEFAULT_SLOT 0
#define MUZZLE_SLOT 101
#define OPTICS_SLOT 201
#define FLASHLIGHT_SLOT 301
#define NVG_SLOT 602
#define SCUBA_SLOT 604
#define GOGGLE_SLOT 603
#define HEADGEAR_SLOT 605
#define UNIFORM_SLOT 801

#define HMD_SLOT 616
#define BINOCULAR_SLOT 617
#define MEDIKIT_SLOT 619
#define RADIO_SLOT 611
#define VEST_SLOT 701
#define BACKPACK_SLOT 901

#define LOAD(weight,capacity) maximumLoad = ##capacity##; \
							  mass = ##weight##;

#define HeadArmourCoef 2.5
#define BodyArmourCoef 10
#define HandArmourCoef 5
#define LegArmourCoef 5

// weapon group definitions
#define WEAPONGROUP_CANNONS		1
#define WEAPONGROUP_MGUNS		2
#define WEAPONGROUP_ROCKETS		4
#define WEAPONGROUP_AAMISSILES	8
#define WEAPONGROUP_ATMISSILES	16
#define WEAPONGROUP_MISSILES	32
#define WEAPONGROUP_BOMBS		64
#define WEAPONGROUP_SPECIAL		128

#define VIEW_GUNNER 1000
#define VIEW_PILOT 1100
#define VIEW_CARGO 1200

#define DefaultManWeapons Throw,Put

#define DefaultManLinkedItems ItemMap,ItemCompass,ItemWatch,ItemRadio
#define DefaultManGuerillaLinkedItems ItemMap,ItemCompass,ItemWatch,ItemRadio
#define DefaultManCbrnLinkedItems ItemMap,ItemCompass,ChemicalDetector_01_watch_F,ItemRadio

// thermal modes
#define TiWHot 0
#define TiBHot 1
#define TiGWHot 2
#define TiGBHot 3
#define TiRWHot 4
#define TiRBHot 5
#define TiSWHot 6
#define TiSBHot 7

#define INJURY_PERSONALITY_MATERIALS "A3\characters_f\Heads\Data\hl_white.rvmat","A3\characters_f\Heads\Data\hl_white_injury.rvmat","A3\characters_f\Heads\Data\hl_white_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_02_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_02_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_02_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular.rvmat","A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular_injury.rvmat","A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular_injury.rvmat","A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular.rvmat","A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular_injury.rvmat","A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular_injury.rvmat"