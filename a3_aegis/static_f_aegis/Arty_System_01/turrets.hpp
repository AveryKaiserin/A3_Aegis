class Turrets: Turrets
{
    class MainTurret: MainTurret
    {
        turretInfoType = RscWeaponRangeArtilleryAuto;






        
        minelev = -5;
        maxelev = 55;
        minturn = -180;
        maxturn = 180;
        initElev = 0;
        initTurn = 0;
		elevationMode = 3;
		maxHorizontalRotSpeed = 0.78;
		maxVerticalRotSpeed = 0.26;
		soundServo[] = {"\A3\Sounds_F\vehicles\armor\noises\servo_armor_gunner",db-16,1.0,30};
		soundServoVertical[] = {"\A3\Sounds_F\vehicles\armor\noises\servo_armor_gunner_vertical",db-16,1.0,30};
        hasGunner = true;
        primary = true;
        primaryGunner = true;
        startEngine = false;
        enableManualFire = true;
        optics = true;
		gunnerOpticsModel = "\A3\Weapons_F\Acc\reticle_Mortar_01_F.p3d";
        class OpticsIn: Optics_Gunner_MBT_01
        {
            class Wide: Wide
            {
                gunnerOpticsModel = "\A3\Weapons_F\Acc\reticle_Mortar_01_F.p3d";
                initFov = 0.174;
                minFov = 0.0077778;
                maxFov = 0.14;
                visionMode[] =
                {
                    Normal,
                    NVG
                };
            };
        };
        forceHideGunner = true;
        gunnerForceOptics = true;
        gunnerOutForceOptics = true;
        viewgunnerinExternal = false;
        outGunnerMayFire = true;
        inGunnerMayFire = true;
        castGunnerShadow = false;
        showAllTargets = 2;
        body = MainTurret;
        gun = MainGun;
        animationSourceBody = MainTurret;
        animationSourceGun = MainGun;
        gunbeg = "pos_barrel_end";
        gunend = "pos_barrel";
        uavCameraGunnerPos = "pos_gunner_view";
        uavCameraGunnerDir = "pos_gunner_view_dir";
        memoryPointGunnerOptics = "pos_gunner_view";
        particlespos = "pos_fx";
        particlesdir = "pos_fx_dir";
        selectionFireAnim = "";
        weapons[] = {mortar_120mm_AMOS};
        magazines[] = {50Rnd_120mm_Mo_shells};
        class Components: Components
        {
            class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft
            {
                class Components
                {
                    class EmptyDisplay
                    {
                        componentType = EmptyDisplayComponent;
                    };
                    class MinimapDisplay
                    {
                        componentType = MinimapDisplayComponent;
                        resource = RscCustomInfoMiniMap;
                    };
                    class UAVDisplay
                    {
                        componentType = UAVFeedDisplayComponent;
                    };
                    class SensorDisplay
                    {
                        componentType = SensorsDisplayComponent;
                        range[] =
                        {
                            16000,
                            8000,
                            4000,
                            2000
                        };
                        resource = RscCustomInfoSensors;
                    };
                };
            };
            class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight
            {
                defaultDisplay = SensorDisplay;
                class Components
                {
                    class EmptyDisplay
                    {
                        componentType = EmptyDisplayComponent;
                    };
                    class MinimapDisplay
                    {
                        componentType = MinimapDisplayComponent;
                        resource = RscCustomInfoMiniMap;
                    };
                    class UAVDisplay
                    {
                        componentType = UAVFeedDisplayComponent;
                    };
                    class SensorDisplay
                    {
                        componentType = SensorsDisplayComponent;
                        range[] =
                        {
                            16000,
                            8000,
                            4000,
                            2000
                        };
                        resource = RscCustomInfoSensors;
                    };
                };
            };
        };
    };
};