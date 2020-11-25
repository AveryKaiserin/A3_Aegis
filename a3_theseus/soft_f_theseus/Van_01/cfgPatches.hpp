class CfgPatches
{
	class A3_Theseus_Soft_F_Theseus_Van_01
	{
		addonRootClass = A3_Theseus_Soft_F_Theseus;
		requiredAddons[] = {A3_Theseus_Soft_F_Theseus};
		requiredVersion = 0.1;
		units[] =
        {
            /* From "cfgRemnants.hpp" */
            Theseus_O_R_Van_01_fuel_F,
            Theseus_O_R_Van_01_transport_F
        };
		weapons[] = {/* Automated */};
	};
};