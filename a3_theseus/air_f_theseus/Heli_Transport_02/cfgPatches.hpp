class CfgPatches
{
	class A3_Theseus_Air_F_Theseus_Heli_Transport_02
	{
		addonRootClass = A3_Theseus_Air_F_Theseus;
		requiredAddons[] = {A3_Theseus_Air_F_Theseus};
		requiredVersion = 0.1;
		units[] =
        {
            /* From "cfgNAAF.hpp" */
            Theseus_B_Heli_Transport_02_F
        };
		weapons[] = {/* Automated */};
	};
};