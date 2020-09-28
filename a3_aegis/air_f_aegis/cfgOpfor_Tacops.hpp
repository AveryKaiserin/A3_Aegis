class Aegis_O_A_Plane_Fighter_03_Cluster_F: Aegis_O_Plane_Fighter_03_Cluster_F
{
	faction = Aegis_OPF_A_F;
	crew = Aegis_O_A_Fighter_Pilot_F;
	typicalCargo[] = {Aegis_O_A_Fighter_Pilot_F};
	class EjectionSystem: EjectionSystem
	{
		EjectionSeatClass = Aegis_O_Ejection_Seat_Plane_Fighter_03_F;
	};
};