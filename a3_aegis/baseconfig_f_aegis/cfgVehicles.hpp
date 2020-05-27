#define COMPATIBILITYCLASS(a,b) \
	class ##a##: ##b## \
	{ \
		scope = protected; \
        scopeCurator = private; \
        deprecated = true; \
	};

class CfgVehicles
{
    class B_GEN_Soldier_F;
    COMPATIBILITYCLASS(B_GEN_Soldier_tac_F,B_GEN_Soldier_F)
    class O_A_Truck_02_F;
    COMPATIBILITYCLASS(O_A_Truck_02_covered_F,O_A_Truck_02_F)
    class O_R_Truck_02_F;
    COMPATIBILITYCLASS(O_R_Truck_02_covered_F,O_R_Truck_02_F)
    class B_CTRG_Soldier_F;
    COMPATIBILITYCLASS(B_CTRG_Sharpshooter_F,B_CTRG_Soldier_F)
    COMPATIBILITYCLASS(B_CTRG_Sharpshooter_tna_F,B_CTRG_Soldier_F)
    COMPATIBILITYCLASS(B_CTRG_Sharpshooter_urb_F,B_CTRG_Soldier_F)
    class B_ION_Engineer_F;
    COMPATIBILITYCLASS(B_ION_Soldier_Exp_F,B_ION_Engineer_F)
    class B_ION_Offroad_01_F;
    COMPATIBILITYCLASS(B_ION_Offroad_02_unarmed_F,B_ION_Offroad_01_F)
    COMPATIBILITYCLASS(B_ION_Offroad_02_LMG_F,B_ION_Offroad_01_F)
    class C_man_1;
    COMPATIBILITYCLASS(C_man_2_1_F,C_man_1)
    COMPATIBILITYCLASS(C_man_2_2_F,C_man_1)
    COMPATIBILITYCLASS(C_man_2_3_F,C_man_1)
    COMPATIBILITYCLASS(C_man_2_4_F,C_man_1)
    COMPATIBILITYCLASS(C_man_2_5_F,C_man_1)
    COMPATIBILITYCLASS(C_man_1_4_F,C_man_1)
    COMPATIBILITYCLASS(C_man_1_5_F,C_man_1)
    COMPATIBILITYCLASS(C_man_1_6_F,C_man_1)
    COMPATIBILITYCLASS(C_man_1_7_F,C_man_1)
    COMPATIBILITYCLASS(C_man_4_1_F,C_man_1)
    COMPATIBILITYCLASS(C_man_4_2_F,C_man_1)
    COMPATIBILITYCLASS(C_man_4_3_F,C_man_1)
    COMPATIBILITYCLASS(C_man_3_1_F,C_man_1)
    COMPATIBILITYCLASS(C_man_3_2_F,C_man_1)
    COMPATIBILITYCLASS(C_man_3_3_F,C_man_1)
    COMPATIBILITYCLASS(C_man_3_4_F,C_man_1)
    COMPATIBILITYCLASS(C_man_3_5_F,C_man_1)
    COMPATIBILITYCLASS(C_man_w_farmer_1_F,C_man_1)
    COMPATIBILITYCLASS(C_man_w_farmer_2_F,C_man_1)
    COMPATIBILITYCLASS(C_man_w_fisherman_2_F,C_man_1)
    COMPATIBILITYCLASS(C_man_hunter_2_F,C_man_1)
    COMPATIBILITYCLASS(C_man_police_F,C_man_1)
    COMPATIBILITYCLASS(C_man_p_scavenger_1_F,C_man_1)
    COMPATIBILITYCLASS(C_man_p_scavenger_3_F,C_man_1)
    COMPATIBILITYCLASS(C_man_p_scavenger_2_F,C_man_1)
    COMPATIBILITYCLASS(C_man_w_coveralls_1_F,C_man_1)
    COMPATIBILITYCLASS(C_man_w_coveralls_2_F,C_man_1)
    COMPATIBILITYCLASS(C_man_w_coveralls_3_F,C_man_1)
    COMPATIBILITYCLASS(C_man_w_coveralls_4_F,C_man_1)
    class C_Offroad_01_F;
    COMPATIBILITYCLASS(C_Offroad_01_police_F,C_Offroad_01_F)
    class B_W_Soldier_F;
    COMPATIBILITYCLASS(B_SoldierW_F,B_W_Soldier_F)
    COMPATIBILITYCLASS(B_soldierW_AR_F,B_W_Soldier_F)
    COMPATIBILITYCLASS(B_soldierW_AAR_F,B_W_Soldier_F)
    COMPATIBILITYCLASS(B_soldierW_LAT_F,B_W_Soldier_F)
    COMPATIBILITYCLASS(B_soldierW_AT_F,B_W_Soldier_F)
    COMPATIBILITYCLASS(B_soldierW_AAT_F,B_W_Soldier_F)
    COMPATIBILITYCLASS(B_soldierW_AA_F,B_W_Soldier_F)
    COMPATIBILITYCLASS(B_soldierW_AAA_F,B_W_Soldier_F)
    COMPATIBILITYCLASS(B_SoldierW_TL_F,B_W_Soldier_F)
    COMPATIBILITYCLASS(B_SoldierW_SL_F,B_W_Soldier_F)
    COMPATIBILITYCLASS(B_soldierW_medic_F,B_W_Soldier_F)
    COMPATIBILITYCLASS(B_soldierW_repair_F,B_W_Soldier_F)
    COMPATIBILITYCLASS(B_soldierW_exp_F,B_W_Soldier_F)
    COMPATIBILITYCLASS(B_engineer_W_F,B_W_Soldier_F)
    COMPATIBILITYCLASS(B_soldierW_M_F,B_W_Soldier_F)
    COMPATIBILITYCLASS(B_SoldierW_A_F,B_W_Soldier_F)
    COMPATIBILITYCLASS(B_SoldierW_GL_F,B_W_Soldier_F)
    COMPATIBILITYCLASS(B_SoldierW_unarmed_F,B_W_Soldier_F)
    COMPATIBILITYCLASS(B_Wood_HeavyGunner_F,B_W_Soldier_F)
    COMPATIBILITYCLASS(B_Wood_Sharpshooter_F,B_W_Soldier_F)
    COMPATIBILITYCLASS(B_SoldierW_CQ_F,B_W_Soldier_F)
    class I_Soldier_F;
    COMPATIBILITYCLASS(I_R_helipilot_F,I_Soldier_F)
    COMPATIBILITYCLASS(I_R_Soldier_AR_F,I_Soldier_F)
    COMPATIBILITYCLASS(I_R_Soldier_Exp_F,I_Soldier_F)
    class O_G_Soldier_F;
    COMPATIBILITYCLASS(O_P_engineer_F,O_G_Soldier_F)
    COMPATIBILITYCLASS(O_P_officer_F,O_G_Soldier_F)
    COMPATIBILITYCLASS(O_P_Soldier_A_F,O_G_Soldier_F)
    COMPATIBILITYCLASS(O_P_Soldier_F,O_G_Soldier_F)
    COMPATIBILITYCLASS(O_P_Soldier_lite_F,O_G_Soldier_F)
    COMPATIBILITYCLASS(O_P_Soldier_SL_F,O_G_Soldier_F)
    class O_T_Plane_Fighter_02_ghex_F;
    COMPATIBILITYCLASS(O_T_Plane_Fighter_02_F,O_T_Plane_Fighter_02_ghex_F)
    class O_T_Plane_Fighter_02_Stealth_ghex_F;
    COMPATIBILITYCLASS(O_T_Plane_Fighter_02_Stealth_F,O_T_Plane_Fighter_02_Stealth_ghex_F)
    class I_Plane_Fighter_04_F;
    COMPATIBILITYCLASS(B_A_Plane_Fighter_04_F,I_Plane_Fighter_04_F)
    class O_Plane_Transport_01_infantry_F;
    COMPATIBILITYCLASS(O_A_Plane_Transport_01_infantry_F,O_Plane_Transport_01_infantry_F)
    class O_Plane_Transport_01_vehicle_F;
    COMPATIBILITYCLASS(O_A_Plane_Transport_01_vehicle_F,O_Plane_Transport_01_vehicle_F)
    class B_UAV_03_dynamicLoadout_F;
    COMPATIBILITYCLASS(B_A_UAV_03_dynamicLoadout_F,B_UAV_03_dynamicLoadout_F)
    class O_T_Heli_Attack_02_dynamicLoadout_F;
    COMPATIBILITYCLASS(O_T_Heli_Attack_02_dynamicLoadout_ghex_F,O_T_Heli_Attack_02_dynamicLoadout_F)
    class O_T_Heli_Light_02_unarmed_F;
    COMPATIBILITYCLASS(O_T_Heli_Light_02_unarmed_ghex_F,O_T_Heli_Light_02_unarmed_F)
    class O_Heli_Light_02_dynamicLoadout_F;
    class O_Heli_Light_02_unarmed_F;
    class O_T_Heli_Transport_04_ammo_F;
    COMPATIBILITYCLASS(O_T_Heli_Transport_04_ammo_ghex_F,O_T_Heli_Transport_04_ammo_F)
    class O_T_Heli_Transport_04_bench_F;
    COMPATIBILITYCLASS(O_T_Heli_Transport_04_bench_ghex_F,O_T_Heli_Transport_04_bench_F)
    class O_T_Heli_Transport_04_F;
    COMPATIBILITYCLASS(O_T_Heli_Transport_04_ghex_F,O_T_Heli_Transport_04_F)
    class O_T_Heli_Transport_04_box_F;
    COMPATIBILITYCLASS(O_T_Heli_Transport_04_box_ghex_F,O_T_Heli_Transport_04_box_F)
    class O_T_Heli_Transport_04_covered_F;
    COMPATIBILITYCLASS(O_T_Heli_Transport_04_covered_ghex_F,O_T_Heli_Transport_04_covered_F)
    class O_T_Heli_Transport_04_fuel_F;
    COMPATIBILITYCLASS(O_T_Heli_Transport_04_fuel_ghex_F,O_T_Heli_Transport_04_fuel_F)
    class O_T_Heli_Transport_04_medevac_F;
    COMPATIBILITYCLASS(O_T_Heli_Transport_04_medevac_ghex_F,O_T_Heli_Transport_04_medevac_F)
    class O_T_Heli_Transport_04_repair_F;
    COMPATIBILITYCLASS(O_T_Heli_Transport_04_repair_ghex_F,O_T_Heli_Transport_04_repair_F)
    class O_T_Plane_CAS_02_dynamicLoadout_ghex_F;
    COMPATIBILITYCLASS(O_T_Plane_CAS_02_dynamicLoadout_F,O_T_Plane_CAS_02_dynamicLoadout_ghex_F)
    class Ejection_Seat_Plane_CAS_02_base_F;
    COMPATIBILITYCLASS(O_T_Ejection_Seat_Plane_CAS_02_F,Ejection_Seat_Plane_CAS_02_base_F)
    class O_R_Heli_Attack_02_dynamicLoadout_F;
    COMPATIBILITYCLASS(I_RU_Heli_Attack_02_dynamicLoadout_F,O_R_Heli_Attack_02_dynamicLoadout_F)
    COMPATIBILITYCLASS(O_RU_Heli_Attack_02_dynamicLoadout_F,O_R_Heli_Attack_02_dynamicLoadout_F)
    class O_R_Heli_Light_02_dynamicLoadout_F;
    COMPATIBILITYCLASS(I_RU_Heli_Light_02_dynamicLoadout_F,O_R_Heli_Light_02_dynamicLoadout_F)
    COMPATIBILITYCLASS(O_RU_Heli_Light_02_dynamicLoadout_F,O_R_Heli_Light_02_dynamicLoadout_F)
    class Box_O_R_UAV_06_F;
    COMPATIBILITYCLASS(Box_I_RU_UAV_06_F,Box_O_R_UAV_06_F)
    class Box_O_R_UAV_06_medical_F;
    COMPATIBILITYCLASS(Box_I_RU_UAV_06_medical_F,Box_O_R_UAV_06_medical_F)
    class O_R_UAV_06_F;
    COMPATIBILITYCLASS(I_RU_UAV_06_F,O_R_UAV_06_F)
    COMPATIBILITYCLASS(O_RU_UAV_06_F,O_R_UAV_06_F)
    class O_R_UAV_06_medical_F;
    COMPATIBILITYCLASS(I_RU_UAV_06_medical_F,O_R_UAV_06_medical_F)
    COMPATIBILITYCLASS(O_RU_UAV_06_medical_F,O_R_UAV_06_medical_F)
    class O_R_UAV_02_dynamicLoadout_F;
    COMPATIBILITYCLASS(I_RU_UAV_02_dynamicLoadout_F,O_R_UAV_02_dynamicLoadout_F)
    COMPATIBILITYCLASS(O_RU_UAV_02_dynamicLoadout_F,O_R_UAV_02_dynamicLoadout_F)
    class O_R_UAV_01_F;
    COMPATIBILITYCLASS(I_RU_UAV_01_F,O_R_UAV_01_F)
    COMPATIBILITYCLASS(O_RU_UAV_01_F,O_R_UAV_01_F)
    COMPATIBILITYCLASS(I_RU_Plane_Transport_01_infantry_F,O_Plane_Transport_01_infantry_F)
    COMPATIBILITYCLASS(O_RU_Plane_Transport_01_infantry_F,O_Plane_Transport_01_infantry_F)
    COMPATIBILITYCLASS(I_RU_Plane_Transport_01_vehicle_F,O_Plane_Transport_01_vehicle_F)
    COMPATIBILITYCLASS(O_RU_Plane_Transport_01_vehicle_F,O_Plane_Transport_01_vehicle_F)
    class O_R_Plane_Fighter_02_F;
    COMPATIBILITYCLASS(I_RU_Plane_Fighter_02_F,O_R_Plane_Fighter_02_F)
    COMPATIBILITYCLASS(O_RU_Plane_Fighter_02_F,O_R_Plane_Fighter_02_F)
    class O_R_Plane_Fighter_02_Stealth_F;
    COMPATIBILITYCLASS(I_RU_Plane_Fighter_02_Stealth_F,O_R_Plane_Fighter_02_Stealth_F)
    COMPATIBILITYCLASS(O_RU_Plane_Fighter_02_Stealth_F,O_R_Plane_Fighter_02_Stealth_F)
    class Ejection_Seat_Plane_Fighter_03_base_F;
    COMPATIBILITYCLASS(I_RU_Ejection_Seat_Plane_Fighter_03_F,Ejection_Seat_Plane_Fighter_03_base_F)
    class Plane_Fighter_03_dynamicLoadout_base_F;
    COMPATIBILITYCLASS(I_RU_Plane_Fighter_03_dynamicLoadout_F,Plane_Fighter_03_dynamicLoadout_base_F)
    class O_R_Plane_CAS_02_dynamicLoadout_F;
    COMPATIBILITYCLASS(I_RU_Plane_CAS_02_dynamicLoadout_F,O_R_Plane_CAS_02_dynamicLoadout_F)
    COMPATIBILITYCLASS(O_RU_Plane_CAS_02_dynamicLoadout_F,O_R_Plane_CAS_02_dynamicLoadout_F)
    class O_R_Heli_Transport_04_ammo_F;
    COMPATIBILITYCLASS(I_RU_Heli_Transport_04_ammo_F,O_R_Heli_Transport_04_ammo_F)
    COMPATIBILITYCLASS(O_RU_Heli_Transport_04_ammo_F,O_R_Heli_Transport_04_ammo_F)
    class O_R_Heli_Transport_04_bench_F;
    COMPATIBILITYCLASS(I_RU_Heli_Transport_04_bench_F,O_R_Heli_Transport_04_bench_F)
    COMPATIBILITYCLASS(O_RU_Heli_Transport_04_bench_F,O_R_Heli_Transport_04_bench_F)
    class O_R_Heli_Transport_04_F;
    COMPATIBILITYCLASS(I_RU_Heli_Transport_04_F,O_R_Heli_Transport_04_F)
    COMPATIBILITYCLASS(O_RU_Heli_Transport_04_F,O_R_Heli_Transport_04_F)
    class O_R_Heli_Transport_04_box_F;
    COMPATIBILITYCLASS(I_RU_Heli_Transport_04_box_F,O_R_Heli_Transport_04_box_F)
    COMPATIBILITYCLASS(O_RU_Heli_Transport_04_box_F,O_R_Heli_Transport_04_box_F)
    class O_R_Heli_Transport_04_covered_F;
    COMPATIBILITYCLASS(I_RU_Heli_Transport_04_covered_F,O_R_Heli_Transport_04_covered_F)
    COMPATIBILITYCLASS(O_RU_Heli_Transport_04_covered_F,O_R_Heli_Transport_04_covered_F)
    class O_R_Heli_Transport_04_fuel_F;
    COMPATIBILITYCLASS(I_RU_Heli_Transport_04_fuel_F,O_R_Heli_Transport_04_fuel_F)
    COMPATIBILITYCLASS(O_RU_Heli_Transport_04_fuel_F,O_R_Heli_Transport_04_fuel_F)
    class O_R_Heli_Transport_04_medevac_F;
    COMPATIBILITYCLASS(I_RU_Heli_Transport_04_medevac_F,O_R_Heli_Transport_04_medevac_F)
    COMPATIBILITYCLASS(O_RU_Heli_Transport_04_medevac_F,O_R_Heli_Transport_04_medevac_F)
    class O_R_Heli_Transport_04_repair_F;
    COMPATIBILITYCLASS(I_RU_Heli_Transport_04_repair_F,O_R_Heli_Transport_04_repair_F)
    COMPATIBILITYCLASS(O_RU_Heli_Transport_04_repair_F,O_R_Heli_Transport_04_repair_F)
    class B_Boat_Transport_02_F;
    COMPATIBILITYCLASS(B_A_Boat_Transport_02_F,B_Boat_Transport_02_F)
    class O_MBT_02_arty_F;
    COMPATIBILITYCLASS(O_A_MBT_02_arty_F,O_MBT_02_arty_F)
    class I_MBT_03_cannon_F;
    COMPATIBILITYCLASS(B_A_MBT_03_cannon_F,I_MBT_03_cannon_F)
    class I_APC_Wheeled_03_cannon_F;
    COMPATIBILITYCLASS(B_A_APC_Wheeled_03_cannon_F,I_APC_Wheeled_03_cannon_F)
    COMPATIBILITYCLASS(B_A_APC_Wheeled_03_medical_F,I_APC_Wheeled_03_cannon_F)
    COMPATIBILITYCLASS(B_A_APC_Wheeled_03_unarmed_F,I_APC_Wheeled_03_cannon_F)
    COMPATIBILITYCLASS(I_APC_Wheeled_03_medical_F,I_APC_Wheeled_03_cannon_F)
    COMPATIBILITYCLASS(I_APC_Wheeled_03_unarmed_F,I_APC_Wheeled_03_cannon_F)
    class B_APC_Wheeled_01_cannon_F;
    COMPATIBILITYCLASS(B_APC_Wheeled_01_unarmed_F,B_APC_Wheeled_01_cannon_F)
    COMPATIBILITYCLASS(B_APC_Wheeled_01_up_cannon_F,B_APC_Wheeled_01_cannon_F)
    class B_T_APC_Wheeled_01_cannon_F;
    COMPATIBILITYCLASS(B_T_APC_Wheeled_01_medical_F,B_T_APC_Wheeled_01_cannon_F)
    COMPATIBILITYCLASS(B_T_APC_Wheeled_01_unarmed_F,B_T_APC_Wheeled_01_cannon_F)
    COMPATIBILITYCLASS(B_T_APC_Wheeled_01_up_cannon_F,B_T_APC_Wheeled_01_cannon_F)
    class O_A_APC_Wheeled_02_rcws_v2_F;
    COMPATIBILITYCLASS(O_A_APC_Wheeled_02_medical_F,O_A_APC_Wheeled_02_rcws_v2_F)
    COMPATIBILITYCLASS(O_A_APC_Wheeled_02_unarmed_F,O_A_APC_Wheeled_02_rcws_v2_F)
    class O_APC_Wheeled_02_rcws_v2_F;
    COMPATIBILITYCLASS(O_APC_Wheeled_02_medical_F,O_APC_Wheeled_02_rcws_v2_F)
    COMPATIBILITYCLASS(O_APC_Wheeled_02_unarmed_F,O_APC_Wheeled_02_rcws_v2_F)
    class O_T_APC_Wheeled_02_rcws_v2_ghex_F;
    COMPATIBILITYCLASS(O_T_APC_Wheeled_02_medical_ghex_F,O_T_APC_Wheeled_02_rcws_v2_ghex_F)
    COMPATIBILITYCLASS(O_T_APC_Wheeled_02_unarmed_ghex_F,O_T_APC_Wheeled_02_rcws_v2_ghex_F)
    class O_A_APC_Tracked_02_cannon_F;
    COMPATIBILITYCLASS(O_A_APC_Tracked_02_AA_F,O_A_APC_Tracked_02_cannon_F)
    class O_R_MBT_04_cannon_F;
    COMPATIBILITYCLASS(I_RU_MBT_04_cannon_F,O_R_MBT_04_cannon_F)
    COMPATIBILITYCLASS(O_RU_MBT_04_cannon_F,O_R_MBT_04_cannon_F)
    class O_R_MBT_04_command_F;
    COMPATIBILITYCLASS(I_RU_MBT_04_command_F,O_R_MBT_04_command_F)
    COMPATIBILITYCLASS(O_RU_MBT_04_command_F,O_R_MBT_04_command_F)
    class O_R_MBT_02_arty_F;
    COMPATIBILITYCLASS(I_RU_MBT_02_arty_F,O_R_MBT_02_arty_F)
    COMPATIBILITYCLASS(O_RU_MBT_02_arty_F,O_R_MBT_02_arty_F)
    class O_R_MBT_02_cannon_F;
    COMPATIBILITYCLASS(I_RU_MBT_02_cannon_F,O_R_MBT_02_cannon_F)
    COMPATIBILITYCLASS(O_RU_MBT_02_cannon_F,O_R_MBT_02_cannon_F)
    class O_R_APC_Tracked_02_AA_F;
    COMPATIBILITYCLASS(I_RU_APC_Tracked_02_AA_F,O_R_APC_Tracked_02_AA_F)
    COMPATIBILITYCLASS(O_RU_APC_Tracked_02_AA_F,O_R_APC_Tracked_02_AA_F)
    class O_R_APC_Tracked_02_cannon_F;
    COMPATIBILITYCLASS(I_RU_APC_Tracked_02_cannon_F,O_R_APC_Tracked_02_cannon_F)
    COMPATIBILITYCLASS(O_RU_APC_Tracked_02_cannon_F,O_R_APC_Tracked_02_cannon_F)
    class O_R_APC_Wheeled_02_rcws_v2_F;
    COMPATIBILITYCLASS(I_RU_APC_Wheeled_02_rcws_F,O_R_MBT_02_cannon_F)
    COMPATIBILITYCLASS(O_RU_APC_Wheeled_02_rcws_F,O_R_MBT_02_cannon_F)
    COMPATIBILITYCLASS(I_RU_APC_Wheeled_02_medical_F,O_R_MBT_02_cannon_F)
    COMPATIBILITYCLASS(O_RU_APC_Wheeled_02_medical_F,O_R_MBT_02_cannon_F)
    COMPATIBILITYCLASS(I_RU_APC_Wheeled_02_unarmed_F,O_R_MBT_02_cannon_F)
    COMPATIBILITYCLASS(O_RU_APC_Wheeled_02_unarmed_F,O_R_MBT_02_cannon_F)
    class B_A_Boat_Armed_01_hmg_F;
    COMPATIBILITYCLASS(B_A_Boat_Armed_01_minigun_F,B_A_Boat_Armed_01_hmg_F)
    COMPATIBILITYCLASS(B_Boat_Armed_01_hmg_F,B_A_Boat_Armed_01_hmg_F)
    COMPATIBILITYCLASS(B_T_Boat_Armed_01_hmg_F,B_A_Boat_Armed_01_hmg_F)
    class O_R_Boat_Armed_01_hmg_F;
    COMPATIBILITYCLASS(I_RU_Boat_Armed_01_hmg_F,O_R_Boat_Armed_01_hmg_F)
    COMPATIBILITYCLASS(O_RU_Boat_Armed_01_hmg_F,O_R_Boat_Armed_01_hmg_F)
    class O_R_SDV_01_F;
    COMPATIBILITYCLASS(I_RU_SDV_01_F,O_R_SDV_01_F)
    COMPATIBILITYCLASS(O_RU_SDV_01_F,O_R_SDV_01_F)
    class O_R_Boat_Transport_01_F;
    COMPATIBILITYCLASS(I_RU_Boat_Transport_01_F,O_R_Boat_Transport_01_F)
    COMPATIBILITYCLASS(O_RU_Boat_Transport_01_F,O_R_Boat_Transport_01_F)
    class O_R_Lifeboat;
    COMPATIBILITYCLASS(I_RU_Lifeboat,O_R_Lifeboat)
    COMPATIBILITYCLASS(O_RU_Lifeboat,O_R_Lifeboat)
    class O_R_Boat_Transport_02_F;
    COMPATIBILITYCLASS(I_RU_Boat_Transport_02_F,O_R_Boat_Transport_02_F)
    COMPATIBILITYCLASS(O_RU_Boat_Transport_02_F,O_R_Boat_Transport_02_F)
    class B_A_Engineer_F;
    COMPATIBILITYCLASS(B_A_Engineer_ddpm_F,B_A_Engineer_F)
    COMPATIBILITYCLASS(B_A_Engineer_dpm_F,B_A_Engineer_F)
    class B_A_ghillie_ard_F;
    COMPATIBILITYCLASS(B_A_ghillie_heavy_ard_F,B_A_ghillie_ard_F)
    class B_A_ghillie_sard_F;
    COMPATIBILITYCLASS(B_A_ghillie_heavy_sard_F,B_A_ghillie_sard_F)
    class B_A_ghillie_lsh_F;
    COMPATIBILITYCLASS(B_A_ghillie_heavy_lsh_F,B_A_ghillie_lsh_F)
    class B_HeavyGunner_F;
    COMPATIBILITYCLASS(B_A_HeavyGunner_ddpm_F,B_HeavyGunner_F)
    COMPATIBILITYCLASS(B_A_HeavyGunner_dpm_F,B_HeavyGunner_F)
    class B_A_Medic_F;
    COMPATIBILITYCLASS(B_A_Medic_ddpm_F,B_A_Medic_F)
    COMPATIBILITYCLASS(B_A_Medic_dpm_F,B_A_Medic_F)
    class B_A_Recon_LAT_F;
    COMPATIBILITYCLASS(B_A_Recon_LAT2_F,B_A_Recon_LAT_F)
    class B_A_Recon_M_F;
    COMPATIBILITYCLASS(B_A_Recon_Sharpshooter_F,B_A_Recon_M_F)
    class B_A_soldier_M_F;
    COMPATIBILITYCLASS(B_A_Sharpshooter_ddpm_F,B_A_soldier_M_F)
    COMPATIBILITYCLASS(B_A_Sharpshooter_dpm_F,B_A_soldier_M_F)
    COMPATIBILITYCLASS(B_A_Sharpshooter_F,B_A_soldier_M_F)
    class B_sniper_F;
    COMPATIBILITYCLASS(B_A_SniperH_F,B_sniper_F)
    COMPATIBILITYCLASS(B_A_Sniper_F,B_sniper_F)
    class B_spotter_F;
    COMPATIBILITYCLASS(B_A_Spotter_F,B_spotter_F)
    class B_A_Soldier_AAA_F;
    COMPATIBILITYCLASS(B_A_Soldier_AAA_ddpm_F,B_A_Soldier_AAA_F)
    COMPATIBILITYCLASS(B_A_Soldier_AAA_dpm_F,B_A_Soldier_AAA_F)
    class B_A_Soldier_AAR_F;
    COMPATIBILITYCLASS(B_A_Soldier_AAR_ddpm_F,B_A_Soldier_AAR_F)
    COMPATIBILITYCLASS(B_A_Soldier_AAR_dpm_F,B_A_Soldier_AAR_F)
    class B_A_Soldier_AAT_F;
    COMPATIBILITYCLASS(B_A_Soldier_AAT_ddpm_F,B_A_Soldier_AAT_F)
    COMPATIBILITYCLASS(B_A_Soldier_AAT_dpm_F,B_A_Soldier_AAT_F)
    class B_A_Soldier_AA_F;
    COMPATIBILITYCLASS(B_A_Soldier_AA_ddpm_F,B_A_Soldier_AA_F)
    COMPATIBILITYCLASS(B_A_Soldier_AA_dpm_F,B_A_Soldier_AA_F)
    class B_A_Soldier_AR_F;
    COMPATIBILITYCLASS(B_A_Soldier_AR_ddpm_F,B_A_Soldier_AR_F)
    COMPATIBILITYCLASS(B_A_Soldier_AR_dpm_F,B_A_Soldier_AR_F)
    class B_A_Soldier_AT_F;
    COMPATIBILITYCLASS(B_A_Soldier_AT_ddpm_F,B_A_Soldier_AT_F)
    COMPATIBILITYCLASS(B_A_Soldier_AT_dpm_F,B_A_Soldier_AT_F)
    class B_A_Soldier_A_F;
    COMPATIBILITYCLASS(B_A_Soldier_A_ddpm_F,B_A_Soldier_A_F)
    COMPATIBILITYCLASS(B_A_Soldier_A_dpm_F,B_A_Soldier_A_F)
    class B_A_Soldier_CQ_F;
    COMPATIBILITYCLASS(B_A_Soldier_CQ_ddpm_F,B_A_Soldier_CQ_F)
    COMPATIBILITYCLASS(B_A_Soldier_CQ_dpm_F,B_A_Soldier_CQ_F)
    class B_A_Soldier_F;
    COMPATIBILITYCLASS(B_A_Soldier_ddpm_F,B_A_Soldier_F)
    COMPATIBILITYCLASS(B_A_Soldier_dpm_F,B_A_Soldier_F)
    COMPATIBILITYCLASS(B_A_Soldier_EOD_F,B_A_Soldier_F)
    class B_A_Soldier_Exp_F;
    COMPATIBILITYCLASS(B_A_Soldier_Exp_ddpm_F,B_A_Soldier_Exp_F)
    COMPATIBILITYCLASS(B_A_Soldier_Exp_dpm_F,B_A_Soldier_Exp_F)
    class B_A_Soldier_GL_F;
    COMPATIBILITYCLASS(B_A_Soldier_GL_ddpm_F,B_A_Soldier_GL_F)
    COMPATIBILITYCLASS(B_A_Soldier_GL_dpm_F,B_A_Soldier_GL_F)
    COMPATIBILITYCLASS(B_A_Soldier_JTAC_F,B_A_Soldier_F)
    class B_A_Soldier_LAT_F;
    COMPATIBILITYCLASS(B_A_Soldier_LAT2_F,B_A_Soldier_LAT_F)
    COMPATIBILITYCLASS(B_A_Soldier_LAT_ddpm_F,B_A_Soldier_LAT_F)
    COMPATIBILITYCLASS(B_A_Soldier_LAT_dpm_F,B_A_Soldier_LAT_F)
    COMPATIBILITYCLASS(B_A_Soldier_MG_ddpm_F,B_A_Soldier_AR_F)
    COMPATIBILITYCLASS(B_A_Soldier_MG_dpm_F,B_A_Soldier_AR_F)
    COMPATIBILITYCLASS(B_A_Soldier_MG_F,B_A_Soldier_AR_F)
    COMPATIBILITYCLASS(B_A_soldier_M_ddpm_F,B_A_soldier_M_F)
    COMPATIBILITYCLASS(B_A_soldier_M_dpm_F,B_A_soldier_M_F)
    class B_A_Soldier_Repair_F;
    COMPATIBILITYCLASS(B_A_Soldier_Repair_ddpm_F,B_A_Soldier_Repair_F)
    COMPATIBILITYCLASS(B_A_Soldier_Repair_dpm_F,B_A_Soldier_Repair_F)
    class B_A_Soldier_SL_F;
    COMPATIBILITYCLASS(B_A_Soldier_SL_ddpm_F,B_A_Soldier_SL_F)
    COMPATIBILITYCLASS(B_A_Soldier_SL_dpm_F,B_A_Soldier_SL_F)
    class B_A_Soldier_TL_F;
    COMPATIBILITYCLASS(B_A_Soldier_TL_ddpm_F,B_A_Soldier_TL_F)
    COMPATIBILITYCLASS(B_A_Soldier_TL_dpm_F,B_A_Soldier_TL_F)
    class B_A_Soldier_unarmed_F;
    COMPATIBILITYCLASS(B_A_Soldier_unarmed_ddpm_F,B_A_Soldier_unarmed_F)
    COMPATIBILITYCLASS(B_A_Soldier_unarmed_dpm_F,B_A_Soldier_unarmed_F)
    class B_A_Recon_AR_F;
    COMPATIBILITYCLASS(B_A_Specop_AR_F,B_A_Recon_AR_F)
    class B_A_Recon_CQ_F;
    COMPATIBILITYCLASS(B_A_Specop_CQ_F,B_A_Recon_CQ_F)
    class B_A_Recon_Exp_F;
    COMPATIBILITYCLASS(B_A_Specop_Exp_F,B_A_Recon_Exp_F)
    class B_A_Recon_F;
    COMPATIBILITYCLASS(B_A_Specop_F,B_A_Recon_F)
    class B_A_Recon_JTAC_F;
    COMPATIBILITYCLASS(B_A_Specop_JTAC_F,B_A_Recon_JTAC_F)
    COMPATIBILITYCLASS(B_A_Specop_LAT2_F,B_A_Recon_LAT_F)
    COMPATIBILITYCLASS(B_A_Specop_LAT_F,B_A_Recon_LAT_F)
    class B_A_Recon_Medic_F;
    COMPATIBILITYCLASS(B_A_Specop_Medic_F,B_A_Recon_Medic_F)
    COMPATIBILITYCLASS(B_A_Specop_MG_F,B_A_Recon_AR_F)
    COMPATIBILITYCLASS(B_A_Specop_M_F,B_A_Recon_M_F)
    COMPATIBILITYCLASS(B_A_Specop_Sharpshooter_F,B_A_Recon_M_F)
    class B_A_Recon_TL_F;
    COMPATIBILITYCLASS(B_A_Specop_TL_F,B_A_Recon_TL_F)
    COMPATIBILITYCLASS(B_CTRG_Soldier_CQ_F,B_CTRG_Soldier_F)
    COMPATIBILITYCLASS(B_CTRG_Soldier_CQ_tna_F,B_CTRG_Soldier_F)
    COMPATIBILITYCLASS(B_CTRG_Soldier_CQ_urb_F,B_CTRG_Soldier_F)
    class B_ghillie_ard_F;
    COMPATIBILITYCLASS(B_ghillie_heavy_ard_F,B_ghillie_ard_F)
    class B_ghillie_sard_F;
    COMPATIBILITYCLASS(B_ghillie_heavy_sard_F,B_ghillie_sard_F)
    class B_ghillie_lsh_F;
    COMPATIBILITYCLASS(B_ghillie_heavy_lsh_F,B_ghillie_lsh_F)
    class B_recon_LAT_F;
    COMPATIBILITYCLASS(B_recon_LAT2_F,B_recon_LAT_F)
    COMPATIBILITYCLASS(B_sniperH_F,B_sniper_F)
    class B_Soldier_F;
    COMPATIBILITYCLASS(B_soldier_EOD_F,B_Soldier_F)
    class B_recon_AR_F;
    COMPATIBILITYCLASS(B_Specop_AR_F,B_recon_AR_F)
    class B_recon_CQ_F;
    COMPATIBILITYCLASS(B_Specop_CQ_F,B_recon_CQ_F)
    class B_recon_exp_F;
    COMPATIBILITYCLASS(B_Specop_exp_F,B_recon_exp_F)
    class B_recon_F;
    COMPATIBILITYCLASS(B_Specop_F,B_recon_F)
    class B_recon_JTAC_F;
    COMPATIBILITYCLASS(B_Specop_JTAC_F,B_recon_JTAC_F)
    COMPATIBILITYCLASS(B_Specop_LAT2_F,B_recon_LAT_F)
    COMPATIBILITYCLASS(B_Specop_LAT_F,B_recon_LAT_F)
    class B_recon_medic_F;
    COMPATIBILITYCLASS(B_Specop_medic_F,B_recon_medic_F)
    class B_recon_MG_F;
    COMPATIBILITYCLASS(B_Specop_MG_F,B_recon_MG_F)
    class B_recon_M_F;
    COMPATIBILITYCLASS(B_Specop_M_F,B_recon_M_F)
    class B_Recon_Sharpshooter_F;
    COMPATIBILITYCLASS(B_Specop_Sharpshooter_F,B_Recon_Sharpshooter_F)
    class B_recon_TL_F;
    COMPATIBILITYCLASS(B_Specop_TL_F,B_recon_TL_F)
    class B_Deck_Crew_F;
    COMPATIBILITYCLASS(B_T_Deck_Crew_F,B_Deck_Crew_F)
    class B_T_ghillie_tna_F;
    COMPATIBILITYCLASS(B_T_ghillie_heavy_tna_F,B_T_ghillie_tna_F)
    class B_T_Recon_LAT_F;
    COMPATIBILITYCLASS(B_T_Recon_LAT2_F,B_T_Recon_LAT_F)
    class B_T_Sniper_F;
    COMPATIBILITYCLASS(B_T_SniperH_F,B_T_Sniper_F)
    class B_T_Soldier_F;
    COMPATIBILITYCLASS(B_T_Soldier_EOD_F,B_T_Soldier_F)
    class B_T_Recon_AR_F;
    COMPATIBILITYCLASS(B_T_Specop_AR_F,B_T_Recon_AR_F)
    class B_T_Recon_CQ_F;
    COMPATIBILITYCLASS(B_T_Specop_CQ_F,B_T_Recon_CQ_F)
    class B_T_Recon_exp_F;
    COMPATIBILITYCLASS(B_T_Specop_exp_F,B_T_Recon_exp_F)
    class B_T_Recon_F;
    COMPATIBILITYCLASS(B_T_Specop_F,B_T_Recon_F)
    class B_T_Recon_JTAC_F;
    COMPATIBILITYCLASS(B_T_Specop_JTAC_F,B_T_Recon_JTAC_F)
    COMPATIBILITYCLASS(B_T_Specop_LAT2_F,B_T_Recon_LAT_F)
    COMPATIBILITYCLASS(B_T_Specop_LAT_F,B_T_Recon_LAT_F)
    class B_T_Recon_medic_F;
    COMPATIBILITYCLASS(B_T_Specop_medic_F,B_T_Recon_medic_F)
    class B_T_Recon_MG_F;
    COMPATIBILITYCLASS(B_T_Specop_MG_F,B_T_Recon_MG_F)
    class B_T_Recon_M_F;
    COMPATIBILITYCLASS(B_T_Specop_M_F,B_T_Recon_M_F)
    class B_T_Recon_Sharpshooter_F;
    COMPATIBILITYCLASS(B_T_Specop_Sharpshooter_F,B_T_Recon_Sharpshooter_F)
    class B_T_Recon_TL_F;
    COMPATIBILITYCLASS(B_T_Specop_TL_F,B_T_Recon_TL_F)
    COMPATIBILITYCLASS(I_R_diver_exp_F,I_Soldier_F)
    COMPATIBILITYCLASS(I_R_diver_F,I_Soldier_F)
    COMPATIBILITYCLASS(I_R_diver_TL_F,I_Soldier_F)
    COMPATIBILITYCLASS(I_R_Officer_F,I_Soldier_F)
    COMPATIBILITYCLASS(I_R_Soldier_CQ_F,I_Soldier_F)
    class I_Soldier_M_F;
    COMPATIBILITYCLASS(I_Sharpshooter_F,I_Soldier_M_F)
    COMPATIBILITYCLASS(I_soldier_EOD_F,I_Soldier_F)
    COMPATIBILITYCLASS(I_soldier_JTAC_F,I_Soldier_F)
    class O_A_soldier_F;
    COMPATIBILITYCLASS(O_A_soldier_AAA_F,O_A_soldier_F)
    COMPATIBILITYCLASS(O_A_soldier_AAR_F,O_A_soldier_F)
    COMPATIBILITYCLASS(O_A_soldier_AAT_F,O_A_soldier_F)
    COMPATIBILITYCLASS(O_A_soldier_AHAA_F,O_A_soldier_F)
    COMPATIBILITYCLASS(O_A_soldier_AHAT_F,O_A_soldier_F)
    COMPATIBILITYCLASS(O_A_soldier_CQ_F,O_A_soldier_F)
    COMPATIBILITYCLASS(O_A_soldier_exp_F,O_A_soldier_F)
    COMPATIBILITYCLASS(O_A_soldier_HAA_F,O_A_soldier_F)
    COMPATIBILITYCLASS(O_A_soldier_HAT_F,O_A_soldier_F)
    COMPATIBILITYCLASS(O_A_soldier_repair_F,O_A_soldier_F)
    COMPATIBILITYCLASS(O_A_soldier_unarmed_F,O_A_soldier_F)
    class O_Soldier_F;
    COMPATIBILITYCLASS(O_Soldier_AHAA_F,O_Soldier_F)
    COMPATIBILITYCLASS(O_soldier_EOD_F,O_Soldier_F)
    COMPATIBILITYCLASS(O_Soldier_HAA_F,O_Soldier_F)
    class O_recon_AR_F;
    COMPATIBILITYCLASS(O_Specop_AR_F,O_recon_AR_F)
    class O_recon_CQ_F;
    COMPATIBILITYCLASS(O_Specop_CQ_F,O_recon_CQ_F)
    class O_recon_exp_F;
    COMPATIBILITYCLASS(O_Specop_exp_F,O_recon_exp_F)
    class O_recon_F;
    COMPATIBILITYCLASS(O_Specop_F,O_recon_F)
    class O_recon_JTAC_F;
    COMPATIBILITYCLASS(O_Specop_JTAC_F,O_recon_JTAC_F)
    class O_recon_LAT_F;
    COMPATIBILITYCLASS(O_Specop_LAT2_F,O_recon_LAT_F)
    COMPATIBILITYCLASS(O_Specop_LAT_F,O_recon_LAT_F)
    class O_recon_medic_F;
    COMPATIBILITYCLASS(O_Specop_medic_F,O_recon_medic_F)
    COMPATIBILITYCLASS(O_Specop_MG_F,O_recon_AR_F)
    class O_recon_M_F;
    COMPATIBILITYCLASS(O_Specop_M_F,O_recon_M_F)
    class O_Pathfinder_F;
    COMPATIBILITYCLASS(O_Specop_Pathfinder_F,O_Pathfinder_F)
    class O_recon_TL_F;
    COMPATIBILITYCLASS(O_Specop_TL_F,O_recon_TL_F)
    class O_T_Soldier_F;
    COMPATIBILITYCLASS(O_T_Soldier_AHAA_F,O_T_Soldier_F)
    COMPATIBILITYCLASS(O_T_Soldier_EOD_F,O_T_Soldier_F)
    COMPATIBILITYCLASS(O_T_Soldier_HAA_F,O_T_Soldier_F)
    COMPATIBILITYCLASS(O_T_Soldier_MG_F,O_T_Soldier_F)
    class O_T_Recon_AR_F;
    COMPATIBILITYCLASS(O_T_Specop_AR_F,O_T_Recon_AR_F)
    class O_T_Recon_CQ_F;
    COMPATIBILITYCLASS(O_T_Specop_CQ_F,O_T_Recon_CQ_F)
    class O_T_Recon_exp_F;
    COMPATIBILITYCLASS(O_T_Specop_exp_F,O_T_Recon_exp_F)
    class O_T_Recon_F;
    COMPATIBILITYCLASS(O_T_Specop_F,O_T_Recon_F)
    class O_T_Recon_JTAC_F;
    COMPATIBILITYCLASS(O_T_Specop_JTAC_F,O_T_Recon_JTAC_F)
    class O_T_Recon_LAT_F;
    COMPATIBILITYCLASS(O_T_Specop_LAT2_F,O_T_Recon_LAT_F)
    COMPATIBILITYCLASS(O_T_Specop_LAT_F,O_T_Recon_LAT_F)
    class O_T_Recon_medic_F;
    COMPATIBILITYCLASS(O_T_Specop_medic_F,O_T_Recon_medic_F)
    COMPATIBILITYCLASS(O_T_Specop_MG_F,O_T_Recon_AR_F)
    class O_T_Recon_M_F;
    COMPATIBILITYCLASS(O_T_Specop_M_F,O_T_Recon_M_F)
    class O_T_Pathfinder_F;
    COMPATIBILITYCLASS(O_T_Specop_Pathfinder_F,O_T_Pathfinder_F)
    class O_T_Recon_TL_F;
    COMPATIBILITYCLASS(O_T_Specop_TL_F,O_T_Recon_TL_F)
    class O_V_Soldier_hex_F;
    COMPATIBILITYCLASS(O_V_Soldier_CQ_hex_F,O_V_Soldier_hex_F)
    class O_V_Soldier_ghex_F;
    COMPATIBILITYCLASS(O_V_Soldier_CQ_ghex_F,O_V_Soldier_ghex_F)
    COMPATIBILITYCLASS(C_man_slavic_1_F,C_man_1)
    class O_R_Crew_F;
    COMPATIBILITYCLASS(I_RU_Crew_F,O_R_Crew_F)
    COMPATIBILITYCLASS(O_RU_Crew_F,O_R_Crew_F)
    class O_R_Diver_Exp_F;
    COMPATIBILITYCLASS(I_RU_Diver_Exp_F,O_R_Diver_Exp_F)
    COMPATIBILITYCLASS(O_RU_Diver_Exp_F,O_R_Diver_Exp_F)
    class O_R_Diver_F;
    COMPATIBILITYCLASS(I_RU_Diver_F,O_R_Diver_F)
    COMPATIBILITYCLASS(O_RU_Diver_F,O_R_Diver_F)
    class O_R_Diver_TL_F;
    COMPATIBILITYCLASS(I_RU_Diver_TL_F,O_R_Diver_TL_F)
    COMPATIBILITYCLASS(O_RU_Diver_TL_F,O_R_Diver_TL_F)
    class O_R_Engineer_F;
    COMPATIBILITYCLASS(I_RU_Engineer_alt_F,O_R_Engineer_F)
    COMPATIBILITYCLASS(O_RU_Engineer_alt_F,O_R_Engineer_F)
    COMPATIBILITYCLASS(I_RU_Engineer_F,O_R_Engineer_F)
    COMPATIBILITYCLASS(O_RU_Engineer_F,O_R_Engineer_F)
    COMPATIBILITYCLASS(I_RU_Engineer_arc_F,O_R_Engineer_F)
    COMPATIBILITYCLASS(O_RU_Engineer_arc_F,O_R_Engineer_F)
    class O_R_Fighter_Pilot_F;
    COMPATIBILITYCLASS(I_RU_Fighter_Pilot_F,O_R_Fighter_Pilot_F)
    COMPATIBILITYCLASS(O_RU_Fighter_Pilot_F,O_R_Fighter_Pilot_F)
    class O_R_ghillie_wdl_F;
    COMPATIBILITYCLASS(I_RU_ghillie_ard_F,O_R_ghillie_wdl_F)
    COMPATIBILITYCLASS(O_RU_ghillie_ard_F,O_R_ghillie_wdl_F)
    COMPATIBILITYCLASS(I_RU_ghillie_lsh_F,O_R_ghillie_wdl_F)
    COMPATIBILITYCLASS(O_RU_ghillie_lsh_F,O_R_ghillie_wdl_F)
    COMPATIBILITYCLASS(I_RU_ghillie_sard_F,O_R_ghillie_wdl_F)
    COMPATIBILITYCLASS(O_RU_ghillie_sard_F,O_R_ghillie_wdl_F)
    class O_R_ghillie_spotter_wdl_F;
    COMPATIBILITYCLASS(I_RU_ghillie_spotter_ard_F,O_R_ghillie_spotter_wdl_F)
    COMPATIBILITYCLASS(O_RU_ghillie_spotter_ard_F,O_R_ghillie_spotter_wdl_F)
    COMPATIBILITYCLASS(I_RU_ghillie_spotter_lsh_F,O_R_ghillie_spotter_wdl_F)
    COMPATIBILITYCLASS(O_RU_ghillie_spotter_lsh_F,O_R_ghillie_spotter_wdl_F)
    COMPATIBILITYCLASS(I_RU_ghillie_spotter_sard_F,O_R_ghillie_spotter_wdl_F)
    COMPATIBILITYCLASS(O_RU_ghillie_spotter_sard_F,O_R_ghillie_spotter_wdl_F)
    COMPATIBILITYCLASS(I_RU_ghillie_spotter_tna_F,O_R_ghillie_spotter_wdl_F)
    COMPATIBILITYCLASS(O_RU_ghillie_spotter_tna_F,O_R_ghillie_spotter_wdl_F)
    COMPATIBILITYCLASS(I_RU_ghillie_tna_F,O_R_ghillie_wdl_F)
    COMPATIBILITYCLASS(O_RU_ghillie_tna_F,O_R_ghillie_wdl_F)
    class O_R_Helicrew_F;
    COMPATIBILITYCLASS(I_RU_Helicrew_F,O_R_Helicrew_F)
    COMPATIBILITYCLASS(O_RU_Helicrew_F,O_R_Helicrew_F)
    class O_R_Helipilot_F;
    COMPATIBILITYCLASS(I_RU_Helipilot_F,O_R_Helipilot_F)
    COMPATIBILITYCLASS(O_RU_Helipilot_F,O_R_Helipilot_F)
    class O_R_Medic_F;
    COMPATIBILITYCLASS(I_RU_Medic_F,O_R_Medic_F)
    COMPATIBILITYCLASS(O_RU_Medic_F,O_R_Medic_F)
    class O_R_Officer_F;
    COMPATIBILITYCLASS(I_RU_Officer_F,O_R_Officer_F)
    COMPATIBILITYCLASS(O_RU_Officer_F,O_R_Officer_F)
    class O_pilot_F;
    COMPATIBILITYCLASS(I_RU_Pilot_F,O_pilot_F)
    COMPATIBILITYCLASS(O_RU_Pilot_F,O_pilot_F)
    class O_R_Recon_AR_F;
    COMPATIBILITYCLASS(I_RU_Recon_AR_F,O_R_Recon_AR_F)
    COMPATIBILITYCLASS(O_RU_Recon_AR_F,O_R_Recon_AR_F)
    COMPATIBILITYCLASS(I_RU_Specop_AR_F,O_R_Recon_AR_F)
    COMPATIBILITYCLASS(O_RU_Specop_AR_F,O_R_Recon_AR_F)
    class O_R_Recon_CQ_F;
    COMPATIBILITYCLASS(I_RU_Recon_CQ_F,O_R_Recon_CQ_F)
    COMPATIBILITYCLASS(O_RU_Recon_CQ_F,O_R_Recon_CQ_F)
    COMPATIBILITYCLASS(I_RU_Specop_CQ_F,O_R_Recon_CQ_F)
    COMPATIBILITYCLASS(O_RU_Specop_CQ_F,O_R_Recon_CQ_F)
    class O_R_Recon_Exp_F;
    COMPATIBILITYCLASS(I_RU_Recon_Exp_F,O_R_Recon_Exp_F)
    COMPATIBILITYCLASS(O_RU_Recon_Exp_F,O_R_Recon_Exp_F)
    COMPATIBILITYCLASS(I_RU_Specop_Exp_F,O_R_Recon_Exp_F)
    COMPATIBILITYCLASS(O_RU_Specop_Exp_F,O_R_Recon_Exp_F)
    class O_R_Recon_F;
    COMPATIBILITYCLASS(I_RU_Recon_F,O_R_Recon_F)
    COMPATIBILITYCLASS(O_RU_Recon_F,O_R_Recon_F)
    COMPATIBILITYCLASS(I_RU_Specop_F,O_R_Recon_F)
    COMPATIBILITYCLASS(O_RU_Specop_F,O_R_Recon_F)
    class O_R_Recon_JTAC_F;
    COMPATIBILITYCLASS(I_RU_Recon_JTAC_F,O_R_Recon_JTAC_F)
    COMPATIBILITYCLASS(O_RU_Recon_JTAC_F,O_R_Recon_JTAC_F)
    COMPATIBILITYCLASS(I_RU_Specop_JTAC_F,O_R_Recon_JTAC_F)
    COMPATIBILITYCLASS(O_RU_Specop_JTAC_F,O_R_Recon_JTAC_F)
    class O_R_Recon_LAT_F;
    COMPATIBILITYCLASS(I_RU_Recon_LAT_F,O_R_Recon_LAT_F)
    COMPATIBILITYCLASS(O_RU_Recon_LAT_F,O_R_Recon_LAT_F)
    COMPATIBILITYCLASS(I_RU_Specop_LAT_F,O_R_Recon_LAT_F)
    COMPATIBILITYCLASS(O_RU_Specop_LAT_F,O_R_Recon_LAT_F)
    class O_R_Recon_Medic_F;
    COMPATIBILITYCLASS(I_RU_Recon_Medic_F,O_R_Recon_Medic_F)
    COMPATIBILITYCLASS(O_RU_Recon_Medic_F,O_R_Recon_Medic_F)
    COMPATIBILITYCLASS(I_RU_Specop_Medic_F,O_R_Recon_Medic_F)
    COMPATIBILITYCLASS(O_RU_Specop_Medic_F,O_R_Recon_Medic_F)
    class O_R_Recon_M_F;
    COMPATIBILITYCLASS(I_RU_Recon_M_F,O_R_Recon_M_F)
    COMPATIBILITYCLASS(O_RU_Recon_M_F,O_R_Recon_M_F)
    COMPATIBILITYCLASS(I_RU_Specop_M_F,O_R_Recon_M_F)
    COMPATIBILITYCLASS(O_RU_Specop_M_F,O_R_Recon_M_F)
    COMPATIBILITYCLASS(I_RU_Recon_Pathfinder_F,O_Pathfinder_F)
    COMPATIBILITYCLASS(O_RU_Recon_Pathfinder_F,O_Pathfinder_F)
    COMPATIBILITYCLASS(I_RU_Specop_Pathfinder_F,O_Pathfinder_F)
    COMPATIBILITYCLASS(O_RU_Specop_Pathfinder_F,O_Pathfinder_F)
    class O_R_Recon_TL_F;
    COMPATIBILITYCLASS(I_RU_Recon_TL_F,O_R_Recon_TL_F)
    COMPATIBILITYCLASS(O_RU_Recon_TL_F,O_R_Recon_TL_F)
    COMPATIBILITYCLASS(I_RU_Specop_TL_F,O_R_Recon_TL_F)
    COMPATIBILITYCLASS(O_RU_Specop_TL_F,O_R_Recon_TL_F)
    class O_sniper_F;
    COMPATIBILITYCLASS(I_RU_Sniper_F,O_sniper_F)
    COMPATIBILITYCLASS(O_RU_Sniper_F,O_sniper_F)
    class O_R_Soldier_AAA_F;
    COMPATIBILITYCLASS(I_RU_Soldier_AAA_alt_F,O_R_Soldier_AAA_F)
    COMPATIBILITYCLASS(O_RU_Soldier_AAA_alt_F,O_R_Soldier_AAA_F)
    COMPATIBILITYCLASS(I_RU_Soldier_AAA_F,O_R_Soldier_AAA_F)
    COMPATIBILITYCLASS(O_RU_Soldier_AAA_F,O_R_Soldier_AAA_F)
    class O_R_Soldier_AAR_F;
    COMPATIBILITYCLASS(I_RU_Soldier_AAR_alt_F,O_R_Soldier_AAR_F)
    COMPATIBILITYCLASS(O_RU_Soldier_AAR_alt_F,O_R_Soldier_AAR_F)
    COMPATIBILITYCLASS(I_RU_Soldier_AAR_F,O_R_Soldier_AAR_F)
    COMPATIBILITYCLASS(O_RU_Soldier_AAR_F,O_R_Soldier_AAR_F)
    class O_R_Soldier_AAT_F;
    COMPATIBILITYCLASS(I_RU_Soldier_AAT_alt_F,O_R_Soldier_AAT_F)
    COMPATIBILITYCLASS(O_RU_Soldier_AAT_alt_F,O_R_Soldier_AAT_F)
    COMPATIBILITYCLASS(I_RU_Soldier_AAT_F,O_R_Soldier_AAT_F)
    COMPATIBILITYCLASS(O_RU_Soldier_AAT_F,O_R_Soldier_AAT_F)
    COMPATIBILITYCLASS(I_RU_Soldier_AAA_arc_F,O_R_Soldier_AAA_F)
    COMPATIBILITYCLASS(O_RU_Soldier_AAA_arc_F,O_R_Soldier_AAA_F)
    COMPATIBILITYCLASS(I_RU_Soldier_AAR_arc_F,O_R_Soldier_AAR_F)
    COMPATIBILITYCLASS(O_RU_Soldier_AAR_arc_F,O_R_Soldier_AAR_F)
    COMPATIBILITYCLASS(I_RU_Soldier_AAT_arc_F,O_R_Soldier_AAT_F)
    COMPATIBILITYCLASS(O_RU_Soldier_AAT_arc_F,O_R_Soldier_AAT_F)
    class O_R_Soldier_AA_F;
    COMPATIBILITYCLASS(I_RU_Soldier_AA_alt_F,O_R_Soldier_AA_F)
    COMPATIBILITYCLASS(O_RU_Soldier_AA_alt_F,O_R_Soldier_AA_F)
    COMPATIBILITYCLASS(I_RU_Soldier_AA_F,O_R_Soldier_AA_F)
    COMPATIBILITYCLASS(O_RU_Soldier_AA_F,O_R_Soldier_AA_F)
    class O_R_Soldier_AR_F;
    COMPATIBILITYCLASS(O_R_Soldier_MG_F,O_R_Soldier_AR_F)
    COMPATIBILITYCLASS(I_RU_HeavyGunner_alt_F,O_R_Soldier_AR_F)
    COMPATIBILITYCLASS(O_RU_HeavyGunner_alt_F,O_R_Soldier_AR_F)
    COMPATIBILITYCLASS(I_RU_HeavyGunner_F,O_R_Soldier_AR_F)
    COMPATIBILITYCLASS(O_RU_HeavyGunner_F,O_R_Soldier_AR_F)
    COMPATIBILITYCLASS(I_RU_HeavyGunner_arc_F,O_R_Soldier_AR_F)
    COMPATIBILITYCLASS(O_RU_HeavyGunner_arc_F,O_R_Soldier_AR_F)
    COMPATIBILITYCLASS(I_RU_Soldier_AR_alt_F,O_R_Soldier_AR_F)
    COMPATIBILITYCLASS(O_RU_Soldier_AR_alt_F,O_R_Soldier_AR_F)
    COMPATIBILITYCLASS(I_RU_Soldier_AR_F,O_R_Soldier_AR_F)
    COMPATIBILITYCLASS(O_RU_Soldier_AR_F,O_R_Soldier_AR_F)
    class O_R_Soldier_AT_F;
    COMPATIBILITYCLASS(I_RU_Soldier_AT_alt_F,O_R_Soldier_AT_F)
    COMPATIBILITYCLASS(O_RU_Soldier_AT_alt_F,O_R_Soldier_AT_F)
    COMPATIBILITYCLASS(I_RU_Soldier_AT_F,O_R_Soldier_AT_F)
    COMPATIBILITYCLASS(O_RU_Soldier_AT_F,O_R_Soldier_AT_F)
    COMPATIBILITYCLASS(I_RU_Soldier_AA_arc_F,O_R_Soldier_AA_F)
    COMPATIBILITYCLASS(O_RU_Soldier_AA_arc_F,O_R_Soldier_AA_F)
    COMPATIBILITYCLASS(I_RU_Soldier_AR_arc_F,O_R_Soldier_AR_F)
    COMPATIBILITYCLASS(O_RU_Soldier_AR_arc_F,O_R_Soldier_AR_F)
    COMPATIBILITYCLASS(I_RU_Soldier_AT_arc_F,O_R_Soldier_AT_F)
    COMPATIBILITYCLASS(O_RU_Soldier_AT_arc_F,O_R_Soldier_AT_F)
    class O_R_Soldier_F;
    COMPATIBILITYCLASS(I_RU_Soldier_AHAA_F,O_R_Soldier_F)
    COMPATIBILITYCLASS(O_RU_Soldier_AHAA_F,O_R_Soldier_F)
    class O_R_Soldier_AHAT_F;
    COMPATIBILITYCLASS(I_RU_Soldier_AHAT_F,O_R_Soldier_AHAT_F)
    COMPATIBILITYCLASS(O_RU_Soldier_AHAT_F,O_R_Soldier_AHAT_F)
    COMPATIBILITYCLASS(I_RU_Soldier_alt_F,O_R_Soldier_F)
    COMPATIBILITYCLASS(O_RU_Soldier_alt_F,O_R_Soldier_F)
    COMPATIBILITYCLASS(I_RU_Soldier_F,O_R_Soldier_F)
    COMPATIBILITYCLASS(O_RU_Soldier_F,O_R_Soldier_F)
    COMPATIBILITYCLASS(I_RU_Soldier_arc_F,O_R_Soldier_F)
    COMPATIBILITYCLASS(O_RU_Soldier_arc_F,O_R_Soldier_F)
    class O_R_Soldier_A_F;
    COMPATIBILITYCLASS(I_RU_Soldier_A_alt_F,O_R_Soldier_A_F)
    COMPATIBILITYCLASS(O_RU_Soldier_A_alt_F,O_R_Soldier_A_F)
    COMPATIBILITYCLASS(I_RU_Soldier_A_F,O_R_Soldier_A_F)
    COMPATIBILITYCLASS(O_RU_Soldier_A_F,O_R_Soldier_A_F)
    COMPATIBILITYCLASS(I_RU_Soldier_A_arc_F,O_R_Soldier_A_F)
    COMPATIBILITYCLASS(O_RU_Soldier_A_arc_F,O_R_Soldier_A_F)
    class O_R_Soldier_CQ_F;
    COMPATIBILITYCLASS(I_RU_Soldier_CQ_alt_F,O_R_Soldier_CQ_F)
    COMPATIBILITYCLASS(O_RU_Soldier_CQ_alt_F,O_R_Soldier_CQ_F)
    COMPATIBILITYCLASS(I_RU_Soldier_CQ_F,O_R_Soldier_CQ_F)
    COMPATIBILITYCLASS(O_RU_Soldier_CQ_F,O_R_Soldier_CQ_F)
    COMPATIBILITYCLASS(I_RU_Soldier_CQ_arc_F,O_R_Soldier_CQ_F)
    COMPATIBILITYCLASS(O_RU_Soldier_CQ_arc_F,O_R_Soldier_CQ_F)
    COMPATIBILITYCLASS(I_RU_Soldier_EOD_F,O_R_Soldier_F)
    COMPATIBILITYCLASS(O_RU_Soldier_EOD_F,O_R_Soldier_F)
    class O_R_Soldier_Exp_F;
    COMPATIBILITYCLASS(I_RU_Soldier_Exp_alt_F,O_R_Soldier_Exp_F)
    COMPATIBILITYCLASS(O_RU_Soldier_Exp_alt_F,O_R_Soldier_Exp_F)
    COMPATIBILITYCLASS(I_RU_Soldier_Exp_F,O_R_Soldier_Exp_F)
    COMPATIBILITYCLASS(O_RU_Soldier_Exp_F,O_R_Soldier_Exp_F)
    COMPATIBILITYCLASS(I_RU_Soldier_Exp_arc_F,O_R_Soldier_Exp_F)
    COMPATIBILITYCLASS(O_RU_Soldier_Exp_arc_F,O_R_Soldier_Exp_F)
    class O_R_Soldier_GL_F;
    COMPATIBILITYCLASS(I_RU_Soldier_GL_alt_F,O_R_Soldier_GL_F)
    COMPATIBILITYCLASS(O_RU_Soldier_GL_alt_F,O_R_Soldier_GL_F)
    COMPATIBILITYCLASS(I_RU_Soldier_GL_F,O_R_Soldier_GL_F)
    COMPATIBILITYCLASS(O_RU_Soldier_GL_F,O_R_Soldier_GL_F)
    COMPATIBILITYCLASS(I_RU_Soldier_GL_arc_F,O_R_Soldier_GL_F)
    COMPATIBILITYCLASS(O_RU_Soldier_GL_arc_F,O_R_Soldier_GL_F)
    COMPATIBILITYCLASS(I_RU_Soldier_HAA_F,O_R_Soldier_F)
    COMPATIBILITYCLASS(O_RU_Soldier_HAA_F,O_R_Soldier_F)
    class O_R_Soldier_HAT_F;
    COMPATIBILITYCLASS(I_RU_Soldier_HAT_F,O_R_Soldier_HAT_F)
    COMPATIBILITYCLASS(O_RU_Soldier_HAT_F,O_R_Soldier_HAT_F)
    COMPATIBILITYCLASS(I_RU_Soldier_JTAC_F,O_R_Soldier_F)
    COMPATIBILITYCLASS(O_RU_Soldier_JTAC_F,O_R_Soldier_F)
    COMPATIBILITYCLASS(I_RU_Soldier_LAT2_F,O_R_Soldier_F)
    COMPATIBILITYCLASS(O_RU_Soldier_LAT2_F,O_R_Soldier_F)
    class O_R_Soldier_LAT_F;
    COMPATIBILITYCLASS(I_RU_Soldier_LAT_alt_F,O_R_Soldier_LAT_F)
    COMPATIBILITYCLASS(O_RU_Soldier_LAT_alt_F,O_R_Soldier_LAT_F)
    COMPATIBILITYCLASS(I_RU_Soldier_LAT_F,O_R_Soldier_LAT_F)
    COMPATIBILITYCLASS(O_RU_Soldier_LAT_F,O_R_Soldier_LAT_F)
    COMPATIBILITYCLASS(I_RU_Soldier_LAT_arc_F,O_R_Soldier_LAT_F)
    COMPATIBILITYCLASS(O_RU_Soldier_LAT_arc_F,O_R_Soldier_LAT_F)
    class O_R_Soldier_Lite_F;
    COMPATIBILITYCLASS(I_RU_Soldier_Lite_F,O_R_Soldier_Lite_F)
    COMPATIBILITYCLASS(O_RU_Soldier_Lite_F,O_R_Soldier_Lite_F)
    COMPATIBILITYCLASS(I_RU_Soldier_Medic_alt_F,O_R_Medic_F)
    COMPATIBILITYCLASS(O_RU_Soldier_Medic_alt_F,O_R_Medic_F)
    COMPATIBILITYCLASS(I_RU_Soldier_Medic_arc_F,O_R_Medic_F)
    COMPATIBILITYCLASS(O_RU_Soldier_Medic_arc_F,O_R_Medic_F)
    class O_R_soldier_mine_F;
    COMPATIBILITYCLASS(I_RU_soldier_mine_F,O_R_soldier_mine_F)
    COMPATIBILITYCLASS(O_RU_soldier_mine_F,O_R_soldier_mine_F)
    class O_R_soldier_M_F;
    COMPATIBILITYCLASS(I_RU_Sharpshooter_alt_F,O_R_soldier_M_F)
    COMPATIBILITYCLASS(O_RU_Sharpshooter_alt_F,O_R_soldier_M_F)
    COMPATIBILITYCLASS(I_RU_Sharpshooter_F,O_R_soldier_M_F)
    COMPATIBILITYCLASS(O_RU_Sharpshooter_F,O_R_soldier_M_F)
    COMPATIBILITYCLASS(I_RU_Sharpshooter_arc_F,O_R_soldier_M_F)
    COMPATIBILITYCLASS(O_RU_Sharpshooter_arc_F,O_R_soldier_M_F)
    COMPATIBILITYCLASS(I_RU_Soldier_M_alt_F,O_R_soldier_M_F)
    COMPATIBILITYCLASS(O_RU_Soldier_M_alt_F,O_R_soldier_M_F)
    COMPATIBILITYCLASS(I_RU_soldier_M_F,O_R_soldier_M_F)
    COMPATIBILITYCLASS(O_RU_soldier_M_F,O_R_soldier_M_F)
    COMPATIBILITYCLASS(I_RU_Soldier_M_arc_F,O_R_soldier_M_F)
    COMPATIBILITYCLASS(O_RU_Soldier_M_arc_F,O_R_soldier_M_F)
    COMPATIBILITYCLASS(I_RU_Soldier_PG_F,O_R_Soldier_F)
    COMPATIBILITYCLASS(O_RU_Soldier_PG_F,O_R_Soldier_F)
    class O_R_Soldier_Repair_F;
    COMPATIBILITYCLASS(I_RU_Soldier_Repair_alt_F,O_R_Soldier_Repair_F)
    COMPATIBILITYCLASS(O_RU_Soldier_Repair_alt_F,O_R_Soldier_Repair_F)
    COMPATIBILITYCLASS(I_RU_Soldier_Repair_F,O_R_Soldier_Repair_F)
    COMPATIBILITYCLASS(O_RU_Soldier_Repair_F,O_R_Soldier_Repair_F)
    COMPATIBILITYCLASS(I_RU_Soldier_Repair_arc_F,O_R_Soldier_Repair_F)
    COMPATIBILITYCLASS(O_RU_Soldier_Repair_arc_F,O_R_Soldier_Repair_F)
    class O_R_Soldier_SL_F;
    COMPATIBILITYCLASS(I_RU_Soldier_SL_alt_F,O_R_Soldier_SL_F)
    COMPATIBILITYCLASS(O_RU_Soldier_SL_alt_F,O_R_Soldier_SL_F)
    COMPATIBILITYCLASS(I_RU_Soldier_SL_F,O_R_Soldier_SL_F)
    COMPATIBILITYCLASS(O_RU_Soldier_SL_F,O_R_Soldier_SL_F)
    COMPATIBILITYCLASS(I_RU_Soldier_SL_arc_F,O_R_Soldier_SL_F)
    COMPATIBILITYCLASS(O_RU_Soldier_SL_arc_F,O_R_Soldier_SL_F)
    class O_R_Soldier_TL_F;
    COMPATIBILITYCLASS(I_RU_Soldier_TL_alt_F,O_R_Soldier_TL_F)
    COMPATIBILITYCLASS(O_RU_Soldier_TL_alt_F,O_R_Soldier_TL_F)
    COMPATIBILITYCLASS(I_RU_Soldier_TL_F,O_R_Soldier_TL_F)
    COMPATIBILITYCLASS(O_RU_Soldier_TL_F,O_R_Soldier_TL_F)
    COMPATIBILITYCLASS(I_RU_Soldier_TL_arc_F,O_R_Soldier_TL_F)
    COMPATIBILITYCLASS(O_RU_Soldier_TL_arc_F,O_R_Soldier_TL_F)
    class O_R_soldier_UAV_06_F;
    COMPATIBILITYCLASS(I_RU_soldier_UAV_06_F,O_R_soldier_UAV_06_F)
    COMPATIBILITYCLASS(O_RU_soldier_UAV_06_F,O_R_soldier_UAV_06_F)
    class O_R_soldier_UAV_06_medical_F;
    COMPATIBILITYCLASS(I_RU_soldier_UAV_06_medical_F,O_R_soldier_UAV_06_medical_F)
    COMPATIBILITYCLASS(O_RU_soldier_UAV_06_medical_F,O_R_soldier_UAV_06_medical_F)
    class O_R_Soldier_UAV_F;
    COMPATIBILITYCLASS(I_RU_Soldier_UAV_F,O_R_Soldier_UAV_F)
    COMPATIBILITYCLASS(O_RU_Soldier_UAV_F,O_R_Soldier_UAV_F)
    class O_R_Soldier_unarmed_F;
    COMPATIBILITYCLASS(I_RU_Soldier_unarmed_alt_F,O_R_Soldier_unarmed_F)
    COMPATIBILITYCLASS(O_RU_Soldier_unarmed_alt_F,O_R_Soldier_unarmed_F)
    COMPATIBILITYCLASS(I_RU_Soldier_unarmed_F,O_R_Soldier_unarmed_F)
    COMPATIBILITYCLASS(O_RU_Soldier_unarmed_F,O_R_Soldier_unarmed_F)
    COMPATIBILITYCLASS(I_RU_Soldier_unarmed_arc_F,O_R_Soldier_unarmed_F)
    COMPATIBILITYCLASS(O_RU_Soldier_unarmed_arc_F,O_R_Soldier_unarmed_F)
    class O_R_Soldier_universal_F;
    COMPATIBILITYCLASS(I_RU_Soldier_universal_F,O_R_Soldier_universal_F)
    COMPATIBILITYCLASS(O_RU_Soldier_universal,O_R_Soldier_universal_F)
    class O_spotter_F;
    COMPATIBILITYCLASS(I_RU_Spotter_F,O_spotter_F)
    COMPATIBILITYCLASS(O_RU_Spotter_F,O_spotter_F)
    class O_R_Support_AMG_F;
    COMPATIBILITYCLASS(I_RU_Support_AMG_F,O_R_Support_AMG_F)
    COMPATIBILITYCLASS(O_RU_Support_AMG_F,O_R_Support_AMG_F)
    class O_R_Support_AMort_F;
    COMPATIBILITYCLASS(I_RU_Support_AMort_F,O_R_Support_AMort_F)
    COMPATIBILITYCLASS(O_RU_Support_AMort_F,O_R_Support_AMort_F)
    class O_R_Support_GMG_F;
    COMPATIBILITYCLASS(I_RU_Support_GMG_F,O_R_Support_GMG_F)
    COMPATIBILITYCLASS(O_RU_Support_GMG_F,O_R_Support_GMG_F)
    class O_R_Support_MG_F;
    COMPATIBILITYCLASS(I_RU_Support_MG_F,O_R_Support_MG_F)
    COMPATIBILITYCLASS(O_RU_Support_MG_F,O_R_Support_MG_F)
    class O_R_Support_Mort_F;
    COMPATIBILITYCLASS(I_RU_Support_Mort_F,O_R_Support_Mort_F)
    COMPATIBILITYCLASS(O_RU_Support_Mort_F,O_R_Support_Mort_F)
    class B_Radar_System_01_F;
    COMPATIBILITYCLASS(B_A_Radar_System_01_F,B_Radar_System_01_F)
    class B_SAM_System_03_F;
    COMPATIBILITYCLASS(B_A_SAM_System_03_F,B_SAM_System_03_F)
    class B_SAM_System_01_F;
    COMPATIBILITYCLASS(B_T_SAM_System_01_F,B_SAM_System_01_F)
    class B_SAM_System_02_F;
    COMPATIBILITYCLASS(B_T_SAM_System_02_F,B_SAM_System_02_F)
    class B_Ship_Gun_01_F;
    COMPATIBILITYCLASS(B_T_Ship_Gun_01_F,B_Ship_Gun_01_F)
    class B_Ship_MRLS_01_F;
    COMPATIBILITYCLASS(B_T_Ship_MRLS_01_F,B_Ship_MRLS_01_F)
    class B_AAA_System_01_F;
    COMPATIBILITYCLASS(B_T_AAA_System_01_F,B_AAA_System_01_F)
    class O_R_Static_AA_F;
    COMPATIBILITYCLASS(I_RU_Static_AA_F,O_R_Static_AA_F)
    COMPATIBILITYCLASS(O_RU_Static_AA_F,O_R_Static_AA_F)
    class O_R_SAM_System_04_F;
    COMPATIBILITYCLASS(I_RU_SAM_System_04_F,O_R_SAM_System_04_F)
    COMPATIBILITYCLASS(O_RU_SAM_System_04_F,O_R_SAM_System_04_F)
    class O_R_Static_AT_F;
    COMPATIBILITYCLASS(I_RU_Static_AT_F,O_R_Static_AT_F)
    COMPATIBILITYCLASS(O_RU_Static_AT_F,O_R_Static_AT_F)
    class O_R_Static_Designator_02_F;
    COMPATIBILITYCLASS(O_R_Static_Designator_01_F,O_R_Static_Designator_02_F)
    COMPATIBILITYCLASS(I_RU_Static_Designator_01_F,O_R_Static_Designator_02_F)
    COMPATIBILITYCLASS(O_RU_Static_Designator_01_F,O_R_Static_Designator_02_F)
    class O_R_Radar_System_02_F;
    COMPATIBILITYCLASS(I_RU_Radar_System_02_F,O_R_Radar_System_02_F)
    COMPATIBILITYCLASS(O_RU_Radar_System_02_F,O_R_Radar_System_02_F)
    class O_R_Mortar_01_F;
    COMPATIBILITYCLASS(I_RU_Mortar_01_F,O_R_Mortar_01_F)
    COMPATIBILITYCLASS(O_RU_Mortar_01_F,O_R_Mortar_01_F)
    class O_R_GMG_01_A_F;
    COMPATIBILITYCLASS(I_RU_GMG_01_A_F,O_R_GMG_01_A_F)
    COMPATIBILITYCLASS(O_RU_GMG_01_A_F,O_R_GMG_01_A_F)
    class O_R_GMG_01_high_F;
    COMPATIBILITYCLASS(I_RU_GMG_01_high_F,O_R_GMG_01_high_F)
    COMPATIBILITYCLASS(O_RU_GMG_01_high_F,O_R_GMG_01_high_F)
    class O_R_GMG_01_F;
    COMPATIBILITYCLASS(I_RU_GMG_01_F,O_R_GMG_01_F)
    COMPATIBILITYCLASS(O_RU_GMG_01_F,O_R_GMG_01_F)
    class O_R_HMG_01_A_F;
    COMPATIBILITYCLASS(I_RU_HMG_01_A_F,O_R_HMG_01_A_F)
    COMPATIBILITYCLASS(O_RU_HMG_01_A_F,O_R_HMG_01_A_F)
    class O_R_HMG_01_high_F;
    COMPATIBILITYCLASS(I_RU_HMG_01_high_F,O_R_HMG_01_high_F)
    COMPATIBILITYCLASS(O_RU_HMG_01_high_F,O_R_HMG_01_high_F)
    class O_R_HMG_01_F;
    COMPATIBILITYCLASS(I_RU_HMG_01_F,O_R_HMG_01_F)
    COMPATIBILITYCLASS(O_RU_HMG_01_F,O_R_HMG_01_F)
    class B_G_Van_01_transport_F;
    COMPATIBILITYCLASS(B_G_Van_01_box_F,B_G_Van_01_transport_F)
    class I_G_Van_01_transport_F;
    COMPATIBILITYCLASS(I_G_Van_01_box_F,I_G_Van_01_transport_F)
    class B_T_UGV_01_olive_F;
    COMPATIBILITYCLASS(B_T_UGV_01_F,B_T_UGV_01_olive_F)
    class B_T_UGV_01_rcws_olive_F;
    COMPATIBILITYCLASS(B_T_UGV_01_rcws_F,B_T_UGV_01_rcws_olive_F)
    class B_A_LSV_01_armed_F;
    COMPATIBILITYCLASS(B_A_LSV_01_armed_specops_F,B_A_LSV_01_armed_F)
    class B_A_LSV_01_unarmed_F;
    COMPATIBILITYCLASS(B_A_LSV_01_unarmed_specops_F,B_A_LSV_01_unarmed_F)
    class B_LSV_01_armed_F;
    COMPATIBILITYCLASS(B_LSV_01_armed_specops_F,B_LSV_01_armed_F)
    class B_LSV_01_unarmed_F;
    COMPATIBILITYCLASS(B_LSV_01_unarmed_specops_F,B_LSV_01_unarmed_F)
    class B_T_LSV_01_armed_F;
    COMPATIBILITYCLASS(B_T_LSV_01_armed_specops_F,B_T_LSV_01_armed_F)
    class B_T_LSV_01_unarmed_F;
    COMPATIBILITYCLASS(B_T_LSV_01_unarmed_specops_F,B_T_LSV_01_unarmed_F)
    class B_MRAP_01_F;
    COMPATIBILITYCLASS(B_A_MRAP_01_F,B_MRAP_01_F)
    COMPATIBILITYCLASS(I_R_MRAP_01_F,B_MRAP_01_F)
    COMPATIBILITYCLASS(O_P_MRAP_01_F,B_MRAP_01_F)
    class B_MRAP_01_gmg_F;
    COMPATIBILITYCLASS(B_A_MRAP_01_gmg_F,B_MRAP_01_gmg_F)
    COMPATIBILITYCLASS(I_R_MRAP_01_gmg_F,B_MRAP_01_gmg_F)
    COMPATIBILITYCLASS(O_P_MRAP_01_gmg_F,B_MRAP_01_gmg_F)
    class B_MRAP_01_hmg_F;
    COMPATIBILITYCLASS(B_A_MRAP_01_hmg_F,B_MRAP_01_hmg_F)
    COMPATIBILITYCLASS(I_R_MRAP_01_hmg_F,B_MRAP_01_hmg_F)
    COMPATIBILITYCLASS(O_P_MRAP_01_hmg_F,B_MRAP_01_hmg_F)
    class O_Truck_02_Ammo_F;
    COMPATIBILITYCLASS(O_A_Truck_02_Ammo_F,O_Truck_02_Ammo_F)
    class O_Truck_02_box_F;
    COMPATIBILITYCLASS(O_A_Truck_02_box_F,O_Truck_02_box_F)
    class O_Truck_02_fuel_F;
    COMPATIBILITYCLASS(O_A_Truck_02_fuel_F,O_Truck_02_fuel_F)
    class O_Truck_02_medical_F;
    COMPATIBILITYCLASS(O_A_Truck_02_medical_F,O_Truck_02_medical_F)
    class O_Truck_02_MRL_F;
    COMPATIBILITYCLASS(O_A_Truck_02_MRL_F,O_Truck_02_MRL_F)
    class O_T_Truck_02_Ammo_F;
    COMPATIBILITYCLASS(O_T_Truck_02_Ammo_ghex_F,O_T_Truck_02_Ammo_F)
    class O_T_Truck_02_Box_F;
    COMPATIBILITYCLASS(O_T_Truck_02_box_ghex_F,O_T_Truck_02_Box_F)
    class O_T_Truck_02_F;
    COMPATIBILITYCLASS(O_T_Truck_02_covered_ghex_F,O_T_Truck_02_F)
    class O_T_Truck_02_fuel_F;
    COMPATIBILITYCLASS(O_T_Truck_02_fuel_ghex_F,O_T_Truck_02_fuel_F)
    class O_T_Truck_02_medical_F;
    COMPATIBILITYCLASS(O_T_Truck_02_medical_ghex_F,O_T_Truck_02_medical_F)
    class O_T_Truck_02_MRL_F;
    COMPATIBILITYCLASS(O_T_Truck_02_MRL_ghex_F,O_T_Truck_02_MRL_F)
    class O_T_Truck_02_transport_F;
    COMPATIBILITYCLASS(O_T_Truck_02_transport_ghex_F,O_T_Truck_02_transport_F)
    class O_LSV_02_armed_F;
    COMPATIBILITYCLASS(O_LSV_02_armed_specops_F,O_LSV_02_armed_F)
    class O_LSV_02_unarmed_F;
    COMPATIBILITYCLASS(O_LSV_02_unarmed_specops_F,O_LSV_02_unarmed_F)
    class O_T_LSV_02_armed_F;
    COMPATIBILITYCLASS(O_T_LSV_02_armed_specops_F,O_T_LSV_02_armed_F)
    class O_T_LSV_02_unarmed_F;
    COMPATIBILITYCLASS(O_T_LSV_02_unarmed_specops_F,O_T_LSV_02_unarmed_F)
    class O_R_LSV_02_armed_F;
    COMPATIBILITYCLASS(I_RU_LSV_02_armed_F,O_R_LSV_02_armed_F)
    COMPATIBILITYCLASS(O_RU_LSV_02_armed_F,O_R_LSV_02_armed_F)
    COMPATIBILITYCLASS(I_RU_LSV_02_armed_specops_F,O_R_LSV_02_armed_F)
    COMPATIBILITYCLASS(O_RU_LSV_02_armed_specops_F,O_R_LSV_02_armed_F)
    class O_R_LSV_02_AT_F;
    COMPATIBILITYCLASS(I_RU_LSV_02_AT_F,O_R_LSV_02_AT_F)
    COMPATIBILITYCLASS(O_RU_LSV_02_AT_F,O_R_LSV_02_AT_F)
    class O_R_LSV_02_unarmed_F;
    COMPATIBILITYCLASS(I_RU_LSV_02_unarmed_F,O_R_LSV_02_unarmed_F)
    COMPATIBILITYCLASS(O_RU_LSV_02_unarmed_F,O_R_LSV_02_unarmed_F)
    COMPATIBILITYCLASS(I_RU_LSV_02_unarmed_recon_F,O_R_LSV_02_unarmed_F)
    COMPATIBILITYCLASS(O_RU_LSV_02_unarmed_recon_F,O_R_LSV_02_unarmed_F)
    COMPATIBILITYCLASS(I_RU_LSV_02_unarmed_specops_F,O_R_LSV_02_unarmed_F)
    COMPATIBILITYCLASS(O_RU_LSV_02_unarmed_specops_F,O_R_LSV_02_unarmed_F)
    class O_R_UGV_01_F;
    COMPATIBILITYCLASS(I_RU_UGV_01_F,O_R_UGV_01_F)
    COMPATIBILITYCLASS(O_RU_UGV_01_F,O_R_UGV_01_F)
    class O_R_UGV_01_rcws_F;
    COMPATIBILITYCLASS(I_RU_UGV_01_rcws_F,O_R_UGV_01_rcws_F)
    COMPATIBILITYCLASS(O_RU_UGV_01_rcws_F,O_R_UGV_01_rcws_F)
    class O_R_Quadbike_01_F;
    COMPATIBILITYCLASS(I_RU_Quadbike_01_F,O_R_Quadbike_01_F)
    COMPATIBILITYCLASS(O_RU_Quadbike_01_F,O_R_Quadbike_01_F)
    class O_R_MRAP_02_F;
    COMPATIBILITYCLASS(I_RU_MRAP_02_F,O_R_MRAP_02_F)
    COMPATIBILITYCLASS(O_RU_MRAP_02_F,O_R_MRAP_02_F)
    class O_R_MRAP_02_gmg_F;
    COMPATIBILITYCLASS(I_RU_MRAP_02_gmg_F,O_R_MRAP_02_gmg_F)
    COMPATIBILITYCLASS(O_RU_MRAP_02_gmg_F,O_R_MRAP_02_gmg_F)
    class O_R_MRAP_02_hmg_F;
    COMPATIBILITYCLASS(I_RU_MRAP_02_hmg_F,O_R_MRAP_02_hmg_F)
    COMPATIBILITYCLASS(O_RU_MRAP_02_hmg_F,O_R_MRAP_02_hmg_F)
    class O_R_Truck_03_ammo_F;
    COMPATIBILITYCLASS(I_RU_Truck_03_ammo_F,O_R_Truck_03_ammo_F)
    COMPATIBILITYCLASS(O_RU_Truck_03_ammo_F,O_R_Truck_03_ammo_F)
    class O_R_Truck_03_covered_F;
    COMPATIBILITYCLASS(I_RU_Truck_03_covered_F,O_R_Truck_03_covered_F)
    COMPATIBILITYCLASS(O_RU_Truck_03_covered_F,O_R_Truck_03_covered_F)
    class O_R_Truck_03_fuel_F;
    COMPATIBILITYCLASS(I_RU_Truck_03_fuel_F,O_R_Truck_03_fuel_F)
    COMPATIBILITYCLASS(O_RU_Truck_03_fuel_F,O_R_Truck_03_fuel_F)
    class O_R_Truck_03_medical_F;
    COMPATIBILITYCLASS(I_RU_Truck_03_medical_F,O_R_Truck_03_medical_F)
    COMPATIBILITYCLASS(O_RU_Truck_03_medical_F,O_R_Truck_03_medical_F)
    class O_R_Truck_03_repair_F;
    COMPATIBILITYCLASS(I_RU_Truck_03_repair_F,O_R_Truck_03_repair_F)
    COMPATIBILITYCLASS(O_RU_Truck_03_repair_F,O_R_Truck_03_repair_F)
    class O_R_Truck_03_transport_F;
    COMPATIBILITYCLASS(I_RU_Truck_03_transport_F,O_R_Truck_03_transport_F)
    COMPATIBILITYCLASS(O_RU_Truck_03_transport_F,O_R_Truck_03_transport_F)
    class O_R_Truck_02_ammo_F;
    COMPATIBILITYCLASS(I_RU_Truck_02_ammo_F,O_R_Truck_02_ammo_F)
    COMPATIBILITYCLASS(O_RU_Truck_02_ammo_F,O_R_Truck_02_ammo_F)
    COMPATIBILITYCLASS(I_RU_Truck_02_covered_F,O_R_Truck_02_F)
    COMPATIBILITYCLASS(O_RU_Truck_02_covered_F,O_R_Truck_02_F)
    class O_R_Truck_02_fuel_F;
    COMPATIBILITYCLASS(I_RU_Truck_02_fuel_F,O_R_Truck_02_fuel_F)
    COMPATIBILITYCLASS(O_RU_Truck_02_fuel_F,O_R_Truck_02_fuel_F)
    class O_R_Truck_02_medical_F;
    COMPATIBILITYCLASS(I_RU_Truck_02_medical_F,O_R_Truck_02_medical_F)
    COMPATIBILITYCLASS(O_RU_Truck_02_medical_F,O_R_Truck_02_medical_F)
    class O_R_Truck_02_MRL_F;
    COMPATIBILITYCLASS(I_RU_Truck_02_MRL_F,O_R_Truck_02_MRL_F)
    COMPATIBILITYCLASS(O_RU_Truck_02_MRL_F,O_R_Truck_02_MRL_F)
    class O_R_Truck_02_box_F;
    COMPATIBILITYCLASS(I_RU_Truck_02_box_F,O_R_Truck_02_box_F)
    COMPATIBILITYCLASS(O_RU_Truck_02_box_F,O_R_Truck_02_box_F)
    COMPATIBILITYCLASS(I_RU_Truck_02_repair_F,O_R_Truck_02_box_F)
    COMPATIBILITYCLASS(O_RU_Truck_02_repair_F,O_R_Truck_02_box_F)
    class O_R_Truck_02_transport_F;
    COMPATIBILITYCLASS(I_RU_Truck_02_transport_F,O_R_Truck_02_transport_F)
    COMPATIBILITYCLASS(O_RU_Truck_02_transport_F,O_R_Truck_02_transport_F)
    class O_R_CargoNet_01_ammo_F;
    COMPATIBILITYCLASS(I_RU_CargoNet_01_ammo_F,O_R_CargoNet_01_ammo_F)
    class Weapon_arifle_Mk20_F;
    COMPATIBILITYCLASS(Weapon_arifle_Mk20_olive_F,Weapon_arifle_Mk20_F)
    class Weapon_arifle_Mk20_GL_F;
    COMPATIBILITYCLASS(Weapon_arifle_Mk20_GL_olive_F,Weapon_arifle_Mk20_GL_F)
    class Weapon_arifle_Mk20C_F;
    COMPATIBILITYCLASS(Weapon_arifle_Mk20C_olive_F,Weapon_arifle_Mk20C_F)
    class Weapon_hgun_G17_black_F;
    COMPATIBILITYCLASS(Weapon_hgun_G17_blk_F,Weapon_hgun_G17_black_F)
    class Weapon_hgun_G17_khaki_F;
    COMPATIBILITYCLASS(Weapon_hgun_G17_khk_F,Weapon_hgun_G17_khaki_F)
    class Weapon_sgun_KSG_F;
    COMPATIBILITYCLASS(Weapon_sgun_KSG_black_F,Weapon_sgun_KSG_F)
    class Weapon_arifle_SDAR_F;
    COMPATIBILITYCLASS(Weapon_arifle_RFB_F,Weapon_arifle_SDAR_F)
    class Weapon_arifle_SA80_blk_F;
    COMPATIBILITYCLASS(Weapon_arifle_SA80_C_F,Weapon_arifle_SA80_blk_F)
    class Weapon_arifle_SA80_snd_F;
    COMPATIBILITYCLASS(Weapon_arifle_SA80_C_sand_F,Weapon_arifle_SA80_snd_F)
    COMPATIBILITYCLASS(Weapon_arifle_SA80_F,Weapon_arifle_SA80_blk_F)
    COMPATIBILITYCLASS(Weapon_arifle_SA80_sand_F,Weapon_arifle_SA80_snd_F)
    class Weapon_arifle_SA80_GL_blk_F;
    COMPATIBILITYCLASS(Weapon_arifle_SA80_GL_F,Weapon_arifle_SA80_GL_blk_F)
    class Weapon_arifle_SA80_GL_snd_F;
    COMPATIBILITYCLASS(Weapon_arifle_SA80_GL_sand_F,Weapon_arifle_SA80_GL_snd_F)
    class Weapon_hgun_P07_F;
    COMPATIBILITYCLASS(Weapon_hgun_Pistol_02_camo_F,Weapon_hgun_P07_F)
    COMPATIBILITYCLASS(Weapon_hgun_Pistol_02_F,Weapon_hgun_P07_F)
    COMPATIBILITYCLASS(Weapon_hgun_Pistol_02_khk_F,Weapon_hgun_P07_F)
    COMPATIBILITYCLASS(Weapon_hgun_Pistol_02_snd_F,Weapon_hgun_P07_F)
    COMPATIBILITYCLASS(Weapon_hgun_Pistol_02_tna_F,Weapon_hgun_P07_F)
    class Weapon_srifle_EBR_F;
    COMPATIBILITYCLASS(Weapon_arifle_FAL_F,Weapon_srifle_EBR_F)
    class Weapon_launch_O_Titan_F;
    COMPATIBILITYCLASS(Weapon_launch_O_Volga_brown_F,Weapon_launch_O_Titan_F)
    class Weapon_launch_O_Titan_ghex_F;
    COMPATIBILITYCLASS(Weapon_launch_O_Volga_green_F,Weapon_launch_O_Titan_ghex_F)
    class Weapon_arifle_MXC_F;
    COMPATIBILITYCLASS(Weapon_arifle_M8_short_F,Weapon_arifle_MXC_F)
    class Weapon_arifle_MX_F;
    COMPATIBILITYCLASS(Weapon_arifle_M8_F,Weapon_arifle_MX_F)
    class Weapon_arifle_MX_GL_F;
    COMPATIBILITYCLASS(Weapon_arifle_M8_GL_F,Weapon_arifle_MX_GL_F)
    class Weapon_arifle_MXM_F;
    COMPATIBILITYCLASS(Weapon_arifle_M8_long_F,Weapon_arifle_MXM_F)
    class Weapon_arifle_MX_SW_F;
    COMPATIBILITYCLASS(Weapon_arifle_M8_SAW_F,Weapon_arifle_MX_SW_F)
    COMPATIBILITYCLASS(Weapon_arifle_Mk16_blk_F,Weapon_arifle_MX_F)
    COMPATIBILITYCLASS(Weapon_arifle_Mk16_F,Weapon_arifle_MX_F)
    COMPATIBILITYCLASS(Weapon_arifle_Mk16_GL_blk_F,Weapon_arifle_MX_GL_F)
    COMPATIBILITYCLASS(Weapon_arifle_Mk16_GL_F,Weapon_arifle_MX_GL_F)
    COMPATIBILITYCLASS(Weapon_arifle_Mk16_GL_khk_F,Weapon_arifle_MX_GL_F)
    COMPATIBILITYCLASS(Weapon_arifle_Mk16_khk_F,Weapon_arifle_MX_F)
    COMPATIBILITYCLASS(Weapon_arifle_Mk16_long_blk_F,Weapon_arifle_MX_SW_F)
    COMPATIBILITYCLASS(Weapon_arifle_Mk16_long_F,Weapon_arifle_MX_SW_F)
    COMPATIBILITYCLASS(Weapon_arifle_Mk16_long_khk_F,Weapon_arifle_MX_SW_F)
    COMPATIBILITYCLASS(Weapon_arifle_Mk16_short_blk_F,Weapon_arifle_MXC_F)
    COMPATIBILITYCLASS(Weapon_arifle_Mk16_short_F,Weapon_arifle_MXC_F)
    COMPATIBILITYCLASS(Weapon_arifle_Mk16_short_khk_F,Weapon_arifle_MXC_F)
    COMPATIBILITYCLASS(Weapon_arifle_Mk17_blk_F,Weapon_arifle_MX_F)
    COMPATIBILITYCLASS(Weapon_arifle_Mk17_F,Weapon_arifle_MX_F)
    COMPATIBILITYCLASS(Weapon_arifle_Mk17_GL_blk_F,Weapon_arifle_MX_GL_F)
    COMPATIBILITYCLASS(Weapon_arifle_Mk17_GL_F,Weapon_arifle_MX_GL_F)
    COMPATIBILITYCLASS(Weapon_arifle_Mk17_GL_khk_F,Weapon_arifle_MX_GL_F)
    COMPATIBILITYCLASS(Weapon_arifle_Mk17_khk_F,Weapon_arifle_MX_F)
    COMPATIBILITYCLASS(Weapon_arifle_Mk17_long_blk_F,Weapon_arifle_MX_SW_F)
    COMPATIBILITYCLASS(Weapon_arifle_Mk17_long_F,Weapon_arifle_MX_SW_F)
    COMPATIBILITYCLASS(Weapon_arifle_Mk17_long_khk_F,Weapon_arifle_MX_SW_F)
    COMPATIBILITYCLASS(Weapon_arifle_Mk17_short_blk_F,Weapon_arifle_MXC_F)
    COMPATIBILITYCLASS(Weapon_arifle_Mk17_short_F,Weapon_arifle_MXC_F)
    COMPATIBILITYCLASS(Weapon_arifle_Mk17_short_khk_F,Weapon_arifle_MXC_F)
    class Weapon_MMG_01_black_F;
    COMPATIBILITYCLASS(Weapon_MMG_03_F,Weapon_MMG_01_black_F)
    class Item_O_R_UavTerminal;
    COMPATIBILITYCLASS(Item_R_UavTerminal,Item_O_R_UavTerminal)
    class Weapon_srifle_DMR_04_F;
    COMPATIBILITYCLASS(Weapon_srifle_DMR_04_green_F,Weapon_srifle_DMR_04_F)
    class Weapon_srifle_DMR_05_blk_F;
    COMPATIBILITYCLASS(Weapon_srifle_DMR_05_green_F,Weapon_srifle_DMR_05_blk_F)
    class Weapon_SMG_04_blk_F;
    COMPATIBILITYCLASS(Weapon_SMG_04_F,Weapon_SMG_04_blk_F)
    class Weapon_arifle_AK12U_F;
    COMPATIBILITYCLASS(Weapon_arifle_AK105_F,Weapon_arifle_AK12U_F)
    class Weapon_arifle_AK12_F;
    COMPATIBILITYCLASS(Weapon_arifle_AK107_F,Weapon_arifle_AK12_F)
    class Weapon_arifle_AK12_GL_F;
    COMPATIBILITYCLASS(Weapon_arifle_AK107_GL_F,Weapon_arifle_AK12_GL_F)
};