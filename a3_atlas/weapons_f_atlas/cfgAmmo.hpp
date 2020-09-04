class CfgAmmo
{
	// Arma 3
	class BulletBase;
	class B_20mm;
	class B_25mm;
	class B_IRStrobe;
	class I_IRStrobe;
	// Arma 3 Marksman
    class B_93x64_Ball;
	// Arma 3 Atlas
	class B_20mm_Tracer_Yellow: B_20mm
	{
		model = "\A3\Weapons_F\Data\bullettracer\tracer_yellow.p3d";
	};
	class B_25mm_Tracer_Yellow: B_25mm
	{
		model = "\A3\Weapons_F\Data\bullettracer\tracer_yellow.p3d";
	};
    /*
	class B_O_IRStrobe: B_IRStrobe{};
	class I_W_IRStrobe: I_IRStrobe{};
    */
	class I_I_IRStrobe: I_IRStrobe{};
    class B_93x64_Ball_Tracer_Red: B_93x64_Ball
	{
		model = "\A3\Weapons_F\Data\BulletTracer\tracer_red.p3d";
	};
};