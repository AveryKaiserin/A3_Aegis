class CfgPatches
{
	class A3_Theseus_Air_F_Theseus_Heli_Light_03
	{
		addonRootClass = A3_Theseus_Air_F_Theseus;
		requiredAddons[] = {A3_Theseus_Air_F_Theseus};
		requiredVersion = 0.1;
		units[] =
        {
            /* From "cfgNAAF.hpp" */
            Theseus_B_Heli_light_03_dynamicLoadout_F
        };
		weapons[] = {/* Automated */};
	};
};