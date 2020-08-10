class B_APC_Tracked_01_cannon_F: B_APC_Tracked_01_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	class SpeechVariants
	{
		class Default
		{
            speechSingular[] = {veh_vehicle_APC_s};
            speechPlural[] = {veh_vehicle_APC_p};
		};
	};
	textSingular = $STR_A3_nameSound_veh_vehicle_APC_s;
	textPlural = $STR_A3_nameSound_veh_vehicle_APC_p;
	nameSound = veh_vehicle_APC_s;
	//editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_APC_Tracked_01_cannon_F.jpg";
	weaponsGroup1 = WEAPONGROUP_MGUNS;
	weaponsGroup2 = WEAPONGROUP_CANNONS + WEAPONGROUP_ROCKETS;
	weaponsGroup3 = WEAPONGROUP_AAMISSILES + WEAPONGROUP_ATMISSILES + WEAPONGROUP_MISSILES;
	weaponsGroup4 = WEAPONGROUP_BOMBS + WEAPONGROUP_SPECIAL;
	class MFD
	{
		class MFD_Driver_Heading
		{
            topLeft = MFD_1_TL;
            topRight = MFD_1_TR;
            bottomLeft = MFD_1_BL;
            borderLeft = 0;
            borderRight = 0;
            borderTop = 0;
            borderBottom = 0;
            color[] = {0.84,0.86,0.84};
            alpha = 0.5;
            enableParallax = false;
            font = LCD14;
            class material
            {
                ambient[] = {1,1,1,1};
                diffuse[] = {1,1,1,1};
                emissive[] = {1000,1000,1000,1};
            };
            class Bones{};
            class Draw
            {
                color[] = {0.61,0.62,0};
                alpha = 1;
                condition = on;
                class Driver_Heading
                {
                    type = text;
                    source = heading;
                    sourceScale = 1;
                    sourceLength = 3;
                    scale = 1;
                    align = center;
                    refreshRate = 0.1;
                    pos[] =
                    {
                        {0.5,0},
                        1
                    };
                    right[] =
                    {
                        {1,0},
                        1
                    };
                    down[] =
                    {
                        {0.5,0.81},
                        1
                    };
                };
            };
		};
		class MFD_Driver_Fire
		{
            topLeft = MFD_2_TL;
            topRight = MFD_2_TR;
            bottomLeft = MFD_2_BL;
            borderLeft = 0;
            borderRight = 0;
            borderTop = 0;
            borderBottom = 0;
            color[] = {0.92,0.01,0};
            alpha = 0.5;
            enableParallax = false;
            font = LCD14;
            class material
            {
                ambient[] = {1,1,1,1};
                diffuse[] = {1,1,1,1};
                emissive[] = {1000,1000,1000,1};
            };
            class Bones{};
            class Draw
            {
                color[] = {0.92,0.01,0};
                alpha = 1;
                blinkingPattern[] = {1,1};
                blinkingStartsOn = 1;
                class Driver_Fire
                {
                    type = text;
                    source = static;
                    text = "ПОЖАР";
                    sourceScale = 1;
                    sourceLength = 3;
                    scale = 1;
                    align = center;
                    refreshRate = 0.1;
                    pos[] =
                    {
                        {0.455,0.105},
                        1
                    };
                    right[] =
                    {
                        {0.855,0.105},
                        1
                    };
                    down[] =
                    {
                        {0.455,0.705},
                        1
                    };
                };
            };
		};
		class MFD_Driver_Heading_text
		{
            topLeft = MFD_Driver_1_TL;
            topRight = MFD_Driver_1_TR;
            bottomLeft = MFD_Driver_1_BL;
            borderLeft = 0;
            borderRight = 0;
            borderTop = 0;
            borderBottom = 0;
            color[] = {1,1,1};
            alpha = 0.5;
            enableParallax = false;
            font = RobotoCondensedLight;
            class material
            {
                ambient[] = {1,1,1,1};
                diffuse[] = {1,1,1,1};
                emissive[] = {1000,1000,1000,1};
            };
            class Bones{};
            class Draw
            {
                color[] = {1,1,1};
                alpha = 1;
                condition = true;
                class Driver_Heading
                {
                    type = text;
                    source = static;
                    text = "AZIMUTH";
                    sourceScale = 1;
                    sourceLength = 3;
                    scale = 1;
                    align = center;
                    refreshRate = 0.1;
                    pos[] =
                    {
                        {0.45,0.02},
                        1
                    };
                    right[] =
                    {
                        {0.7,0.02},
                        1
                    };
                    down[] =
                    {
                        {0.45,0.87},
                        1
                    };
                };
            };
		};
		class MFD_Driver_Heading_second
		{
            topLeft = MFD_Driver_2_TL;
            topRight = MFD_Driver_2_TR;
            bottomLeft = MFD_Driver_2_BL;
            borderLeft = 0;
            borderRight = 0;
            borderTop = 0;
            borderBottom = 0;
            color[] = {1,1,1};
            alpha = 0.5;
            enableParallax = false;
            font = RobotoCondensedLight;
            class material
            {
                ambient[] = {1,1,1,1};
                diffuse[] = {1,1,1,1};
                emissive[] = {1000,1000,1000,1};
            };
            class Bones{};
            class Draw
            {
                color[] = {1,1,1};
                alpha = 1;
                condition = true;
                class Driver_Heading
                {
                    type = text;
                    source = heading;
                    sourceScale = 1;
                    sourceLength = 3;
                    scale = 1;
                    align = center;
                    refreshRate = 0.1;
                    pos[] =
                    {
                        {0.45,0},
                        1
                    };
                    right[] =
                    {
                        {0.95,0},
                        1
                    };
                    down[] =
                    {
                        {0.45,0.81},
                        1
                    };
                };
            };
		};
		class MFD_Gunner_Ready_To_Fire
		{
            topLeft = mfd_gun_cli_TL;
            topRight = mfd_gun_cli_TR;
            bottomLeft = mfd_gun_cli_BL;
            borderLeft = 0;
            borderRight = 0;
            borderTop = 0;
            borderBottom = 0;
            color[] = {0,0,0};
            alpha = 0.5;
            enableParallax = false;
            font = RobotoCondensedLight;
            class material
            {
                ambient[] = {1,1,1,1};
                diffuse[] = {1,1,1,1};
                emissive[] = {1000,1000,1000,1};
            };
            class Bones{};
            class Draw
            {
                color[] = {0,0,0};
                alpha = 1;
                condition = true;
                class Top_text
                {
                    type = text;
                    source = static;
                    text = "READY TO";
                    scale = 1;
                    sourceScale = 1;
                    align = center;
                    pos[] =
                    {
                        {0.45,0.05},
                        1
                    };
                    right[] =
                    {
                        {0.67,0.05},
                        1
                    };
                    down[] =
                    {
                        {0.45,0.55},
                        1
                    };
                };
                class Bottom_text
                {
                    type = text;
                    source = static;
                    text = "FIRE";
                    scale = 1;
                    sourceScale = 1;
                    align = center;
                    pos[] =
                    {
                        {0.465,0.45},
                        1
                    };
                    right[] =
                    {
                        {0.685,0.45},
                        1
                    };
                    down[] =
                    {
                        {0.465,0.95},
                        1
                    };
                };
            };
		};
		class MFD_Gunner_Display
		{
            topLeft = mfd_gun_TL;
            topRight = mfd_gun_TR;
            bottomLeft = mfd_gun_BL;
            borderLeft = 0;
            borderRight = 0;
            borderTop = 0;
            borderBottom = 0;
            color[] = {1,1,1};
            alpha = 0.5;
            enableParallax = false;
            turret[] = {0};
            font = RobotoCondensedLight;
            class material
            {
                ambient[] = {1,1,1,1};
                diffuse[] = {1,1,1,1};
                emissive[] = {1000,1000,1000,1};
            };
            class Bones{};
            class Draw
            {
                color[] = {1,1,1};
                alpha = 1;
                condition = true;
                class Main_armament
                {
                    type = text;
                    source = static;
                    text = "MAIN ARMAMENT";
                    scale = 1;
                    sourceScale = 1;
                    align = right;
                    pos[] =
                    {
                        {0.015,-0.005},
                        1
                    };
                    right[] =
                    {
                        {0.075,-0.005},
                        1
                    };
                    down[] =
                    {
                        {0.015,0.073},
                        1
                    };
                };
                class Main_armament_ammo_type
                {
                    type = text;
                    source = static;
                    text = "AMMO TYPE";
                    sourceScale = 1;
                    sourceLength = 3;
                    scale = 1;
                    align = center;
                    refreshRate = 0.1;
                    pos[] =
                    {
                        {0.545,-0.005},
                        1
                    };
                    right[] =
                    {
                        {0.605,-0.005},
                        1
                    };
                    down[] =
                    {
                        {0.545,0.073},
                        1
                    };
                };
                class Lased_distance_elevation
                {
                    type = text;
                    source = static;
                    text = "LASED DIST";
                    sourceScale = 1;
                    sourceLength = 3;
                    scale = 1;
                    align = right;
                    refreshRate = 0.1;
                    pos[] =
                    {
                        {0.015,0.84},
                        1
                    };
                    right[] =
                    {
                        {0.075,0.84},
                        1
                    };
                    down[] =
                    {
                        {0.015,0.918},
                        1
                    };
                };
                class Azimut
                {
                    type = text;
                    source = static;
                    text = "AZIMUTH";
                    sourceScale = 1;
                    sourceLength = 3;
                    scale = 1;
                    align = right;
                    refreshRate = 0.1;
                    pos[] =
                    {
                        {0.015,0.915},
                        1
                    };
                    right[] =
                    {
                        {0.075,0.915},
                        1
                    };
                    down[] =
                    {
                        {0.015,0.993},
                        1
                    };
                };
                class Damage
                {
                    type = text;
                    source = static;
                    text = "DAMAGE";
                    sourceScale = 1;
                    sourceLength = 3;
                    scale = 1;
                    align = right;
                    refreshRate = 0.1;
                    pos[] =
                    {
                        {0.015,0.39},
                        1
                    };
                    right[] =
                    {
                        {0.075,0.39},
                        1
                    };
                    down[] =
                    {
                        {0.015,0.468},
                        1
                    };
                };
                class Heading
                {
                    type = text;
                    source = [x]turretworld;
                    sourceScale = 1;
                    sourceLength = 3;
                    scale = 0.2;
                    align = center;
                    refreshRate = 0.1;
                    pos[] =
                    {
                        {0.34,0.915},1
                    };
                    right[] =
                    {
                        {0.4,0.915},1
                    };
                    down[] =
                    {
                        {0.34,0.993},1
                    };
                };
                class Lased_Range
                {
                    type = text;
                    source = laserDist;
                    sourceScale = 1;
                    sourceLength = 4;
                    scale = 1;
                    align = center;
                    refreshRate = 0.1;
                    pos[] =
                    {
                        {0.34,0.84},
                        1
                    };
                    right[] =
                    {
                        {0.4,0.84},
                        1
                    };
                    down[] =
                    {
                        {0.34,0.918},
                        1
                    };
                };
            };
		};
		class MFD_Gunner_Main_Armament_Ammo_Type
		{
            topLeft = mfd_gun_TL;
            topRight = mfd_gun_TR;
            bottomLeft = mfd_gun_BL;
            borderLeft = 0;
            borderRight = 0;
            borderTop = 0;
            borderBottom = 0;
            color[] = {0.84,0.86,0.84};
            alpha = 0.5;
            turret[] = {0};
            enableParallax = false;
            font = RobotoCondensedLight;
            class material
            {
                ambient[] = {1,1,1,1};
                diffuse[] = {1,1,1,1};
                emissive[] = {1000,1000,1000,1};
            };
            class Bones{};
            class Draw
            {
                color[] = {1,1,1};
                alpha = 1;
                condition = true;
                class Gunner_AmmoType
                {
                    type = text;
                    source = ammoFormat;
                    sourceScale = 1;
                    sourceLength = 3;
                    scale = 1;
                    align = center;
                    refreshRate = 0.1;
                    pos[] = 
                    {
                        {0.56,0.09},
                        1
                    };
                    right[] = 
                    {
                        {0.62,0.09},
                        1
                    };
                    down[] = 
                    {
                        {0.56,0.168},
                        1
                    };
                };
            };
		};
		class MFD_Gunner_AmmoIndicator_Main_Armament
		{
            topLeft = mfd_gun_TL;
            topRight = mfd_gun_TR;
            bottomLeft = mfd_gun_BL;
            borderLeft = 0;
            borderRight = 0;
            borderTop = 0;
            borderBottom = 0;
            color[] = {0.84,0.86,0.84};
            alpha = 0.5;
            enableParallax = false;
            turret[] = {0};
            font = RobotoCondensedLight;
            class material
            {
                ambient[] = {1,1,1,1};
                diffuse[] = {1,1,1,1};
                emissive[] = {1000,1000,1000,1};
            };
            class Bones{};
            class Draw
            {
                color[] = {1,1,1};
                alpha = 1;
                condition = true;
                class Main_Armament_Ammo_Type_1
                {
                    type = text;
                    source = static;
                    text = "MP-T";
                    sourceScale = 1;
                    sourceLength = 3;
                    scale = 1;
                    align = right;
                    refreshRate = 0.1;
                    pos[] =
                    {
                        {0.015,0.075},
                        1
                    };
                    right[] =
                    {
                        {0.075,0.075},
                        1
                    };
                    down[] =
                    {
                        {0.015,0.153},
                        1
                    };
                };
                class Gunner_Text_1
                {
                    type = text;
                    source = ammo;
                    sourceScale = 1;
                    sourceLength = 2;
                    sourceIndex = 0;
                    scale = 1;
                    align = left;
                    refreshRate = 0.1;
                    pos[] =
                    {
                        {0.39,0.075},
                        1
                    };
                    right[] =
                    {
                        {0.45,0.075},
                        1
                    };
                    down[] =
                    {
                        {0.39,0.153},
                        1
                    };
                };
                class Main_Armament_Ammo_Type_2
                {
                    type = text;
                    source = static;
                    text = "APFSDS-T";
                    sourceScale = 1;
                    sourceLength = 3;
                    scale = 1;
                    align = right;
                    refreshRate = 0.1;
                    pos[] =
                    {
                        {0.015,0.135},
                        1
                    };
                    right[] =
                    {
                        {0.075,0.135},
                        1
                    };
                    down[] =
                    {
                        {0.015,0.213},
                        1
                    };
                };
                class Gunner_Text_2
                {
                    type = text;
                    source = ammo;
                    sourceScale = 1;
                    sourceLength = 2;
                    sourceIndex = 0;
                    sourcePrecision = 1;
                    scale = 1;
                    align = left;
                    refreshRate = 0.1;
                    pos[] =
                    {
                        {0.39,0.135},
                        1
                    };
                    right[] =
                    {
                        {0.45,0.135},
                        1
                    };
                    down[] =
                    {
                        {0.39,0.213},
                        1
                    };
                };
                class Main_Armament_Ammo_Type_3
                {
                    type = text;
                    source = static;
                    text = "AT MISSILE";
                    sourceScale = 1;
                    sourceLength = 3;
                    scale = 1;
                    align = right;
                    refreshRate = 0.1;
                    pos[] =
                    {
                        {0.015,0.195},
                        1
                    };
                    right[] =
                    {
                        {0.075,0.195},
                        1
                    };
                    down[] =
                    {
                        {0.015,0.273},
                        1
                    };
                };
                class Gunner_Text_3
                {
                    type = text;
                    source = ammo;
                    sourceScale = 1;
                    sourceLength = 2;
                    sourceIndex = 2;
                    scale = 1;
                    align = left;
                    refreshRate = 0.1;
                    pos[] =
                    {
                        {0.39,0.195},
                        1
                    };
                    right[] =
                    {
                        {0.45,0.195},
                        1
                    };
                    down[] =
                    {
                        {0.39,0.273},
                        1
                    };
                };
            };
		};
		class MFD_Commander_Ready_To_Fire
		{
            topLeft = mfd_com_cli_TL;
            topRight = mfd_com_cli_TR;
            bottomLeft = mfd_com_cli_BL;
            borderLeft = 0;
            borderRight = 0;
            borderTop = 0;
            borderBottom = 0;
            color[] = {0,0,0};
            alpha = 0.5;
            enableParallax = false;
            font = RobotoCondensedLight;
            class material
            {
                ambient[] = {1,1,1,1};
                diffuse[] = {1,1,1,1};
                emissive[] = {1000,1000,1000,1};
            };
            class Bones{};
            class Draw
            {
                color[] = {0,0,0};
                alpha = 1;
                condition = true;
                class Top_text
                {
                    type = text;
                    source = static;
                    text = "READY TO";
                    sourceScale = 1;
                    sourceLength = 3;
                    scale = 1;
                    align = center;
                    refreshRate = 0.1;
                    pos[] =
                    {
                        {0.44,0.05},
                        1
                    };
                    right[] =
                    {
                        {0.69,0.05},
                        1
                    };
                    down[] =
                    {
                        {0.44,0.55},
                        1
                    };
                };
                class Bottom_text
                {
                    type = text;
                    source = static;
                    text = "FIRE";
                    sourceScale = 1;
                    sourceLength = 3;
                    scale = 1;
                    align = center;
                    refreshRate = 0.1;
                    pos[] =
                    {
                        {0.5,0.38},
                        1
                    };
                    right[] =
                    {
                        {0.75,0.38},
                        1
                    };
                    down[] =
                    {
                        {0.5,0.88},
                        1
                    };
                };
            };
		};
		class MFD_Commander_Main_Display
		{
            topLeft = PIP_COM_TL;
            topRight = PIP_COM_TR;
            bottomLeft = PIP_COM_BL;
            borderLeft = 0;
            borderRight = 0;
            borderTop = 0;
            borderBottom = 0;
            color[] = {0.84,0.86,0.84};
            alpha = 1;
            enableParallax = false;
            font = RobotoCondensedLight;
            class material
            {
                ambient[] = {1,1,1,1};
                diffuse[] = {1,1,1,1};
                emissive[] = {1000,1000,1000,1};
            };
            class Bones{};
            class Draw
            {
                color[] = {1,1,1,1};
                alpha = 0.5;
                class Range_Value
                {
                    type = text;
                    source = laserDist;
                    sourceScale = 1;
                    sourceLength = 3;
                    scale = 1;
                    align = center;
                    refreshRate = 0.08;
                    pos[] =
                    {
                        {0.5,0.7},
                        1
                    };
                    right[] =
                    {
                        {0.54,0.7},
                        1
                    };
                    down[] =
                    {
                        {0.5,0.74},
                        1
                    };
                };
            };
		};
		class MFD_Commander_Second_Display
		{
            topLeft = mfd_com_TL;
            topRight = mfd_com_TR;
            bottomLeft = mfd_com_BL;
            borderLeft = 0;
            borderRight = 0;
            borderTop = 0;
            borderBottom = 0;
            color[] = {1,1,1};
            alpha = 0.5;
            enableParallax = false;
            turret[] = {0};
            font = RobotoCondensedLight;
            class material
            {
                ambient[] = {1,1,1,1};
                diffuse[] = {1,1,1,1};
                emissive[] = {1000,1000,1000,1};
            };
            class Bones{};
            class Draw
            {
                color[] = {1,1,1};
                alpha = 1;
                condition = true;
                class Main_armament
                {
                    type = text;
                    source = static;
                    text = "MAIN ARMAMENT";
                    sourceScale = 1;
                    sourceLength = 3;
                    scale = 1;
                    align = right;
                    refreshRate = 0.1;
                    pos[] =
                    {
                        {0.015,-0.005},
                        1
                    };
                    right[] =
                    {
                        {0.075,-0.005},
                        1
                    };
                    down[] =
                    {
                        {0.015,0.073},
                        1
                    };
                };
                class Lased_distance_elevation
                {
                    type = text;
                    source = static;
                    text = "LASED DIST";
                    sourceScale = 1;
                    sourceLength = 3;
                    scale = 1;
                    align = right;
                    refreshRate = 0.1;
                    pos[] =
                    {
                        {0.015,0.84},
                        1
                    };
                    right[] =
                    {
                        {0.075,0.84},
                        1
                    };
                    down[] =
                    {
                        {0.015,0.918},
                        1
                    };
                };
                class Azimut
                {
                    type = text;
                    source = static;
                    text = "AZIMUTH";
                    sourceScale = 1;
                    sourceLength = 3;
                    scale = 1;
                    align = right;
                    refreshRate = 0.1;
                    pos[] =
                    {
                        {0.015,0.915},
                        1
                    };
                    right[] =
                    {
                        {0.075,0.915},
                        1
                    };
                    down[] =
                    {
                        {0.015,0.993},
                        1
                    };
                };
                class Heading
                {
                    type = text;
                    source = [x]turretworld;
                    sourceScale = 1;
                    sourceLength = 3;
                    scale = 0.2;
                    align = center;
                    refreshRate = 0.1;
                    pos[] =
                    {
                        {0.34,0.915},
                        1
                    };
                    right[] =
                    {
                        {0.4,0.915},
                        1
                    };
                    down[] =
                    {
                        {0.34,0.993},
                        1
                    };
                };
                class Lased_Range
                {
                    type = text;
                    source = laserDist;
                    sourceScale = 1;
                    sourceLength = 4;
                    scale = 1;
                    align = center;
                    refreshRate = 0.1;
                    pos[] =
                    {
                        {0.34,0.84},
                        1
                    };
                    right[] =
                    {
                        {0.4,0.84},
                        1
                    };
                    down[] =
                    {
                        {0.34,0.918},
                        1
                    };
                };
            };
		};
		class MFD_Commander_Smoke_Indicator
		{
            topLeft = mfd_com_smoke_TL;
            topRight = mfd_com_smoke_TR;
            bottomLeft = mfd_com_smoke_BL;
            borderLeft = 0;
            borderRight = 0;
            borderTop = 0;
            borderBottom = 0;
            color[] = {0,0,0};
            alpha = 0.5;
            enableParallax = false;
            font = RobotoCondensedLight;
            class material
            {
                ambient[] = {1,1,1,1};
                diffuse[] = {1,1,1,1};
                emissive[] = {1000,1000,1000,1};
            };
            class Bones{};
            class Draw
            {
                color[] = {0,0,0};
                alpha = 1;
                condition = true;
                class Top_text
                {
                    type = text;
                    source = static;
                    text = "SMOKE";
                    sourceScale = 1;
                    sourceLength = 3;
                    scale = 1;
                    align = center;
                    refreshRate = 0.1;
                    pos[] =
                    {
                        {0.45,0.05},
                        1
                    };
                    right[] =
                    {
                        {0.7,0.05},
                        1
                    };
                    down[] =
                    {
                        {0.45,0.55},
                        1
                    };
                };
                class Bottom_text
                {
                    type = text;
                    source = static;
                    text = "SCREEN";
                    sourceScale = 1;
                    sourceLength = 3;
                    scale = 1;
                    align = center;
                    refreshRate = 0.1;
                    pos[] =
                    {
                        {0.45,0.38},
                        1
                    };
                    right[] =
                    {
                        {0.7,0.38},
                        1
                    };
                    down[] =
                    {
                        {0.45,0.88},
                        1
                    };
                };
            };
		};
		class MFD_Commander_AmmoIndicator_Main_Armament
		{
            topLeft = mfd_com_TL;
            topRight = mfd_com_TR;
            bottomLeft = mfd_com_BL;
            borderLeft = 0;
            borderRight = 0;
            borderTop = 0;
            borderBottom = 0;
            color[] = {0.84,0.86,0.84};
            alpha = 0.5;
            enableParallax = false;
            turret[] = {0};
            font = RobotoCondensedLight;
            class material
            {
                ambient[] = {1,1,1,1};
                diffuse[] = {1,1,1,1};
                emissive[] = {1000,1000,1000,1};
            };
            class Bones{};
            class Draw
            {
                color[] = {1,1,1};
                alpha = 1;
                condition = true;
                class Main_Armament_Ammo_Type_1
                {
                    type = text;
                    source = static;
                    text = "MP-T";
                    sourceScale = 1;
                    sourceLength = 3;
                    scale = 1;
                    align = right;
                    refreshRate = 0.1;
                    pos[] =
                    {
                        {0.015,0.08},
                        1
                    };
                    right[] =
                    {
                        {0.075,0.08},
                        1
                    };
                    down[] =
                    {
                        {0.015,0.158},
                        1
                    };
                };
                class Gunner_Text_1
                {
                    type = text;
                    source = ammo;
                    sourceScale = 1;
                    sourceLength = 2;
                    sourceIndex = 0;
                    scale = 1;
                    align = left;
                    refreshRate = 0.1;
                    pos[] =
                    {
                        {0.38,0.08},
                        1
                    };
                    right[] =
                    {
                        {0.44,0.08},
                        1
                    };
                    down[] =
                    {
                        {0.38,0.158},
                        1
                    };
                };
            };
		};
		class MFD_Commander_AmmoIndicator_Main_Armament_second
		{
            topLeft = mfd_com_TL;
            topRight = mfd_com_TR;
            bottomLeft = mfd_com_BL;
            borderLeft = 0;
            borderRight = 0;
            borderTop = 0;
            borderBottom = 0;
            color[] = {0.84,0.86,0.84};
            alpha = 0.5;
            enableParallax = false;
            turret[] = {0};
            font = RobotoCondensedLight;
            class material
            {
                ambient[] = {1,1,1,1};
                diffuse[] = {1,1,1,1};
                emissive[] = {1000,1000,1000,1};
            };
            class Bones{};
            class Draw
            {
                color[] = {1,1,1};
                alpha = 1;
                condition = true;
                class Main_Armament_Ammo_Type_2
                {
                    type = text;
                    source = static;
                    text = "APFSDS-T";
                    sourceScale = 1;
                    sourceLength = 3;
                    scale = 1;
                    align = right;
                    refreshRate = 0.1;
                    pos[] =
                    {
                        {0.015,0.14},
                        1
                    };
                    right[] =
                    {
                        {0.075,0.14},
                        1
                    };
                    down[] =
                    {
                        {0.015,0.218},
                        1
                    };
                };
                class Gunner_Text_2
                {
                    type = text;
                    source = ammo;
                    sourceScale = 1;
                    sourceLength = 2;
                    sourceIndex = 0;
                    sourcePrecision = 1;
                    scale = 1;
                    align = left;
                    refreshRate = 0.1;
                    pos[] =
                    {
                        {0.38,0.14},
                        1
                    };
                    right[] =
                    {
                        {0.44,0.14},
                        1
                    };
                    down[] =
                    {
                        {0.38,0.218},
                        1
                    };
                };
            };
		};
		class MFD_Commander_AmmoIndicator_Main_Armament_third
		{
            topLeft = mfd_com_TL;
            topRight = mfd_com_TR;
            bottomLeft = mfd_com_BL;
            borderLeft = 0;
            borderRight = 0;
            borderTop = 0;
            borderBottom = 0;
            color[] = {0.84,0.86,0.84};
            alpha = 0.5;
            enableParallax = false;
            turret[] = {0};
            font = RobotoCondensedLight;
            class material
            {
                ambient[] = {1,1,1,1};
                diffuse[] = {1,1,1,1};
                emissive[] = {1000,1000,1000,1};
            };
            class Bones{};
            class Draw
            {
                color[] = {1,1,1};
                alpha = 1;
                condition = true;
                class Main_Armament_Ammo_Type_3
                {
                    type = text;
                    source = static;
                    text = "AT MISSILE";
                    sourceScale = 1;
                    sourceLength = 3;
                    scale = 1;
                    align = right;
                    refreshRate = 0.1;
                    pos[] =
                    {
                        {0.015,0.20},
                        1
                    };
                    right[] =
                    {
                        {0.075,0.20},
                        1
                    };
                    down[] =
                    {
                        {0.015,0.278},
                        1
                    };
                };
                class Gunner_Text_3
                {
                    type = text;
                    source = ammo;
                    sourceScale = 1;
                    sourceLength = 2;
                    sourceIndex = 2;
                    scale = 1;
                    align = left;
                    refreshRate = 0.1;
                    pos[] =
                    {
                        {0.38,0.20},
                        1
                    };
                    right[] =
                    {
                        {0.44,0.20},
                        1
                    };
                    down[] =
                    {
                        {0.38,0.278},
                        1
                    };
                };
            };
		};
	};
	scope = protected;
	scopeCurator = private;
	displayName = STR_A3_A_CfgVehicles_B_APC_Tracked_01_cannon_F0;
	//model = "\A3_Aegis\Armor_F_Aegis\APC_Tracked_01\APC_Tracked_01_cannon_F.p3d";
	picture = "\A3_Aegis\Armor_F_Aegis\APC_Tracked_01\Data\UI\APC_Tracked_01_cannon_CA.paa";
	icon = "\A3_Aegis\Armor_F_Aegis\APC_Tracked_01\Data\UI\map_APC_Tracked_01_cannon_CA.paa";
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
            weapons[] =
            {
                autocannon_30mm_CTWS,
                LMG_coax_ext,
                missiles_titan
            };
            magazines[] =
            {
                mag_2(140Rnd_30mm_MP_shells_Tracer_Red),
                mag_2(60Rnd_30mm_APFSDS_shells_Tracer_Red),
                mag_10(200Rnd_762x51_Belt_Red),
                mag_2(2Rnd_GAT_missiles)
            };
            gunnerGetInAction = GetInAMV_cargo;
            gunnerGetOutAction = GetOutLow;
            soundServo[] = {"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_gunner",db-8,1,30};
            soundServoVertical[] = {"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_gunner_vertical",db-8,1,30};
            LODTurnedIn = 1100;
		};
		class CommanderOptics: CommanderOptics
		{
		    LODTurnedIn = 1000;
		};
	};
	transportSoldier = 8;
	class TextureSources
	{
		class Sand
		{
            displayName = $STR_A3_TextureSources_Sand0;
            author = $STR_A3_A_AveryTheKitty;
            textures[] =
            {
                "\A3_Aegis\Armor_F_Aegis\APC_Tracked_01\Data\APC_Tracked_01_body_CO.paa",
                "\A3\Armor_F_Beta\APC_Tracked_01\Data\MBT_01_body_CO.paa",
                "\A3_Aegis\Armor_F_Aegis\APC_Tracked_01\Data\RCWS30_CO.paa",
                "\A3\Armor_F\Data\camonet_NATO_Desert_CO.paa"
            };
            factions[] = {BLU_F};
		};
		class Olive
		{
            displayName = $STR_A3_TextureSources_Olive0;
            author = $STR_A3_A_AveryTheKitty;
            textures[] =
            {
                "\A3_Aegis\Armor_F_Aegis\APC_Tracked_01\Data\APC_Tracked_01_body_olive_CO.paa",
                "\A3\Armor_F_Exp\APC_Tracked_01\Data\MBT_01_body_olive_CO.paa",
                "\A3_Aegis\Armor_F_Aegis\APC_Tracked_01\Data\RCWS30_olive_CO.paa",
                "\A3\Armor_F\Data\camonet_NATO_Green_CO.paa"
            };
            factions[] =
            {
                BLU_T_F,
                BLU_W_F
            };
		};
	};
	class AnimationSources: AnimationSources
	{
		class muzzle_rot
		{
            source = ammorandom;
            weapon = autocannon_30mm_CTWS;
		};
		class muzzle_hide
		{
            source = reload;
            weapon = autocannon_30mm_CTWS;
		};
		class Missiles_revolving
		{
            source = revolving;
            weapon = missiles_titan;
		};
		class Missiles_reloadMagazine: Missiles_revolving
		{
		    source = reloadMagazine;
		};
		class showCamonetPlates1
		{
            source = user;
            animPeriod = 0.001;
            initPhase = false;
		};
		class showCamonetPlates2
		{
            source = user;
            animPeriod = 0.001;
            initPhase = false;
		};
		class showCamonetHull
		{
            displayName = $STR_A3_AnimationSources_showCamonetHull0;
            author = $STR_A3_A_AveryTheKitty;
            source = user;
            animPeriod = 0.001;
            initPhase = false;
            forceAnimatePhase = true;
            forceAnimate[] =
            {
                showCamonetPlates1,1,
                showCamonetPlates2,1
            };
            mass = -50;
		};
		class showBags
		{
            displayName = $STR_A3_AnimationSources_showBagsHull0;
            author = $STR_A3_A_AveryTheKitty;
            source = user;
            animPeriod = 0.001;
            initPhase = false;
            mass = -50;
		};
	};
	animationList[] =
	{
		showCamonetHull,0,
		showCamonetPlates1,0,
		showCamonetPlates2,0,
		showBags,0.67
	};
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Armor_F_Aegis\APC_Tracked_01\Data\APC_Tracked_01_body_CO.paa",
		"\A3\Armor_F_Beta\APC_Tracked_01\Data\MBT_01_body_CO.paa",
		"\A3_Aegis\Armor_F_Aegis\APC_Tracked_01\Data\RCWS30_CO.paa",
		"\A3\Armor_F\Data\camonet_NATO_Desert_CO.paa"
	};
};