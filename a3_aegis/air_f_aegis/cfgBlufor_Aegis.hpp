// BLU_A_F
class B_A_Plane_Fighter_05_Cluster_F: B_Plane_Fighter_05_Cluster_F
{
	scope = protected;
	scopeCurator = public;
    faction = BLU_A_F;
    crew = B_A_Fighter_Pilot_F;
    typicalCargo[] = {B_A_Fighter_Pilot_F};
    class EjectionSystem: EjectionSystem
    {
        EjectionSeatClass = B_A_Ejection_Seat_Plane_Fighter_05_F;
    };
};
// BLU_A_tna_F
class B_A_Plane_Fighter_05_Cluster_tna_F: B_A_Plane_Fighter_05_Cluster_F
{
    faction = BLU_A_tna_F;
    crew = B_A_Fighter_Pilot_tna_F;
    typicalCargo[] = {B_A_Fighter_Pilot_tna_F};
    class EjectionSystem: EjectionSystem
    {
        EjectionSeatClass = B_A_Ejection_Seat_Plane_Fighter_05_tna_F;
    };
};
// BLU_A_wdl_F
class B_A_Plane_Fighter_05_Cluster_wdl_F: B_A_Plane_Fighter_05_Cluster_F
{
    faction = BLU_A_wdl_F;
    crew = B_A_Fighter_Pilot_wdl_F;
    typicalCargo[] = {B_A_Fighter_Pilot_wdl_F};
    class EjectionSystem: EjectionSystem
    {
        EjectionSeatClass = B_A_Ejection_Seat_Plane_Fighter_05_wdl_F;
    };
};