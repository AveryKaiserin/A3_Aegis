class O_A_Plane_Fighter_03_Cluster_F: O_Plane_Fighter_03_Cluster_F
{
	faction = OPF_A_F;
	crew = O_A_Fighter_Pilot_F;
	typicalCargo[] = {O_A_Fighter_Pilot_F};
	class EjectionSystem: EjectionSystem
	{
		EjectionSeatClass = O_Ejection_Seat_Plane_Fighter_03_F;
	};
};