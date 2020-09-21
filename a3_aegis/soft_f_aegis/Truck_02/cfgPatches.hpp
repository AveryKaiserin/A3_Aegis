class CfgPatches
{
	class A3_Aegis_Soft_F_Aegis_Truck_02
	{
		addonRootClass = A3_Aegis_Soft_F_Aegis;
		requiredAddons[] =
		{
			A3_Aegis_Soft_F_Aegis,
			A3_Soft_F_Beta_Truck_02,
			A3_Soft_F_Gamma_Truck_02,
			A3_Soft_F_Orange_Truck_02
		};
		requiredVersion = 0.1;
		units[] =
        {
            // Civilians
            C_Truck_02_cargo_F,

            // AAF
            I_Truck_02_cargo_F,

            // CSAT
            O_Truck_02_cargo_F,
            O_Truck_02_MRL_F,

            // CSAT (Pacific)
            O_T_Truck_02_cargo_F,
            O_T_Truck_02_MRL_F,

            // IDAP
            C_IDAP_Truck_02_cargo_F,

            // CSAT (African)
            O_A_Truck_02_cargo_F,
            O_A_Truck_02_F,
            O_A_Truck_02_transport_F,

            // LDF
            I_E_Truck_02_cargo_F,

            // Russia
            O_R_Truck_02_Ammo_ard_F,
            O_R_Truck_02_Ammo_F,
            O_R_Truck_02_ard_F,
            O_R_Truck_02_box_ard_F,
            O_R_Truck_02_box_F,
            O_R_Truck_02_cargo_ard_F,
            O_R_Truck_02_cargo_F,
            O_R_Truck_02_F,
            O_R_Truck_02_fuel_ard_F,
            O_R_Truck_02_fuel_F,
            O_R_Truck_02_medical_ard_F,
            O_R_Truck_02_medical_F,
            O_R_Truck_02_MRL_ard_F,
            O_R_Truck_02_MRL_F,
            O_R_Truck_02_transport_ard_F,
            O_R_Truck_02_transport_F

        };
		weapons[] = {/* Auto-compiled by pboProject */};
	};
};