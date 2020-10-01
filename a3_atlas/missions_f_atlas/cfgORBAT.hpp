class CfgORBAT
{
	class BIS;
	class Atlas
	{
        /* NATO 31st Panzergrenadier Battalion */
        class 31stPanzergrenadier
        {
            id = 31;
            text = "%1 Panzergrenadier %3";
            textShort = "PzBtl %1";
            type = MechanizedInfantry;
            textureSize = 1;
            insignia = "\A3_Atlas\Missions_F_Atlas\Data\ORBAT\NATO_31stBattalion_CA.paa";
            side = West;
            size = Battalion;
            commander = "Rhekopf";
            commanderRank = Major;
            description = "The 31st Panzergrenadier Battalion comprises the German Army's primary expeditionary force. It is among the best equipped units in the German Army, surviving military expenditure cuts in the mid-2020s amidst a faltering European economy. It relies on its sister units for artillery and air support, however.";
            class 1stCompany
            {
                id = 1;
                type = HQ;
                size = Company;
                side = West;
                commander = GermanMen;
                text = "%1 %2 and Supply %3";
                assets[] =
                {
                    {Atlas_B_G_Truck_01_Repair_F,4},
                    {Atlas_B_G_Truck_01_fuel_F,4},
                    {Atlas_B_G_Truck_01_transport_F,10}
                };
            };
            class 2ndCompany: 1stCompany
            {
                id = 2;
                text = "%1 %3";
                textShort = "%1 %3";
                type = Armored;
                assets[] =
                {
                    {Atlas_B_G_MBT_03_cannon_F,8},
                    {Atlas_B_G_LT_01_cannon_F,8}
                };
                class 1stPlatoon
                {
                    id = 1;
                    type = Armored;
                    size = Platoon;
                    side = West;
                    commander = GermanMen;
                    assets[] =
                    {
                        {Atlas_B_G_MBT_03_cannon_F,4}
                    };
                };
                class 2ndPlatoon: 1stPlatoon
                {
                    id = 2;
                };
                class 3rdPlatoon: 1stPlatoon
                {
                    id = 3;
                    assets[] =
                    {
                        {Atlas_B_G_LT_01_cannon_F,2},
                        {Atlas_B_G_LT_01_AT_F,2}
                    };
                };
                class 4thPlatoon: 3rdPlatoon
                {
                    id = 4;
                };
            };
            class 3rdCompany: 2ndCompany
            {
                id = 3;
                type = MechanizedInfantry;
                size = Company;
                side = West;
                commander = GermanMen;
                assets[] =
                {
                    {Atlas_B_G_MBT_03_cannon_F,4},
                    {Atlas_B_G_APC_Wheeled_03_cannon_F,12}
                };
                class 1stPlatoon
                {
                    id = 1;
                    type = MechanizedInfantry;
                    size = Platoon;
                    side = West;
                    commander = GermanMen;
                    assets[] =
                    {
                        {Atlas_B_G_MBT_03_cannon_F,1},
                        {Atlas_B_G_APC_Wheeled_03_cannon_F,3}
                    };
                    class 1stSquad
                    {
                        id = 1;
                        type = Infantry;
                        size = Platoon;
                        side = West;
                        commander = GermanMen;
                    };
                    class 2ndSquad: 1stSquad
                    {
                        id = 2;
                    };
                    class 3rdSquad: 1stSquad
                    {
                        id = 3;
                    };
                    class 4thSquad: 1stSquad
                    {
                        id = 4;
                    };
                };
                class 2ndPlatoon: 1stPlatoon
                {
                    id = 2;
                    class 1stSquad
                    {
                        id = 1;
                        type = Infantry;
                        size = Platoon;
                        side = West;
                        commander = GermanMen;
                    };
                    class 2ndSquad: 1stSquad
                    {
                        id = 2;
                    };
                    class 3rdSquad: 1stSquad
                    {
                        id = 3;
                    };
                    class 4thSquad: 1stSquad
                    {
                        id = 4;
                    };
                };
                class 3rdPlatoon: 1stPlatoon
                {
                    id = 3;
                    class 1stSquad
                    {
                        id = 1;
                        type = Infantry;
                        size = Platoon;
                        side = West;
                        commander = GermanMen;
                    };
                    class 2ndSquad: 1stSquad
                    {
                        id = 2;
                    };
                    class 3rdSquad: 1stSquad
                    {
                        id = 3;
                    };
                    class 4thSquad: 1stSquad
                    {
                        id = 4;
                    };
                };
                class 4thPlatoon: 1stPlatoon
                {
                    id = 4;
                    class 1stSquad
                    {
                        id = 1;
                        type = Infantry;
                        size = Platoon;
                        side = West;
                        commander = GermanMen;
                    };
                    class 2ndSquad: 1stSquad
                    {
                        id = 2;
                    };
                    class 3rdSquad: 1stSquad
                    {
                        id = 3;
                    };
                    class 4thSquad: 1stSquad
                    {
                        id = 4;
                    };
                };
            };
            class 4thCompany: 3rdCompany
            {
                id = 4;
                class 1stPlatoon
                {
                    id = 1;
                    type = MechanizedInfantry;
                    size = Platoon;
                    side = West;
                    commander = GermanMen;
                    assets[] =
                    {
                        {Atlas_B_G_MBT_03_cannon_F,1},
                        {Atlas_B_G_APC_Wheeled_03_cannon_F,3}
                    };
                    class 1stSquad
                    {
                        id = 1;
                        type = Infantry;
                        size = Platoon;
                        side = West;
                        commander = GermanMen;
                    };
                    class 2ndSquad: 1stSquad
                    {
                        id = 2;
                    };
                    class 3rdSquad: 1stSquad
                    {
                        id = 3;
                    };
                    class 4thSquad: 1stSquad
                    {
                        id = 4;
                    };
                };
                class 2ndPlatoon: 1stPlatoon
                {
                    id = 2;
                    class 1stSquad
                    {
                        id = 1;
                        type = Infantry;
                        size = Platoon;
                        side = West;
                        commander = GermanMen;
                    };
                    class 2ndSquad: 1stSquad
                    {
                        id = 2;
                    };
                    class 3rdSquad: 1stSquad
                    {
                        id = 3;
                    };
                    class 4thSquad: 1stSquad
                    {
                        id = 4;
                    };
                };
                class 3rdPlatoon: 1stPlatoon
                {
                    id = 3;
                    class 1stSquad
                    {
                        id = 1;
                        type = Infantry;
                        size = Platoon;
                        side = West;
                        commander = GermanMen;
                    };
                    class 2ndSquad: 1stSquad
                    {
                        id = 2;
                    };
                    class 3rdSquad: 1stSquad
                    {
                        id = 3;
                    };
                    class 4thSquad: 1stSquad
                    {
                        id = 4;
                    };
                };
                class 4thPlatoon: 1stPlatoon
                {
                    id = 4;
                    class 1stSquad
                    {
                        id = 1;
                        type = Infantry;
                        size = Platoon;
                        side = West;
                        commander = GermanMen;
                    };
                    class 2ndSquad: 1stSquad
                    {
                        id = 2;
                    };
                    class 3rdSquad: 1stSquad
                    {
                        id = 3;
                    };
                    class 4thSquad: 1stSquad
                    {
                        id = 4;
                    };
                };
            };
            class 5thCompany: 1stCompany
            {
                id = 5;
                text = "%1 %2 %3";
                textShort = "%1 %3";
                type = Support;
                assets[] =
                {
                    {Atlas_B_G_LT_01_AA_F,6},
                    {Atlas_B_G_LT_01_scout_F,2},
                    {Atlas_B_G_MRAP_03_gmg_F,2},
                    {Atlas_B_G_MRAP_03_hmg_F,4}
                };
                class 1stPlatoon
                {
                    id = 1;
                    type = Recon;
                    size = Platoon;
                    side = West;
                    commander = GermanMen;
                    assets[] =
                    {
                        {Atlas_B_G_MRAP_03_gmg_F,1},
                        {Atlas_B_G_MRAP_03_hmg_F,2}
                    };
                };
                class 2ndPlatoon: 1stPlatoon
                {
                    id = 2;
                };
                class 3rdPlatoon: 1stPlatoon
                {
                    id = 3;
                    type = AntiAir;
                    assets[] =
                    {
                        {Atlas_B_G_LT_01_AA_F,3},
                        {Atlas_B_G_LT_01_scout_F,1}
                    };
                };
                class 4thPlatoon: 3rdPlatoon
                {
                    id = 4;
                };
            };
        };
        /* CSAT 7th Mechanized Regiment */
        class 7thMechanized
        {
            id = 7;
            text = "%1 %2 %3";
            textShort = "%1 %3";
            type = MechanizedInfantry;
            insignia = "\A3_Atlas\Missions_F_Atlas\Data\ORBAT\CSAT_BearRegiment_CA.paa";
            side = East;
            size = Regiment;
            commander = "Kamienski";
            commanderRank = Colonel;
            description = "The 7th Mechanized Infantry Regiment, nicknamed Bear Regiment, is a mainly mechanized force, using a mix of old Russian equipment and new CSAT arms deliveries.";
            class 7thFirstBn
            {
                id = 1;
                idType = 0;
                type = "Infantry";
                side = "East";
                size = "Battalion";
                commander = "Adamovič";
                commanderRank = "Major";
                text = "1st Infantry Battalion";
                textShort = "%1 %3";
                
                class FirstBnHQ
                {
                    id = 1;
                    idType = 0;
                    type = "HQ";
                    side = "East";
                    size = "Company";
                    commander = "Adamovič";
                    commanderRank = "Major";
                    text = "%2 %3";
                    textShort = "%2";
                };
                class FirstBnCompany1
                {
                    id = 1;
                    idType = 0;
                    type = "Infantry";
                    side = "East";
                    size = "Company";
                    commander = "RussianMen";
                    commanderRank = "Captain";
                    text = "%1 %2 %3";
                    textShort = "%1 %3";
                    assets[] = {{O_W_APC_Wheeled_02_rcws_v2_ghex_f,16}};
                };
                class FirstBnCompany2
                {
                    id = 2;
                    idType = 0;
                    type = "Infantry";
                    side = "East";
                    size = "Company";
                    commander = "RussianMen";
                    commanderRank = "Captain";
                    text = "%1 %2 %3";
                    textShort = "%1 %3";
                    assets[] = {{O_W_APC_Wheeled_02_rcws_v2_ghex_f,16}};
                };
                class FirstBnCompany3
                {
                    id = 3;
                    idType = 0;
                    type = "Infantry";
                    side = "East";
                    size = "Company";
                    commander = "RussianMen";
                    commanderRank = "Captain";
                    text = "%1 %2 %3";
                    textShort = "%1 %3";
                    assets[] = {{O_W_APC_Wheeled_02_rcws_v2_ghex_f,16}};
                };
                class FirstBnCompany4
                {
                    id = 4;
                    idType = 0;
                    type = "MechanizedInfantry";
                    side = "East";
                    size = "Company";
                    commander = "RussianMen";
                    commanderRank = "Captain";
                    text = "%1 %2 %3";
                    textShort = "%1 %3";
                    assets[] = {{O_W_APC_Tracked_02_cannon_ghex_f,16}};
                };
            };

            class 7thSecondBn
            {
                id = 2;
                idType = 0;
                type = "MechanizedInfantry";
                side = "East";
                size = "Battalion";
                commander = "Sviontak";
                commanderRank = "Major";
                text = "2nd Mechanized Infantry Battalion";
                textShort = "%1 %3";
                
                class SecondBnHQ
                {
                    id = 1;
                    idType = 0;
                    type = "HQ";
                    side = "East";
                    size = "Company";
                    commander = "Sviontak";
                    commanderRank = "Major";
                    text = "%2 %3";
                    textShort = "%2";
                };
                class SecondBnCompany1
                {
                    id = 1;
                    idType = 0;
                    type = "Armored";
                    side = "East";
                    size = "Company";
                    commander = "RussianMen";
                    commanderRank = "Captain";
                    text = "%1 %2 %3";
                    textShort = "%1 %3";
                    assets[] = {{O_W_MBT_02_cannon_ghex_f,14}};
                };
                class SecondBnCompany2
                {
                    id = 2;
                    idType = 0;
                    type = "MechanizedInfantry";
                    side = "East";
                    size = "Company";
                    commander = "RussianMen";
                    commanderRank = "Captain";
                    text = "%1 %2 %3";
                    textShort = "%1 %3";
                    assets[] = {{O_W_APC_Tracked_02_cannon_ghex_f,16}};
                };
                class SecondBnCompany3
                {
                    id = 3;
                    idType = 0;
                    type = "MechanizedInfantry";
                    side = "East";
                    size = "Company";
                    commander = "RussianMen";
                    commanderRank = "Captain";
                    text = "%1 %2 %3";
                    textShort = "%1 %3";
                    assets[] = {{O_W_APC_Tracked_02_cannon_ghex_f,16}};
                };
                class SecondBnCompany4
                {
                    id = 4;
                    idType = 0;
                    type = "Infantry";
                    side = "East";
                    size = "Company";
                    commander = "RussianMen";
                    commanderRank = "Captain";
                    text = "%1 %2 %3";
                    textShort = "%1 %3";
                    assets[] = {{O_W_APC_Wheeled_02_rcws_v2_ghex_f,16}};
                };
            };

            class 7thThirdBn
            {
                id = 3;
                idType = 0;
                side = "East";
                size = "Battalion";
                type = "Armored";
                commander = "Rasolka";
                commanderRank = "Major";
                text = "3rd Armor Battalion";
                textShort = "%1 %3";
            };

            class 7thFourthBn
            {
                id = 4;
                idType = 0;
                side = "East";
                size = "Squadron";
                type = "Cavalry";
                commander = "Skaryna";
                commanderRank = "Major";
                text = "4th Reconnaisance Squadron";
                textShort = "%1 %3";
            };
            
            class 7thFifthBn
            {
                id = 5;
                idType = 0;
                side = "East";
                size = "Battalion";
                type = "Helicopter";
                commander = "Krupin";
                commanderRank = "Major";
                text = "5th Air Assault Battalion";
                textShort = "%1 %3";
                
                class FifthBnSquadron1
                {
                    id = 1;
                    idType = 0;
                    side = "East";
                    size = "Company";
                    type = "Helicopter";
                    commander = "RussianMen";
                    commanderRank = "Captain";
                    text = "%1 Air Assault %3";
                    textShort = "Air Assault";
                    assets[] = {{O_W_Heli_Attack_02_dynamicLoadout_f,9}};
                };
                class FifthBnSquadron2
                {
                    id = 2;
                    idType = 0;
                    side = "East";
                    size = "Company";
                    type = "Helicopter";
                    commander = "RussianMen";
                    commanderRank = "Captain";
                    text = "%1 Air Cavalry %3";
                    textShort = "Air Cavalry";
                    assets[] = {{O_W_Heli_Light_02_dynamicLoadout_f,9}};
                };
                class FifthBnSquadron3
                {
                    id = 3;
                    idType = 0;
                    side = "East";
                    size = "Company";
                    type = "Helicopter";
                    commander = "RussianMen";
                    commanderRank = "Captain";
                    text = "%1 Air Cavalry %3";
                    textShort = "Air Cavalry";
                    assets[] = {{O_W_Heli_Light_02_dynamicLoadout_f,9}};
                };
                class FifthBnSquadron4
                {
                    id = 4;
                    idType = 0;
                    side = "East";
                    size = "Company";
                    type = "Helicopter";
                    commander = "RussianMen";
                    commanderRank = "Captain";
                    text = "%1 Air Utility %3";
                    textShort = "Air Utility";
                    assets[] = {{O_T_Heli_Transport_04_f,9}};
                };
            };
            class 7thSupportBn
            {
                id = 6;
                idType = 0;
                side = "East";
                size = "Battalion";
                type = "Support";
                commander = "Petrenko";
                commanderRank = "Major";
                text = "6th Support Battalion";
                textShort = "%1 %3";
                class brsupport
                {
                    id = 7;
                    idType = 0;
                    side = "East";
                    size = "Company";
                    type = "Support";
                    commander = "RussianMen";
                    commanderRank = "Captain";
                    text = "%2 %3";
                    textShort = "%2";
                };
                class brmedical
                {
                    id = 7;
                    idType = 0;
                    side = "East";
                    size = "Company";
                    type = "Medical";
                    commander = "RussianMen";
                    commanderRank = "Captain";
                    text = "%2 %3";
                    textShort = "%2";
                };
                class brmaintenance
                {
                    id = 7;
                    idType = 0;
                    side = "East";
                    size = "Company";
                    type = "Maintenance";
                    commander = "RussianMen";
                    commanderRank = "Captain";
                    text = "%2 %3";
                    textShort = "%2";
                };
                class brservice
                {
                    id = 7;
                    idType = 0;
                    side = "East";
                    size = "Company";
                    type = "Service";
                    commander = "RussianMen";
                    commanderRank = "Captain";
                    text = "%2 %3";
                    textShort = "%2";
                };
            };
        };
    };
};