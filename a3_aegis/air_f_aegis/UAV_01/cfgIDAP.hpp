class C_IDAP_UAV_01_F: UAV_01_base_F
{
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
        {
			class OpticsIn: OpticsIn
            {
				class Wide: Wide
                {
					visionMode[] = {Normal};
                };
				class Medium: Medium
                {
					visionMode[] = {Normal};
                };
				class Narrow: Narrow
                {
					visionMode[] = {Normal};
                };
            };
        };
    };
};