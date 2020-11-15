class CfgPatches
{
	class A3_Theseus_Air_F_Theseus_Heli_Attack_03
	{
		addonRootClass = A3_Theseus_Air_F_Theseus;
		requiredAddons[] = {A3_Theseus_Air_F_Theseus};
		requiredVersion = 0.1;
		units[] =
        {
            /* From "cfgNAAF.hpp" */
            Theseus_B_Heli_Attack_03_F
        };
		weapons[] = {/* Automated */};
	};
};