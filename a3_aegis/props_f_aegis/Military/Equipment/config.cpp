#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
class CfgVehicles
{
	class NonStrategic;
	class Land_DataTerminal_01_F: NonStrategic
	{
		simulation = fountain;
		sound = DataTerminalLoop;
	};
	class Strategic;
	class Land_Device_assembled_F: Strategic
	{
		simulation = fountain;
		sound = Device_assembled_loop;
	};
	class Land_Device_disassembled_F: Land_Device_assembled_F
	{
		simulation = fountain;
		sound = Device_disassembled_loop;
	};
};
