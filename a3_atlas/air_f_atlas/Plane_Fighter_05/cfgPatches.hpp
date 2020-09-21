class CfgPatches
{
	class A3_Atlas_Air_F_Atlas_Plane_Fighter_05
	{
		addonRootClass = A3_Atlas_Air_F_Atlas;
		requiredAddons[] =
		{
			A3_Aegis_Air_F_Aegis_Plane_Fighter_05,
			A3_Atlas_Air_F_Atlas
		};
		requiredVersion = 0.1;
		units[] =
        {
            // ADF
            B_O_Ejection_Seat_Plane_Fighter_05_F,
            B_O_Plane_Fighter_05_F,
            B_O_Plane_Fighter_05_Stealth_F,

            // IDF
            I_I_Ejection_Seat_Plane_Fighter_05_F,
            I_I_Plane_Fighter_05_F,
            I_I_Plane_Fighter_05_Stealth_F
        };
		weapons[] = {/* Auto-compiled by pboProject */};
	};
};