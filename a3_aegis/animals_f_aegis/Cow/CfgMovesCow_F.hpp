class CfgMovesCow_F: CfgMovesAnimal_Base_F
{
	skeletonName = Cow_F_skeleton;
	collisionVertexPattern[] =
    {
        1a,
        2a,
        3a,
        4a,
        5a,
        6a,
        7a,
        8a
    };
	collisionGeomCompPattern[] = {1};
	class Default: Default
	{
		actions = CowActions;
		collisionShape = "\A3_Aegis\Animals_F_Aegis\Cow\Cow_CollShape.p3d";
	};
	class StandBase: Default{};
	class DefaultDie: Default{};
	class States
	{
		class Cow_Idle_Stop: StandBase
		{
			duty = -1;
			file = "\A3_Aegis\Animals_F_Aegis\Cow\Data\Anim\cowStop.rtm";
			variantsAI[] =
			{
				Cow_Idle_Eat,0.6,
				Cow_Idle_Walk,0.3,
				Cow_Idle_Run,0.1
			};
			variantsPlayer[] = {};
			variantAfter[] = {3,6,9};
			interpolateTo[] =
			{
				Cow_Idle_Stop,0.1,
				Cow_Idle_Walk,0.1,
				Cow_Idle_Eat,0.1,
				Cow_Idle_Run,0.1,
				Cow_Stop,0.5,
				Cow_Walk,0.5,
				Cow_Run,0.5,
				Cow_Die,0.1
			};
			connectTo[] = {};
			preload = 1;
			speed = 1;
		};
		class Cow_TurnL: Cow_Idle_Stop
		{
			file = "\A3_Aegis\Animals_F_Aegis\Cow\Data\Anim\cow_rotateL.rtm";
			variantsAI[] = {};
			connectTo[] = {Cow_Idle_Stop,0.1};
			interpolateTo[] =
			{
				Cow_Idle_Stop,0.1,
				Cow_Die,0.1
			};
			speed = 1;
		};
		class Cow_TurnR: Cow_TurnL
		{
			file = "\A3_Aegis\Animals_F_Aegis\Cow\Data\Anim\cow_rotateR.rtm";
		};
		class Cow_Idle_Eat: Cow_Idle_Stop
		{
			speed = -9;
			variantsAI[] = {};
			looped = true;
			file = "\A3_Aegis\Animals_F_Aegis\Cow\Data\Anim\cowEat.rtm";
			connectTo[] = {Cow_Idle_Eat,0.1};
			interpolateTo[] =
			{
				Cow_Idle_Run,0.1,
				Cow_Idle_Walk,0.1,
				Cow_Idle_Stop,0.1,
				Cow_Stop,0.5,
				Cow_Walk,0.5,
				Cow_Run,0.5,
				Cow_Die,0.1
			};
		};
		class Cow_Idle_Walk: Cow_Idle_Stop
		{
			duty = -0.7;
			file = "\A3_Aegis\Animals_F_Aegis\Cow\Data\Anim\cowWalk.rtm";
			speed = 1;
			variantsAI[] = {};
			looped = true;
			head = headDefault;
			connectTo[] = {Cow_Idle_Stop,0.1};
			interpolateTo[] =
			{
				Cow_Idle_Run,0.1,
				Cow_Idle_Eat,0.1,
				Cow_Idle_Stop,0.1,
			    Cow_Stop,0.5,
				Cow_Walk,0.5,
				Cow_Run,0.5,
				Cow_Die,0.1
			};
		};
		class Cow_Idle_Run: Cow_Idle_Stop
		{
			duty = -0.5;
			file = "\A3_Aegis\Animals_F_Aegis\Cow\Data\Anim\cowRun.rtm";
			speed = 1;
			variantsAI[] = {};
			looped = true;
			connectTo[] = {Cow_Idle_Run,0.1};
			interpolateTo[] =
			{
				Cow_Idle_Eat,0.1,
				Cow_Idle_Walk,0.1,
				Cow_Idle_Stop,0.1,
				Cow_Stop,0.5,
				Cow_Walk,0.5,
				Cow_Run,0.5,
				Cow_Die,0.1
			};
		};
		class Cow_Die: DefaultDie
		{
			file = "\A3_Aegis\Animals_F_Aegis\Cow\Data\Anim\cowDeath.rtm";
			speed = 1;
			actions = NoActions;
			looped = false;
			terminal = true;
			variantsPlayer[] = {};
			variantsAI[] = {};
			variantAfter[] = {0,0,0};
		};
        class Cow_Stop: Cow_Idle_Stop
		{
			variantsAI[] = {};
			actions = CowForceStop;
			connectTo[] = {Cow_Stop,0.02};
			interpolateTo[] =
			{
				Cow_Idle_Stop,0.02,
				Cow_Walk,0.02,
				Cow_Run,0.02,
				Cow_Die,0.02
			};
		};
		class Cow_Walk: Cow_Idle_Walk
		{
			actions = CowForceWalk;
			connectTo[] = {Cow_Walk,0.02};
			connectFrom[] =
            {
				Cow_Idle_Stop,0.02,
				Cow_Walk,0.02,
				Cow_Run,0.02,
				Cow_Die,0.02
            };
		};
		class Cow_Run: Cow_Idle_Run
		{
			actions = CowForceRun;
			connectTo[] = {Cow_Run,0.02};
			connectFrom[] =
            {
				Cow_Idle_Stop,0.02,
				Cow_Walk,0.02,
				Cow_Run,0.02,
				Cow_Die,0.02
            };
		};
	};
	class Actions: Actions
	{
		class NoActions: NoActions{};
		class CowActions: NoActions
		{
			Stop = Cow_Idle_Stop;
			StopRelaxed = Cow_Idle_Eat;
			TurnL = Cow_TurnL;
			TurnR = Cow_TurnR;
			TurnLRelaxed = Cow_TurnL;
			TurnRRelaxed = Cow_TurnR;
			Default = Cow_Idle_Stop;
			JumpOff = Cow_Idle_Stop;
			WalkF = Cow_Idle_Walk;
			SlowF = Cow_Idle_Walk;
			FastF = Cow_Idle_Run;
			EvasiveForward = Cow_Idle_Run;
			Down = Cow_Idle_Stop;
			Up = Cow_Idle_Stop;
			PlayerStand = Cow_Idle_Stop;
			PlayerCrouch = Cow_Idle_Stop;
			PlayerProne = Cow_Idle_Stop;
			Lying = Cow_Idle_Stop;
			Stand = Cow_Idle_Stop;
			Combat = Cow_Idle_Stop;
			Crouch = Cow_Idle_Stop;
			CanNotMove = Cow_Idle_Stop;
			Civil = Cow_Idle_Stop;
			CivilLying = Cow_Idle_Stop;
			FireNotPossible = Cow_Idle_Stop;
			Die = Cow_Die;
			Eat = Cow_Idle_Eat;
			Rest = Cow_Idle_Eat;
			turnSpeed = 2;
			limitFast = 5.5;
			useFastMove = false;
			upDegree = ManPosNoWeapon;
		};
		class CowForceStop: CowActions
		{
			CivilLying = Cow_Stop;
		};
		class CowForceWalk: CowActions
		{
			CivilLying = Cow_Walk;
		};
		class CowForceRun: CowActions
		{
			CivilLying = Cow_Run;
		};
	};
	class BlendAnims: BlendAnims
	{
		aimingDefault[] =
        {
			head,1,
			leftEar,1,
			rightEar,1
		};
		headDefault[] =
        {
			head,1,
            neck1,1,
            neck,0.8,
            //headEnd,1,			
			Spine2,0.2
		};
	};
};