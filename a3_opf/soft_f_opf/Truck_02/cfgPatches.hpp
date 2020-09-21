class CfgPatches
{
	class A3_Opf_Soft_F_Opf_Truck_02
	{
		addonRootClass = A3_Opf_Soft_F_Opf;
		requiredAddons[] = {A3_Opf_Soft_F_Opf};
		requiredVersion = 0.1;
		units[] =
        {
            // Paramilitary
            O_P_Truck_02_cargo_F,
            O_P_Truck_02_F,
            O_P_Truck_02_transport_F,

            // Separatists
            O_E_Truck_02_cargo_F,
            O_E_Truck_02_F,
            O_E_Truck_02_transport_F
        };
		weapons[] = {/* Auto-compiled by pboProject */};
	};
};