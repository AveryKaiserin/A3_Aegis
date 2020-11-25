class CfgPatches
{
	class A3_Theseus_Soft_F_Theseus_Offroad_01
	{
		addonRootClass = A3_Theseus_Soft_F_Theseus;
		requiredAddons[] = {A3_Theseus_Soft_F_Theseus};
		requiredVersion = 0.1;
		units[] =
        {
            /* From "cfgRemnants.hpp" */
            Theseus_O_R_Offroad_01_F,
            Theseus_O_R_Offroad_01_AT_F,
            Theseus_O_R_Offroad_01_armed_F,
            Theseus_O_R_Offroad_01_repair_F
        };
		weapons[] = {/* Automated */};
	};
};