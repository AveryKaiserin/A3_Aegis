class CfgORBAT
{
        /* New Altian Armed Forces */
        class NAAF
        {
            id = 1;
            text = "New Altian Armed Forces";
            textShort = "NAAF";
            type = Infantry;
            texture = "flag_FIA";
            insignia = "\a3\missions_f_epa\data\img\orbat\I_AAF_ca.paa";
            side = West;
            commander = "Kostas";
            commanderRank = Major;
            description = "Formed in the aftermath of the Altis Incident, the reformed Altian Armed Forces are comprised of former guerillas, freedom fighters, and believers in the civilian government. Consisting of a battalion sized unit of infantry, a small air wing, and a coast guard, the NAAF uses a mix of old guerilla equipment and repurposed gear from the previous regime, and is supported by Isreali advisors.";

            class 2ndRegiment
            {
                id = 2;
                text = "%1 %3";
                textShort = "%1 %3";
                type = Infantry;
                side = West;
                size = Regiment;
                commander = "Kostas";
                commanderRank = Major;
                description = "The 2nd Regiment is named after the unit of the Altian military that defected to the loyalists in the 2020's, honoring the heritage of fighting for freedom and a fair rule of law. It is mostly comprised of light infantry with small amounts of supporting IFV's and light tanks.";

                class alphacompany
                {
                    id = 1;
                    idType = 2;
                    text = "%1 %3";
                    textShort = "%1 %3";
                    type = Infantry;
                    side = West;
                    size = Company;
                    commander = "GreekMen";
                    commanderRank = Captain;
                }

                class bravocompany: alphacompany
                {
                    id = 2;
                }

                class charliecompany: bravocompany
                {
                    id = 3;
                    type = MechanizedInfantry;

                    class alpha1stplatoon
                    {
                        id = 1;
                        text = "%1 %3";
                        textShort = "%1 %3";
                        type = MechanizedInfantry;
                        side = West;
                        size = Platoon;
                        commander = "GreekMen";
                        commanderRank = Lieutenant;
                    }
                    class alpha2ndplatoon: alpha1stplatoon
                    {
                        id = 2;
                    }
                    class alpha3rdplatoon: alpha2ndplatoon
                    {
                        id = 3;
                        type = Armored;
                    }
                    class alpha4thplatoon: alpha3rdplatoon
                    {
                        id = 4;
                    }
                }
            }
        }
};