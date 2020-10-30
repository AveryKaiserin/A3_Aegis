class CfgVehicles
{
    // Arma 3
    class Car_F;
	class Wheeled_APC_F: Car_F
	{
		class Sounds: Sounds
		{
			class Engine;
			class Movement;
		};
    };
    // Arma 3 Atlas
	class APC_Wheeled_04_base_F: Wheeled_APC_F{};
};