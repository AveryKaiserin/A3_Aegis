class Aegis_B_W_Plane_CAS_01_Cluster_F: B_Plane_CAS_01_Cluster_F
{
	scope = protected;
	scopeCurator = public;
    faction = BLU_W_F;
    crew = Aegis_B_W_Fighter_Pilot_F;
    typicalCargo[] = {Aegis_B_W_Fighter_Pilot_F};
    class EjectionSystem: EjectionSystem
    {
        EjectionSeatClass = Aegis_B_W_Ejection_Seat_Plane_CAS_01_F;
    };
};
class Aegis_B_W_Plane_Fighter_01_Cluster_F: B_Plane_Fighter_01_Cluster_F
{
	scope = protected;
	scopeCurator = public;
    faction = BLU_W_F;
    crew = Aegis_B_W_Fighter_Pilot_F;
    typicalCargo[] = {Aegis_B_W_Fighter_Pilot_F};
    class EjectionSystem: EjectionSystem
    {
        EjectionSeatClass = Aegis_B_W_Ejection_Seat_Plane_Fighter_01_F;
    };
};
class Aegis_B_W_Plane_Fighter_05_Cluster_F: Aegis_B_Plane_Fighter_05_Cluster_F
{
	scope = protected;
	scopeCurator = public;
    faction = BLU_W_F;
    crew = Aegis_B_W_Fighter_Pilot_F;
    typicalCargo[] = {Aegis_B_W_Fighter_Pilot_F};
    class EjectionSystem: EjectionSystem
    {
        EjectionSeatClass = Aegis_B_W_Ejection_Seat_Plane_Fighter_05_F;
    };
};