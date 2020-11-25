class CfgPatches
{
	class A3_Theseus_Soft_F_Theseus_Truck_02
	{
		addonRootClass = A3_Theseus_Soft_F_Theseus;
		requiredAddons[] = {A3_Theseus_Soft_F_Theseus};
		requiredVersion = 0.1;
		units[] =
        {
            /* From "cfgNAAF.hpp" */
            Theseus_B_N_Truck_02_Ammo_F,
            Theseus_B_N_Truck_02_box_F,
            Theseus_B_N_Truck_02_cargo_F,
            Theseus_B_N_Truck_02_F,
            Theseus_B_N_Truck_02_flatbed_F,
            Theseus_B_N_Truck_02_fuel_F,
            Theseus_B_N_Truck_02_medical_F,
            Theseus_B_N_Truck_02_MRL_F,
            Theseus_B_N_Truck_02_transport_F
        };
		weapons[] = {/* Automated */};
	};
};