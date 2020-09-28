// Aegis_BLU_B_F
class Aegis_B_B_Plane_Fighter_05_Cluster_F: Aegis_B_Plane_Fighter_05_Cluster_F
{
	scope = protected;
	scopeCurator = public;
    faction = Aegis_BLU_B_F;
    crew = Aegis_B_B_Fighter_Pilot_F;
    typicalCargo[] = {Aegis_B_B_Fighter_Pilot_F};
    class EjectionSystem: EjectionSystem
    {
        EjectionSeatClass = Aegis_B_B_Ejection_Seat_Plane_Fighter_05_F;
    };
};
// Aegis_BLU_B_tna_F
class Aegis_B_B_Plane_Fighter_05_Cluster_tna_F: Aegis_B_B_Plane_Fighter_05_Cluster_F
{
    faction = Aegis_BLU_B_tna_F;
    crew = Aegis_B_B_Fighter_Pilot_tna_F;
    typicalCargo[] = {Aegis_B_B_Fighter_Pilot_tna_F};
    class EjectionSystem: EjectionSystem
    {
        EjectionSeatClass = Aegis_B_B_Ejection_Seat_Plane_Fighter_05_tna_F;
    };
};
// Aegis_BLU_B_wdl_F
class Aegis_B_B_Plane_Fighter_05_Cluster_wdl_F: Aegis_B_B_Plane_Fighter_05_Cluster_F
{
    faction = Aegis_BLU_B_wdl_F;
    crew = Aegis_B_B_Fighter_Pilot_wdl_F;
    typicalCargo[] = {Aegis_B_B_Fighter_Pilot_wdl_F};
    class EjectionSystem: EjectionSystem
    {
        EjectionSeatClass = Aegis_B_B_Ejection_Seat_Plane_Fighter_05_wdl_F;
    };
};