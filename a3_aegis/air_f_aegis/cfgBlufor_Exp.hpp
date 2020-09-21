class B_T_Plane_CAS_01_Cluster_F: B_Plane_CAS_01_Cluster_F
{
	scope = protected;
	scopeCurator = public;
    faction = BLU_T_F;
    crew = B_T_Fighter_Pilot_F;
    typicalCargo[] = {B_T_Fighter_Pilot_F};
    class EjectionSystem: EjectionSystem
    {
        EjectionSeatClass = B_T_Ejection_Seat_Plane_CAS_01_F;
    };
};
class B_T_Plane_Fighter_01_Cluster_F: B_Plane_Fighter_01_Cluster_F
{
	scope = protected;
	scopeCurator = public;
    faction = BLU_T_F;
    crew = B_T_Fighter_Pilot_F;
    typicalCargo[] = {B_T_Fighter_Pilot_F};
    class EjectionSystem: EjectionSystem
    {
        EjectionSeatClass = B_T_Ejection_Seat_Plane_Fighter_01_F;
    };
};
class B_T_Plane_Fighter_05_Cluster_F: B_Plane_Fighter_05_Cluster_F
{
	scope = protected;
	scopeCurator = public;
    faction = BLU_T_F;
    crew = B_T_Fighter_Pilot_F;
    typicalCargo[] = {B_T_Fighter_Pilot_F};
    class EjectionSystem: EjectionSystem
    {
        EjectionSeatClass = B_T_Ejection_Seat_Plane_Fighter_05_F;
    };
};