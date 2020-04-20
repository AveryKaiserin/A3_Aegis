class O_R_Truck_03_transport_F: Truck_03_base_F
{
    author = $STR_A3_A_AveryTheKitty;
    mapSize = 11.48;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_Truck_03_transport_F.jpg";
    scope = public;
    scopeCurator = public;
    side = TEast;
    faction = OPF_R_F;
    crew = O_R_Soldier_F;
    displayName = $STR_A3_CfgVehicles_O_Truck_03_transport_F0;
    model = "\A3\Soft_F_EPC\Truck_03\Truck_03_transport_F.p3d";
    picture = "\A3\Soft_F_EPC\Truck_03\Data\UI\truck_03_transport_CA.paa";
    icon = "\A3\Soft_F_EPC\Truck_03\Data\UI\map_Truck_03_Transport_CA.paa";
    hiddenSelections[] =
    {
        Camo1,
        Camo2,
        Camo3
    };
    hiddenSelectionsTextures[] =
    {
        "\A3_Aegis\Soft_F_Aegis\Truck_03\Data\Truck_03_ext01_RUS_CO.paa",
        "\A3_Aegis\Soft_F_Aegis\Truck_03\Data\Truck_03_ext02_RUS_CO.paa",
        "\A3_Aegis\Soft_F_Aegis\Truck_03\Data\Truck_03_cargo_RUS_CO.paa"
    };
    class TextureSources
    {
        class Green
        {
            displayName = $STR_A3_TEXTURESOURCES_GREEN0;
            author = $STR_A3_A_AveryTheKitty;
            textures[] =
            {
                "\A3_Aegis\Soft_F_Aegis\Truck_03\Data\Truck_03_ext01_RUS_CO.paa",
                "\A3_Aegis\Soft_F_Aegis\Truck_03\Data\Truck_03_ext02_RUS_CO.paa",
                "\A3_Aegis\Soft_F_Aegis\Truck_03\Data\Truck_03_cargo_RUS_CO.paa"
            };
            factions[] = {OPF_R_F};
        };
    };
    textureList[] = {Green,1};
    transportSoldier = 11;
    cargoProxyIndexes[] = {1,2,3,4,5,7,8,9,10,11,13};
    getInProxyOrder[] = {1,2,3,4,5,6,7,8,9,10,11,12,13};
    class CargoTurret;
    class Turrets: Turrets
    {
        class CargoTurret_01: CargoTurret
        {
            gunnerAction = passenger_inside_3;
            memoryPointsGetInGunner = "pos cargo LR";
            memoryPointsGetInGunnerDir = "pos cargo LR dir";
            gunnerName = $STR_A3_TURRETS_CARGOTURRET_L;
            gunnerCompartments = Compartment2;
            proxyIndex = 6;
            isPersonTurret = true;
            class TurnIn
            {
                limitsArrayTop[] =
                {
                    {13.167,-69.298302},
                    {14.292,-43.3992},
                    {5.4840999,-5.8340001},
                    {2.8036001,1.905}
                };
                limitsArrayBottom[] =
                {
                    {-44.745998,-74.107597},
                    {-25.3468,4.3871999}
                };
            };
        };
        class CargoTurret_02: CargoTurret_01
        {
            gunnerName = $STR_A3_TURRETS_CARGOTURRET_R;
            memoryPointsGetInGunner = "pos cargo RR";
            memoryPointsGetInGunnerDir = "pos cargo RR dir";
            proxyIndex = 12;
            class TurnIn
            {
                limitsArrayTop[] =
                {
                    {4.6427002,0.9217},
                    {6.4808002,5.0871},
                    {5.9327998,19.181101},
                    {14.8136,54.404999},
                    {12.9964,82.350304},
                    {6.7925,84.478996}
                };
                limitsArrayBottom[] =
                {
                    {-23.241199,-0.4235},
                    {-27.9569,1.0816},
                    {-44.599499,13.3937},
                    {-44.451199,94.889198}
                };
            };
        };
    };
};
class O_R_Truck_03_covered_F: Truck_03_base_F
{
    author = $STR_A3_A_AveryTheKitty;
    mapSize = 11.48;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_Truck_03_covered_F.jpg";
    scope = public;
    scopeCurator = public;
    side = TEast;
    faction = OPF_R_F;
    crew = O_R_Soldier_F;
    displayName = $STR_A3_CfgVehicles_O_Truck_03_covered_F0;
    model = "\A3\Soft_F_EPC\Truck_03\Truck_03_covered_F.p3d";
    picture = "\A3\Soft_F_EPC\Truck_03\Data\UI\truck_03_covered_CA.paa";
    icon = "\A3\Soft_F_EPC\Truck_03\Data\UI\map_Truck_03_Covered_CA.paa";
    hiddenSelections[] =
    {
        Camo1,
        Camo2,
        Camo3,
        Camo4
    };
    hiddenSelectionsTextures[] =
    {
        "\A3_Aegis\Soft_F_Aegis\Truck_03\Data\Truck_03_ext01_RUS_CO.paa",
        "\A3_Aegis\Soft_F_Aegis\Truck_03\Data\Truck_03_ext02_RUS_CO.paa",
        "\A3_Aegis\Soft_F_Aegis\Truck_03\Data\Truck_03_cargo_RUS_CO.paa",
        "\A3_Aegis\Soft_F_Aegis\Truck_03\Data\Truck_03_cover_RUS_CO.paa"
    };
    class TextureSources
    {
        class Green
        {
            displayName = $STR_A3_TEXTURESOURCES_GREEN0;
            author = $STR_A3_A_AveryTheKitty;
            textures[] =
            {
                "\A3_Aegis\Soft_F_Aegis\Truck_03\Data\Truck_03_ext01_RUS_CO.paa",
                "\A3_Aegis\Soft_F_Aegis\Truck_03\Data\Truck_03_ext02_RUS_CO.paa",
                "\A3_Aegis\Soft_F_Aegis\Truck_03\Data\Truck_03_cargo_RUS_CO.paa",
                "\A3_Aegis\Soft_F_Aegis\Truck_03\Data\Truck_03_cover_RUS_CO.paa"
            };
            factions[] = {OPF_R_F};
        };
    };
    textureList[] = {Green,1};
    transportSoldier = 11;
    cargoProxyIndexes[] = {1,2,3,4,5,7,8,9,10,11,13};
    getInProxyOrder[] = {1,2,3,4,5,6,7,8,9,10,11,12,13};
    class CargoTurret;
    class Turrets: Turrets
    {
        class CargoTurret_01: CargoTurret
        {
            gunnerAction = passenger_inside_3;
            memoryPointsGetInGunner = "pos cargo LR";
            memoryPointsGetInGunnerDir = "pos cargo LR dir";
            gunnerName = $STR_A3_TURRETS_CARGOTURRET_L;
            gunnerCompartments = Compartment2;
            proxyIndex = 6;
            isPersonTurret = true;
            class TurnIn
            {
                limitsArrayTop[] =
                {
                    {13.167,-69.298302},
                    {14.292,-43.3992},
                    {5.4840999,-5.8340001},
                    {2.8036001,1.905}
                };
                limitsArrayBottom[] =
                {
                    {-44.745998,-74.107597},
                    {-25.3468,4.3871999}
                };
            };
        };
        class CargoTurret_02: CargoTurret_01
        {
            gunnerName = $STR_A3_TURRETS_CARGOTURRET_R;
            memoryPointsGetInGunner = "pos cargo RR";
            memoryPointsGetInGunnerDir = "pos cargo RR dir";
            proxyIndex = 12;
            class TurnIn
            {
                limitsArrayTop[] =
                {
                    {4.6427002,0.9217},
                    {6.4808002,5.0871},
                    {5.9327998,19.181101},
                    {14.8136,54.404999},
                    {12.9964,82.350304},
                    {6.7925,84.478996}
                };
                limitsArrayBottom[] =
                {
                    {-23.241199,-0.4235},
                    {-27.9569,1.0816},
                    {-44.599499,13.3937},
                    {-44.451199,94.889198}
                };
            };
        };
    };
};
class O_R_Truck_03_repair_F: Truck_03_base_F
{
    author = $STR_A3_A_AveryTheKitty;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_Truck_03_repair_F.jpg";
    scope = public;
    scopeCurator = public;
    side = TEast;
    faction = OPF_R_F;
    crew = O_R_Soldier_F;
    displayName = $STR_A3_CfgVehicles_O_Truck_03_repair_F0;
    model = "\A3\Soft_F_EPC\Truck_03\Truck_03_repair_F.p3d";
    picture = "\A3\Soft_F_EPC\Truck_03\Data\UI\truck_03_ammo_CA.paa";
    icon = "\A3\Soft_F_EPC\Truck_03\Data\UI\map_Truck_03_ammo_CA.paa";
    vehicleClass = Support;
    transportSoldier = 1;
    transportRepair = 200000000;
    supplyRadius = 10;
    hiddenSelections[] =
    {
        Camo1,
        Camo2,
        Camo3
    };
    hiddenSelectionsTextures[] =
    {
        "\A3_Aegis\Soft_F_Aegis\Truck_03\Data\Truck_03_ext01_RUS_CO.paa",
        "\A3_Aegis\Soft_F_Aegis\Truck_03\Data\Truck_03_ext02_RUS_CO.paa",
        "\A3_Aegis\Soft_F_Aegis\Truck_03\Data\Truck_03_ammo_RUS_CO.paa"
    };
    class TextureSources
    {
        class Green
        {
            displayName = $STR_A3_TEXTURESOURCES_GREEN0;
            author = $STR_A3_A_AveryTheKitty;
            textures[] =
            {
                "\A3_Aegis\Soft_F_Aegis\Truck_03\Data\Truck_03_ext01_RUS_CO.paa",
                "\A3_Aegis\Soft_F_Aegis\Truck_03\Data\Truck_03_ext02_RUS_CO.paa",
                "\A3_Aegis\Soft_F_Aegis\Truck_03\Data\Truck_03_ammo_RUS_CO.paa"
            };
            factions[] = {OPF_R_F};
        };
    };
    textureList[] = {Green,1};
    class TransportItems
    {
        item_xx(FirstAidKit,4);
    };
};
class O_R_Truck_03_ammo_F: Truck_03_base_F
{
    author = $STR_A3_A_AveryTheKitty;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_Truck_03_ammo_F.jpg";
    scope = public;
    scopeCurator = public;
    side = TEast;
    faction = OPF_R_F;
    crew = O_R_Soldier_F;
    displayName = $STR_A3_CfgVehicles_O_Truck_03_ammo_F0;
    model = "\A3\Soft_F_EPC\Truck_03\Truck_03_box_F.p3d";
    picture = "\A3\Soft_F_EPC\Truck_03\Data\UI\truck_03_box_CA.paa";
    icon = "\A3\Soft_F_EPC\Truck_03\Data\UI\map_Truck_03_box_CA.paa";
    vehicleClass = Support;
    transportSoldier = 1;
    transportAmmo = 30000;
    supplyRadius = 10;
    fuelExplosionPower = 1;
    hiddenSelections[] =
    {
        Camo1,
        Camo2,
        Camo3,
        Camo4
    };
    hiddenSelectionsTextures[] =
    {
        "\A3_Aegis\Soft_F_Aegis\Truck_03\Data\Truck_03_ext01_RUS_CO.paa",
        "\A3_Aegis\Soft_F_Aegis\Truck_03\Data\Truck_03_ext02_RUS_CO.paa",
        "\A3_Aegis\Soft_F_Aegis\Truck_03\Data\Truck_03_cargo_RUS_CO.paa",
        "\A3_Aegis\Soft_F_Aegis\Truck_03\Data\Containers_02_set_RUS_CO.paa"
    };
    class TextureSources
    {
        class Green
        {
            displayName = $STR_A3_TEXTURESOURCES_GREEN0;
            author = $STR_A3_A_AveryTheKitty;
            textures[] =
            {
                "\A3_Aegis\Soft_F_Aegis\Truck_03\Data\Truck_03_ext01_RUS_CO.paa",
                "\A3_Aegis\Soft_F_Aegis\Truck_03\Data\Truck_03_ext02_RUS_CO.paa",
                "\A3_Aegis\Soft_F_Aegis\Truck_03\Data\Truck_03_cargo_RUS_CO.paa",
                "\A3_Aegis\Soft_F_Aegis\Truck_03\Data\Containers_02_set_RUS_CO.paa"
            };
            factions[] = {OPF_R_F};
        };
    };
    textureList[] = {Green,1};
    class TransportItems
    {
        item_xx(FirstAidKit,4);
    };
};
class O_R_Truck_03_fuel_F: Truck_03_base_F
{
    author = $STR_A3_A_AveryTheKitty;
    mapSize = 11.07;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_Truck_03_fuel_F.jpg";
    scope = public;
    scopeCurator = public;
    side = TEast;
    faction = OPF_R_F;
    crew = O_R_Soldier_F;
    displayName = $STR_A3_CfgVehicles_O_Truck_03_fuel_F0;
    model = "\A3\Soft_F_EPC\Truck_03\Truck_03_fuel_F.p3d";
    picture = "\A3\Soft_F_EPC\Truck_03\Data\UI\truck_03_fuel_CA.paa";
    icon = "\A3\Soft_F_EPC\Truck_03\Data\UI\map_Truck_03_Fuel_CA.paa";
    vehicleClass = Support;
    transportSoldier = 1;
    transportFuel = 3000;
    supplyRadius = 10;
    fuelExplosionPower = 10;
    hiddenSelections[] =
    {
        Camo1,
        Camo2,
        Camo3
    };
    hiddenSelectionsTextures[] =
    {
        "\A3_Aegis\Soft_F_Aegis\Truck_03\Data\Truck_03_ext01_RUS_CO.paa",
        "\A3_Aegis\Soft_F_Aegis\Truck_03\Data\Truck_03_ext02_RUS_CO.paa",
        "\A3_Aegis\Soft_F_Aegis\Truck_03\Data\Truck_03_fuel_RUS_CO.paa"
    };
    class TextureSources
    {
        class Green
        {
            displayName = $STR_A3_TEXTURESOURCES_GREEN0;
            author = $STR_A3_A_AveryTheKitty;
            textures[] =
            {
                "\A3_Aegis\Soft_F_Aegis\Truck_03\Data\Truck_03_ext01_RUS_CO.paa",
                "\A3_Aegis\Soft_F_Aegis\Truck_03\Data\Truck_03_ext02_RUS_CO.paa",
                "\A3_Aegis\Soft_F_Aegis\Truck_03\Data\Truck_03_fuel_RUS_CO.paa"
            };
            factions[] = {OPF_R_F};
        };
    };
    textureList[] = {Green,1};
    class TransportItems
    {
        item_xx(FirstAidKit,4);
    };
};
class O_R_Truck_03_medical_F: Truck_03_base_F
{
    author = $STR_A3_A_AveryTheKitty;
    mapSize = 11.48;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_Truck_03_medical_F.jpg";
    scope = public;
    scopeCurator = public;
    side = TEast;
    faction = OPF_R_F;
    crew = O_R_Soldier_F;
    displayName = $STR_A3_CfgVehicles_O_Truck_03_medical_F0;
    model = "\A3\Soft_F_EPC\Truck_03\Truck_03_medevac_F.p3d";
    picture = "\A3\Soft_F_EPC\Truck_03\Data\UI\truck_03_medevac_CA.paa";
    icon = "\A3\Soft_F_EPC\Truck_03\Data\UI\map_Truck_03_medevac_CA.paa";
    vehicleClass = Support;
    supplyRadius = 10;
    attendant = true;
    transportSoldier = 12;
    threat[] = {0,0,0};
    hiddenSelections[] =
    {
        Camo1,
        Camo2,
        Camo3,
        Camo4
    };
    hiddenSelectionsTextures[] =
    {
        "\A3_Aegis\Soft_F_Aegis\Truck_03\Data\Truck_03_ext01_RUS_CO.paa",
        "\A3_Aegis\Soft_F_Aegis\Truck_03\Data\Truck_03_ext02_RUS_CO.paa",
        "\A3_Aegis\Soft_F_Aegis\Truck_03\Data\Truck_03_cargo_RUS_CO.paa",
        "\A3_Aegis\Soft_F_Aegis\Truck_03\Data\Truck_03_cover_RUS_CO.paa"
    };
    class TextureSources
    {
        class Green
        {
            displayName = $STR_A3_TEXTURESOURCES_GREEN0;
            author = $STR_A3_A_AveryTheKitty;
            textures[] =
            {
                "\A3_Aegis\Soft_F_Aegis\Truck_03\Data\Truck_03_ext01_RUS_CO.paa",
                "\A3_Aegis\Soft_F_Aegis\Truck_03\Data\Truck_03_ext02_RUS_CO.paa",
                "\A3_Aegis\Soft_F_Aegis\Truck_03\Data\Truck_03_cargo_RUS_CO.paa",
                "\A3_Aegis\Soft_F_Aegis\Truck_03\Data\Truck_03_cover_RUS_CO.paa"
            };
            factions[] = {OPF_R_F};
        };
    };
    textureList[] = {Green,1};
    cargoAction[] =
    {
        passenger_low01,
        passenger_injured_medevac_truck01,
        passenger_injured_medevac_truck02,
        passenger_injured_medevac_truck01,
        passenger_flatground_generic03,
        passenger_flatground_generic05,
        passenger_generic01_foldhands,
        passenger_apc_narrow_generic03,
        passenger_generic01_leanright,
        passenger_apc_generic03,
        passenger_generic01_foldhands,
        passenger_generic01_leanleft,
        passenger_apc_generic01,
        passenger_generic01_foldhands,
        passenger_apc_generic04,
        passenger_generic01_leanleft
    };
    class TransportItems
    {
        item_xx(FirstAidKit,10);
    };
};