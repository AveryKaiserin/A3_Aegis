class CfgPatches
{
	class A3_Opf_Soft_F_Opf_Offroad_01
	{
		addonRootClass = A3_Opf_Soft_F_Opf;
		requiredAddons[] = {A3_Opf_Soft_F_Opf};
		requiredVersion = 0.1;
		units[] =
        {
            // Paramilitary
            O_P_Offroad_01_armed_F,
            O_P_Offroad_01_AT_F,
            O_P_Offroad_01_comms_F,
            O_P_Offroad_01_covered_F,
            O_P_Offroad_01_F,

            // Separatists
            O_E_Offroad_01_armed_F,
            O_E_Offroad_01_AT_F,
            O_E_Offroad_01_F,

            // Insurgents
            I_T_Offroad_01_armed_F,
            I_T_Offroad_01_AT_F,
            I_T_Offroad_01_F,

            // Patriots
            I_M_Offroad_01_armed_F,
            I_M_Offroad_01_covered_F,
            I_M_Offroad_01_F
        };
		weapons[] = {/* Auto-compiled by pboProject */};
	};
};