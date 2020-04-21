// common definition for all vectors projected into HUD space
enableParallax = true; 
#define PosY0CenterAdjust 0.50 //from top
#define PosYCenterHorizont 0.50 //0.33 for center (old helmet position 0.017 Y)
#define PosY0Center 0.50
#define PosX0Center 0.50
#define SizeX10deg 0.2113243709752
#define SizeY10deg 0.2931048289372

#define fontSizeSmall	0.03	//small font height
#define fontSizeMed		0.04	//medium font height
#define fontBreakSmall	0.001	//line break height (small font)
#define fontSizeLarge	0.05

#define fontSizeLadder 0.05

#define XtoYscale  (SizeX10deg/SizeY10deg) // =~ 0.72 (aspect ratio?)



#define XY_Scaled(xx,yy) __EVAL(xx),__EVAL((yy)/(XtoYscale))

#define CIRCLE(bone,scale) \
{bone,{0,__EVAL(-scale/XtoYscale)},1},{bone,{__EVAL(+0.7*scale),__EVAL(-0.7*scale/XtoYscale)},1}, \
{bone,{+scale,0},1},                  {bone,{__EVAL(+0.7*scale),__EVAL(+0.7*scale/XtoYscale)},1}, \
{bone,{0,__EVAL(+scale/XtoYscale)},1},{bone,{__EVAL(-0.7*scale),__EVAL(+0.7*scale/XtoYscale)},1}, \
{bone,{-scale,0},1},                  {bone,{__EVAL(-0.7*scale),__EVAL(-0.7*scale/XtoYscale)},1}, \
{bone,{0,__EVAL(-scale/XtoYscale)},1}

//#define CIRCLE_FWD(bone1,bone2,scale) \
//{bone1,1,bone2,{0,__EVAL(-scale/XtoYscale)},1},{bone1,1,bone2,{__EVAL(+0.7*scale),__EVAL(-0.7*scale/XtoYscale)},1}, \
//{bone1,1,bone2,{+scale,0},1},                  {bone1,1,bone2,{__EVAL(+0.7*scale),__EVAL(+0.7*scale/XtoYscale)},1}, \
//{bone1,1,bone2,{0,__EVAL(+scale/XtoYscale)},1},{bone1,1,bone2,{__EVAL(-0.7*scale),__EVAL(+0.7*scale/XtoYscale)},1}, \
//{bone1,1,bone2,{-scale,0},1},                  {bone1,1,bone2,{__EVAL(-0.7*scale),__EVAL(-0.7*scale/XtoYscale)},1}, \
//{bone1,1,bone2,{0,__EVAL(-scale/XtoYscale)},1}

#define CIRCLE_BIG(bone,scale) \
{bone,{0,__EVAL(-scale/XtoYscale)},1},{bone,{__EVAL(+0.50*scale),__EVAL(-0.87*scale/XtoYscale)},1},{bone,{__EVAL(+0.87*scale),__EVAL(-0.50*scale/XtoYscale)},1}, \
{bone,{__EVAL(+scale),0},1},                  {bone,{__EVAL(+0.87*scale),__EVAL(+0.50*scale/XtoYscale)},1},{bone,{__EVAL(+0.50*scale),__EVAL(+0.87*scale/XtoYscale)},1}, \
{bone,{0,__EVAL(+scale/XtoYscale)},1},{bone,{__EVAL(-0.50*scale),__EVAL(+0.87*scale/XtoYscale)},1},{bone,{__EVAL(-0.87*scale),__EVAL(+0.50*scale/XtoYscale)},1}, \
{bone,{__EVAL(-scale),0},1},                  {bone,{__EVAL(-0.87*scale),__EVAL(-0.50*scale/XtoYscale)},1},{bone,{__EVAL(-0.50*scale),__EVAL(-0.87*scale/XtoYscale)},1}, \
{bone,{0,__EVAL(-scale/XtoYscale)},1}


#define POINT_ON_CIRCLE(bone,scale,angle) {bone,{__EVAL(sin(angle)*scale),__EVAL(cos(angle)*scale/XtoYscale)},1}

#define CIRCLE_BIG2(bone,scale) \
POINT_ON_CIRCLE(bone,scale,0),POINT_ON_CIRCLE(bone,scale,15),POINT_ON_CIRCLE(bone,scale,30),POINT_ON_CIRCLE(bone,scale,45),POINT_ON_CIRCLE(bone,scale,60), \
POINT_ON_CIRCLE(bone,scale,75),POINT_ON_CIRCLE(bone,scale,90),POINT_ON_CIRCLE(bone,scale,105),POINT_ON_CIRCLE(bone,scale,120),POINT_ON_CIRCLE(bone,scale,135), \
POINT_ON_CIRCLE(bone,scale,150),POINT_ON_CIRCLE(bone,scale,165),POINT_ON_CIRCLE(bone,scale,180),POINT_ON_CIRCLE(bone,scale,195),POINT_ON_CIRCLE(bone,scale,210), \
POINT_ON_CIRCLE(bone,scale,225),POINT_ON_CIRCLE(bone,scale,240),POINT_ON_CIRCLE(bone,scale,255),POINT_ON_CIRCLE(bone,scale,270),POINT_ON_CIRCLE(bone,scale,285), \
POINT_ON_CIRCLE(bone,scale,300),POINT_ON_CIRCLE(bone,scale,315),POINT_ON_CIRCLE(bone,scale,330),POINT_ON_CIRCLE(bone,scale,345),POINT_ON_CIRCLE(bone,scale,360)

#define POINT_ON_CIRCLE_FWD(bone1,bone2,scale,angle) {bone1,1,bone2,{__EVAL(sin(angle)*scale),__EVAL(cos(angle)*scale/XtoYscale)},1}

#define CIRCLE_BIG2_FWD(bone1,bone2,scale) \
POINT_ON_CIRCLE_FWD(bone1,bone2,scale,0),POINT_ON_CIRCLE_FWD(bone1,bone2,scale,15),POINT_ON_CIRCLE_FWD(bone1,bone2,scale,30),POINT_ON_CIRCLE_FWD(bone1,bone2,scale,45),POINT_ON_CIRCLE_FWD(bone1,bone2,scale,60), \
POINT_ON_CIRCLE_FWD(bone1,bone2,scale,75),POINT_ON_CIRCLE_FWD(bone1,bone2,scale,90),POINT_ON_CIRCLE_FWD(bone1,bone2,scale,105),POINT_ON_CIRCLE_FWD(bone1,bone2,scale,120),POINT_ON_CIRCLE_FWD(bone1,bone2,scale,135), \
POINT_ON_CIRCLE_FWD(bone1,bone2,scale,150),POINT_ON_CIRCLE_FWD(bone1,bone2,scale,165),POINT_ON_CIRCLE_FWD(bone1,bone2,scale,180),POINT_ON_CIRCLE_FWD(bone1,bone2,scale,195),POINT_ON_CIRCLE_FWD(bone1,bone2,scale,210), \
POINT_ON_CIRCLE_FWD(bone1,bone2,scale,225),POINT_ON_CIRCLE_FWD(bone1,bone2,scale,240),POINT_ON_CIRCLE_FWD(bone1,bone2,scale,255),POINT_ON_CIRCLE_FWD(bone1,bone2,scale,270),POINT_ON_CIRCLE_FWD(bone1,bone2,scale,285), \
POINT_ON_CIRCLE_FWD(bone1,bone2,scale,300),POINT_ON_CIRCLE_FWD(bone1,bone2,scale,315),POINT_ON_CIRCLE_FWD(bone1,bone2,scale,330),POINT_ON_CIRCLE_FWD(bone1,bone2,scale,345),POINT_ON_CIRCLE_FWD(bone1,bone2,scale,360)


#define CIRCLE_MARK(bone,scaleIn,scaleOut,angle) \
{bone,{__EVAL((scaleIn) *sin(angle)),__EVAL(-(scaleIn) *cos(angle)/XtoYscale)},1}, \
{bone,{__EVAL((scaleOut)*sin(angle)),__EVAL(-(scaleOut)*cos(angle)/XtoYscale)},1}

#define CIRCLE_MARK_CENTER(XX,YY,scaleIn,scaleOut,angle) \
{{__EVAL(XX+(scaleIn) *sin(angle)),__EVAL(YY -(scaleIn) *cos(angle)/XtoYscale)},1}, \
{{__EVAL(XX+(scaleOut)*sin(angle)),__EVAL(YY -(scaleOut)*cos(angle)/XtoYscale)},1}

#define HORIZON_BANK_ROT_MARKER(scale, length, angle) \
{ForwardVec, 1, planeW, { __EVAL(sin(angle)*(scale)), __EVAL(cos(angle)*(scale) / XtoYscale) }, 1}, \
{ForwardVec, 1, planeW, { __EVAL(sin(angle)*(scale + length)), __EVAL(cos(angle)*(scale + length) / XtoYscale) }, 1}

#define POINT(bone,xx,yy) {bone,{__EVAL(xx),__EVAL((yy)/(XtoYscale))},1}

#define POINT2(xx,yy) {{__EVAL(xx),__EVAL((yy)/(XtoYscale))},1}

#define POINT_END() {}




#define DEF_HORIZONTPlus(XX) \
	class LevelP##XX\
	{\
		type=line;\
		width=1.2;\
		points[]=\
		{\
			{LevelP##XX, {-0.18,0.015},1,ForwardVec,1},\
			{LevelP##XX, {-0.18,0},1,ForwardVec,1},\
			{LevelP##XX, {-0.065,0},1,ForwardVec,1},\
			{},\
			{LevelP##XX,{ 0.065,0},1,ForwardVec,1},\
			{LevelP##XX,{ 0.18,0},1,ForwardVec,1},\
			{LevelP##XX,{ 0.18,0.015},1,ForwardVec,1}\
		};\
	}; \
	class VALP_1_##XX\
	{\
		type=text;\
		source=static;\
		text=#XX;\
		align=left;\
		scale=1;\
		sourceScale=1;\
		pos[]={LevelP##XX,{__EVAL(-0.205),-0.02},1,ForwardVec,1};\
		right[]={LevelP##XX,{__EVAL((fontSizeLadder*0.75)-0.205),-0.02},1,ForwardVec,1};\
		down[]={LevelP##XX,{-0.205,__EVAL(fontSizeLadder-0.02)},1,ForwardVec,1};\
	};\
class VALP_2_##XX\
	{\
		type=text;\
		source=static;\
		text=#XX;\
		align=right;\
		scale=1;\
		sourceScale=1;\
		pos[]={LevelP##XX,{__EVAL(0.205),-0.02},1,ForwardVec,1};\
		right[]={LevelP##XX,{__EVAL((fontSizeLadder*0.75)+0.205),-0.02},1,ForwardVec,1};\
		down[]={LevelP##XX,{0.205,__EVAL(fontSizeLadder-0.02)},1,ForwardVec,1};\
	};

#define DEF_HORIZONTMinus(XX) \
	class LevelM##XX\
	{\
		type=line;\
		width=1.2;\
		points[]=\
		{\
						{LevelM##XX, { -0.18, -0.015 },1,ForwardVec,1},\
						{LevelM##XX, { -0.18, -0.005 },1,ForwardVec,1},\
			{}, \
						{LevelM##XX, { -0.175, 0 },1,ForwardVec,1},\
						{LevelM##XX, { -0.165, 0 },1,ForwardVec,1},\
			{}, \
						{LevelM##XX, { -0.155, 0 },1,ForwardVec,1},\
						{LevelM##XX, { -0.145, 0 },1,ForwardVec,1},\
			{}, \
						{LevelM##XX, { -0.135, 0 },1,ForwardVec,1},\
						{LevelM##XX, { -0.125, 0 },1,ForwardVec,1},\
			{}, \
						{LevelM##XX, { -0.115, 0 },1,ForwardVec,1},\
						{LevelM##XX, { -0.105, 0 },1,ForwardVec,1},\
			{}, \
						{LevelM##XX, { -0.095, 0 },1,ForwardVec,1},\
						{LevelM##XX, { -0.085, 0 },1,ForwardVec,1},\
			{}, \
						{LevelM##XX, { -0.075, 0 },1,ForwardVec,1},\
						{LevelM##XX, { -0.065, 0 },1,ForwardVec,1},\
			{}, \
						{LevelM##XX, { 0.18, -0.015 }, 1, ForwardVec, 1}, \
						{LevelM##XX, { 0.18, -0.005 },1,ForwardVec,1},\
			{}, \
						{LevelM##XX, { 0.175, 0 },1,ForwardVec,1},\
						{LevelM##XX, { 0.165, 0 },1,ForwardVec,1},\
			{}, \
						{LevelM##XX, { 0.155, 0 },1,ForwardVec,1},\
						{LevelM##XX, { 0.145, 0 },1,ForwardVec,1},\
			{}, \
						{LevelM##XX, { 0.135, 0 },1,ForwardVec,1},\
						{LevelM##XX, { 0.125, 0 },1,ForwardVec,1},\
			{}, \
						{LevelM##XX, { 0.115, 0 },1,ForwardVec,1},\
						{LevelM##XX, { 0.105, 0 },1,ForwardVec,1},\
			{}, \
						{LevelM##XX, { 0.095, 0 },1,ForwardVec,1},\
						{LevelM##XX, { 0.085, 0 },1,ForwardVec,1},\
			{}, \
						{LevelM##XX, { 0.075, 0 },1,ForwardVec,1},\
						{LevelM##XX, { 0.065, 0 },1,ForwardVec,1}\
		};\
	}; \
	class VALM_1_##XX \
	{ \
		type=text; \
		source=static; \
		text=-##XX; \
		align=right; \
		scale=1;\
		sourceScale=1; \
		pos[]={LevelM##XX,{ 0.205, -0.04 },1,ForwardVec,1}; \
		right[]={LevelM##XX,{__EVAL((fontSizeLadder*0.75)+0.205), -0.04},1,ForwardVec,1}; \
		down[]={LevelM##XX,{ 0.205, __EVAL(fontSizeLadder-0.04)},1,ForwardVec,1}; \
	};\
	class VALM_2_##XX\
	{\
		type=text;\
		source=static;\
		text=-##XX;\
		align=left;\
		scale=1;\
		sourceScale=1;\
		pos[]={LevelM##XX,{ -0.205, -0.04 },1,ForwardVec,1};\
		right[]={LevelM##XX,{__EVAL((fontSizeLadder*0.75)-0.205), -0.04},1,ForwardVec,1};\
		down[]={LevelM##XX,{ -0.205, __EVAL(fontSizeLadder-0.04)},1,ForwardVec,1};\
	};

 #define DEF_WAYPOINTMARKER(XX) \
	class waypointIndicator##XX \
		{ \
		class value_1_group##XX \
			{ \
			clipTL[] = { 0.523, 0 }; \
			clipBR[] = { 1, 1 }; \
			class value_1##XX \
				{\
				type = text; \
				source = static; \
				text = ##XX; \
				sourceScale = 1; \
				scale = 1; \
				align = center; \
				pos[] = { waypointIndicator, { __EVAL(0.5 + ((7.2/360)*XX)) , 0.005 }, 1 }; \
				right[] = { waypointIndicator, { __EVAL((fontSizeMed*0.75) + 0.5 + ((7.2 / 360)*XX)), 0.005 }, 1 }; \
				down[] = { waypointIndicator, { __EVAL(0.5 + ((7.2 / 360)*XX)) , __EVAL(0.005 + fontSizeMed) }, 1 }; \
				};\
		};\
		class value_2_group##XX \
			{ \
			clipTL[] = { 0, 0 }; \
			clipBR[] = { 0.477, 1 }; \
			class value_2##XX \
				{ \
				type = text; \
				source = static; \
				text = ##XX; \
				sourceScale = 1; \
				scale = 1; \
				align = center; \
				pos[] = { waypointIndicator, { __EVAL(0.5 + ((7.2/360)*XX) - 7.2), 0.005 }, 1 }; \
				right[] = { waypointIndicator, { __EVAL((fontSizeMed*0.75) + 0.5 + ((7.2 / 360)*XX) - 7.2), 0.005 }, 1 }; \
				down[] = { waypointIndicator, { __EVAL(0.5 + ((7.2 / 360)*XX) - 7.2), __EVAL(0.005 + fontSizeMed) }, 1 }; \
				}; \
		}; \
		class value_3_group##XX \
			{ \
			clipTL[] = { 0, 0 }; \
			clipBR[] = { 0.477, 1 }; \
			class value_3##XX \
								{\
				type = text; \
				source = static; \
				text = ##XX; \
				sourceScale = 1; \
				scale = 1; \
				align = center; \
				pos[] = { waypointIndicator, { __EVAL(0.5 + ((7.2/360)*XX)) , 0.005 }, 1 }; \
				right[] = { waypointIndicator, { __EVAL((fontSizeMed*0.75) + 0.5 + ((7.2 / 360)*XX)), 0.005 }, 1 }; \
				down[] = { waypointIndicator, { __EVAL(0.5 + ((7.2 / 360)*XX)) , __EVAL(0.005 + fontSizeMed) }, 1 }; \
								};\
				};\
		class value_4_group##XX \
						{ \
			clipTL[] = { 0.523, 0 }; \
			clipBR[] = { 1, 1 }; \
			class value_4##XX \
								{ \
				type = text; \
				source = static; \
				text = ##XX; \
				sourceScale = 1; \
				scale = 1; \
				align = center; \
				pos[] = { waypointIndicator, { __EVAL(0.5 + ((7.2/360)*XX) - 7.2), 0.005 }, 1 }; \
				right[] = { waypointIndicator, { __EVAL((fontSizeMed*0.75) + 0.5 + ((7.2 / 360)*XX) - 7.2), 0.005 }, 1 }; \
				down[] = { waypointIndicator, { __EVAL(0.5 + ((7.2 / 360)*XX) - 7.2), __EVAL(0.005 + fontSizeMed) }, 1 }; \
								}; \
				}; \
		class box##XX \
			{ \
			type = line; \
			width = 2; \
			points[] = \
				{ \
				{ waypointIndicator, { __EVAL(0.523 + ((7.2/360)*XX)), 0.041 }, 1 }, \
				{ waypointIndicator, { __EVAL(0.477 + ((7.2 / 360)*XX)), 0.041 }, 1 }, \
				{}, \
				{ waypointIndicator, { __EVAL(0.5 + ((7.2 / 360)*XX)), 0.041 }, 1 }, \
				{ waypointIndicator, { __EVAL(0.5 + ((7.2 / 360)*XX)), 0.053 }, 1 }, \
				{}, \
				{ waypointIndicator, { __EVAL(0.523 + ((7.2 / 360)*XX) - 7.2), 0.041 }, 1 }, \
				{ waypointIndicator, { __EVAL(0.477 + ((7.2 / 360)*XX) - 7.2), 0.041 }, 1 }, \
				{}, \
				{ waypointIndicator, { __EVAL(0.5 + ((7.2 / 360)*XX) - 7.2), 0.041 }, 1 }, \
				{ waypointIndicator, { __EVAL(0.5 + ((7.2 / 360)*XX) - 7.2), 0.053 }, 1 } \
			}; \
		}; \
	};

class Pos10Vector
{
	type=vector;
	// position of 0-degree dive line
	pos0[]={__EVAL(PosX0Center),__EVAL(PosY0Center)};
	// position of 10 degree bank and 10-degree dive (used to adjust scale)
	pos10[]={__EVAL(PosX0Center+SizeX10deg),__EVAL(PosY0Center+SizeY10deg)};
};

topLeft = "HUD LH";
topRight = "HUD PH";
bottomLeft = "HUD LD";
/// adjust position inside of memory points LOD
borderLeft = 0;
borderRight = 0;
borderTop = 0;
borderBottom = 0;
color[]={0.15,1,0.15,0.1}; // master color

class Bones
{
	class text_debug {
		type = fixed;
		pos[] = { 0.75, 0.75};
	};
	class ForwardVec
	{
		type = "vector";
		source = "forward";
		pos0[] = { 0, 0 };
		pos10[] = { SizeX10deg, SizeY10deg };
	};
	class ForwardVecX
	{
		type = "vector";
		source = "forward";
		pos0[] = { 0, 0 };
		pos10[] = { SizeX10deg, 0 };
	};
	class ForwardVecY
	{
		type = "vector";
		source = "forward";
		pos0[] = { 0, 0 };
		pos10[] = { 0, SizeY10deg };
	};
	class PlaneW
	{
		type=fixed;
		pos[] = { PosX0Center, PosYCenterHorizont };
	};
	class center
	{
		type = fixed;
		pos[] = { PosX0Center, PoxY0Center };
	};
	class horizon_data
	{
		type = fixed;
		pos[] = { __EVAL(PosX0Center - 0.285), __EVAL(PosY0Center - 0.0495) }; // -0.035 // +0.005
	};
	class waypointIndicator{
		type = linear;
		source = heading;
		sourceScale = 1;
		min = 0;	            //Min value this bone can display
		max = 360;	            //Max value this bone can display
		minPos[] = { 0.0, 0.0 };
		maxPos[] = { 7.2, 0.0 };
	};
	class speedIndicator
	{
		type = fixed;
		pos[] = { __EVAL(PosX0Center - 0.295), __EVAL(PosY0Center - 0.225) };
	};
	class altIndicator
	{
		type = fixed;
		pos[] = { __EVAL(PosX0Center + 0.295), __EVAL(PosY0Center - 0.225) };
	};
	class emconIndicator
	{
		type = fixed;
		pos[] = { __EVAL(PosX0Center + 0.290), __EVAL(PosY0Center + 0.3) };
	};
	class weaponIndicator
	{
		type = fixed;
		pos[] = { __EVAL(PosX0Center - 0.290), __EVAL(PosY0Center + 0.3) };
	};
	class bottomIndicator
	{
		type = fixed;
		pos[] = { PosX0Center, __EVAL(PosY0Center + 0.45) };
	};
	class weaponAim: Pos10Vector
	{
		source = weapon;
	};
	class Target: Pos10Vector
	{
		source = target;
	};
	class Velocity: Pos10Vector
	{
		type = vector;
		source = velocity;
		pos0[] = { PosX0Center, PosY0Center };
		pos10[] = { __EVAL(PosX0Center + SizeX10deg), __EVAL(PosY0Center + SizeY10deg) };
	};
	class ILS_H
	{
		type=ils;
		// position when centered
		pos0[]={0.5,__EVAL(PosY0Center)};
		// position when 3-degree off in both directions
		pos3[]={__EVAL(0.5+SizeX10deg*3/10),__EVAL(PosY0Center)};
	};
	class ILS_W:ILS_H
	{
		pos3[]={0.5,__EVAL(PosY0Center+SizeY10deg*3/10)};
	};
#define HorizonMultiplierX 1.6 // use these to make sure the horizon line actually follows the horizon (for some reason, size10deg is inaccurate)
#define HorizonMultiplierY 1.3
	class Level0: Pos10Vector // horizon line
	{
//		pos0[]={0.5,0.37};
//		pos10[]={__EVAL(0.5+0.65),__EVAL(0.34+0.6*XtoYscale)};
		pos0[]={PosX0Center,PosY0Center};
		pos10[] = { __EVAL(PosX0Center + (SizeX10deg*HorizonMultiplierX)), __EVAL(PosYCenterHorizont + (SizeY10deg*HorizonMultiplierY)) };
		type=horizon;
		// horizon angle to which this line corresponds to
		angle=0;
	};
	
#define  HorizonBankScaleY 0.4
	class HorizonBankRot
	{
		type=rotational;
		source=horizonBank;
		center[]={0.5,0.5};
		min = __EVAL(-3.14159265359 / 180 * 60);
		max = __EVAL(3.14159265359 / 180 * 60); // 60 degrees (rad)
		minAngle = -60;
		maxAngle = 60;
		aspectRatio = 1.3888888888888888888888888888889;
	};


	class LevelP5: Level0 {angle=+5;};
	class LevelM5: Level0 {angle=-5;};
	class LevelP10: Level0 {angle=+10;};
	class LevelM10: Level0 {angle=-10;};
	class LevelP15: Level0 {angle=+15;};
	class LevelM15: Level0 {angle=-15;};
	class LevelP20: Level0 {angle=+20;};
	class LevelM20: Level0 {angle=-20;};
	class LevelP25: Level0 {angle=+25;};
	class LevelM25: Level0 {angle=-25;};
	class LevelP30: Level0 {angle=+30;};
	class LevelM30: Level0 {angle=-30;};
	class LevelP35: Level0 {angle=+35;};
	class LevelM35: Level0 {angle=-35;};
	class LevelP40: Level0 {angle=+40;};
	class LevelM40: Level0 {angle=-40;};
	class LevelP45: Level0 {angle=+45;};
	class LevelM45: Level0 {angle=-45;};
	class LevelP50: Level0 {angle=+50;};
	class LevelM50: Level0 {angle=-50;};

	class LevelP55: Level0 {angle=+55;};
	class LevelM55: Level0 {angle=-55;};
	class LevelP60: Level0 {angle=+60;};
	class LevelM60: Level0 {angle=-60;};

	class LevelP65: Level0 {angle=+65;};
	class LevelM65: Level0 {angle=-65;};
	class LevelP70: Level0 {angle=+70;};
	class LevelM70: Level0 {angle=-70;};

	class LevelP75: Level0 {angle=+75;};
	class LevelM75: Level0 {angle=-75;};
	class LevelP80: Level0 {angle=+80;};
	class LevelM80: Level0 {angle=-80;};

	class LevelP85: Level0 {angle=+85;};
	class LevelM85: Level0 {angle=-85;};
	class LevelP90: Level0 {angle=+90;};
	class LevelM90: Level0 {angle=-90;}; 
};
class Draw
{
	alpha = 0.4;
	color[] = { 0.15, 1.0, 0.15 };
	condition = "on";
	class centerPoint
	{
		type = line;
		width = 4;
		points[] = {
				{ PlaneW, {0, -0.0025}, 1 },
				{ PlaneW, {0, 0.0025}, 1 },
				{},
				{ PlaneW, { 0.002, 0 }, 1 },
				{ PlaneW, { -0.002, 0 }, 1 },
				{}
		};
	};
	class flightPathVector
	{
		clipTL[] = { 0.0, 1.0 };
		clipBR[] = { 1.0, 0.0 };
		type = line;
		width = 4;
		points[] = {
			CIRCLE_BIG2_FWD(Velocity, ForwardVec, 0.01),
			{},
			{ Velocity, 1, ForwardVec, { 0.03, __EVAL(0 / XtoYscale) }, 1 },
			{ Velocity, 1, ForwardVec, { 0.01, __EVAL(0 / XtoYscale) }, 1 },
			{},
			{ Velocity, 1, ForwardVec, { -0.03, __EVAL(0 / XtoYscale) }, 1 },
			{ Velocity, 1, ForwardVec, { -0.01, __EVAL(0 / XtoYscale) }, 1 },
			{},
			{ Velocity, 1, ForwardVec, { 0, __EVAL(-0.02 / XtoYscale) }, 1 },
			{ Velocity, 1, ForwardVec, { 0, __EVAL(-0.01 / XtoYscale) }, 1 },
			{}
		};
	};
	class Horizon {// -0.035 // +0.005
		class Horizon_1 // right bar
		{
			clipTL[] = { 0.263, 0.112 };   //Defines the space in which the bone is drawn 
			clipBR[] = { 1.0, 1.0 };   //TL = Top Left, BR = Bottom Right
			class Level0_1 {
				type = line;
				width = 4;
				points[] =
				{
					{ Level0, { 2, 0 }, 1, ForwardVec, 1 },
					{ Level0, { 0.08, 0 }, 1, ForwardVec, 1 },
					{},
					{ level0, { -0.08, 0 }, 1, ForwardVec, 1 },
					{ level0, { -2, 0 }, 1, ForwardVec, 1 }
				};
			};
		};
		class Horizon_2 // left bar
		{
			clipTL[] = { 0.0, 0.112 };
			clipBR[] = { 0.213, 1.0 };
			class Level0_2 {
				type = line;
				width = 4;
				points[] =
				{
					{ Level0, { 2, 0 }, 1, ForwardVec, 1 },
					{ Level0, { 0.08, 0 }, 1, ForwardVec, 1 },
					{},
					{ level0, { -0.08, 0 }, 1, ForwardVec, 1 },
					{ level0, { -2, 0 }, 1, ForwardVec, 1 }
				};
			};
		};
		class Horizon_3 //top bar
		{
			clipTL[] = { 0.213, 0.112 };
			clipBR[] = { 0.263, 0.4510 };
			class Level0_3 {
				type = line;
				width = 4;
				points[] =
				{
					{ Level0, { 2, 0 }, 1, ForwardVec, 1 },
					{ Level0, { 0.08, 0 }, 1, ForwardVec, 1 },
					{},
					{ level0, { -0.08, 0 }, 1, ForwardVec, 1 },
					{ level0, { -2, 0 }, 1, ForwardVec, 1 }
				};
			};
		};
		class Horizon_4//bottom bar
		{
			clipTL[] = { 0.213, 0.5405 };
			clipBR[] = { 0.263, 1.0 };
			class Level0_4 {
				type = line;
				width = 4;
				points[] =
				{
					{ Level0, { 2, 0 }, 1, ForwardVec, 1 },
					{ Level0, { 0.08, 0 }, 1, ForwardVec, 1 },
					{},
					{ level0, { -0.08, 0 }, 1, ForwardVec, 1 },
					{ level0, { -2, 0 }, 1, ForwardVec, 1 }
				};
			};
		};
		clipTL[] = { 0, 0.112 };   //Defines the space in which the bone is drawn 
		clipBR[] = { 1.0, 1.0 };   //TL = Top Left, BR = Bottom Right
		class HorizonLadder {
			DEF_HORIZONTMinus(5);
			DEF_HORIZONTPlus(5);
			DEF_HORIZONTMinus(10);
			DEF_HORIZONTPlus(10);
			DEF_HORIZONTMinus(15);
			DEF_HORIZONTPlus(15);
			DEF_HORIZONTMinus(20);
			DEF_HORIZONTPlus(20);
			DEF_HORIZONTMinus(25);
			DEF_HORIZONTPlus(25);
			DEF_HORIZONTMinus(30);
			DEF_HORIZONTPlus(30);
			DEF_HORIZONTMinus(35);
			DEF_HORIZONTPlus(35);
			DEF_HORIZONTMinus(40);
			DEF_HORIZONTPlus(40);
			DEF_HORIZONTMinus(45);
			DEF_HORIZONTPlus(45);
			DEF_HORIZONTMinus(50);
			DEF_HORIZONTPlus(50);
			DEF_HORIZONTMinus(55);
			DEF_HORIZONTPlus(55);
			DEF_HORIZONTMinus(60);
			DEF_HORIZONTPlus(60);
			DEF_HORIZONTMinus(65);
			DEF_HORIZONTPlus(65);
			DEF_HORIZONTMinus(70);
			DEF_HORIZONTPlus(70);
			DEF_HORIZONTMinus(75);
			DEF_HORIZONTPlus(75);
			DEF_HORIZONTMinus(80);
			DEF_HORIZONTPlus(80);
			DEF_HORIZONTMinus(85);
			DEF_HORIZONTPlus(85);
			DEF_HORIZONTMinus(90);
			DEF_HORIZONTPlus(90);
		};
	};
	class Horizon_data { // +0.005
		/*class hBox_debug {
			type = line;
			width = 1;
			points[] =
			{
				{ horizon_data, { -0.002, 0.005 }, 1 },
				{ horizon_data, { 0.043, 0.005 }, 1 },
				{ horizon_data, { 0.043, 0.09 }, 1 },
				{ horizon_data, { -0.002, 0.09 }, 1 },
				{ horizon_data, { -0.002, 0.005 }, 1 }
			};
		};*/
		class hAlpha
		{
			class aText
			{
				type = text;
				source = static;
				text = "a";
				align = right;
				scale = 1;
				sourceScale = 1;
				pos[] = { horizon_data, { 0, 0 }, 1 };
				right[] = { horizon_data, { __EVAL(fontSizeSmall*0.75), 0.0 }, 1 };
				down[] = { horizon_data, { 0.0, fontSizeSmall }, 1 };
			};
			class aValue
			{
				type = text;
				//				source = aoa;   not supported :(
				source = static;
				text = "3.8";
				align = center;
				scale = 1;
				sourceScale = 1;
				pos[] = { horizon_data, { 0.035, 0 }, 1 };
				right[] = { horizon_data, { __EVAL((fontSizeSmall*0.85) + 0.03), 0.0 }, 1 };
				down[] = { horizon_data, { 0.035, fontSizeSmall }, 1 };
			};
		};
		class hMach
		{
			class mText {
				type = text;
				source = static;
				text = "M";
				align = right;
				scale = 1;
				sourceScale = 1;
				pos[] = { horizon_data, { 0, __EVAL(fontSizeSmall + fontBreakSmall) }, 1 };
				right[] = { horizon_data, { __EVAL(fontSizeSmall*0.75), __EVAL(fontSizeSmall + fontBreakSmall) }, 1 };
				down[] = { horizon_data, { 0.0, __EVAL((fontSizeSmall * 2) + fontBreakSmall)) }, 1 };
			};
			class mValue
			{
				type = text;
				source = speed;
				align = center;
				scale = 1;
				sourceScale = 0.288; // mach*100?
				pos[] = { horizon_data, { 0.035, __EVAL(fontSizeSmall + fontBreakSmall) }, 1 };
				right[] = { horizon_data, { __EVAL((fontSizeSmall*0.85) + 0.03), __EVAL(fontSizeSmall + fontBreakSmall) }, 1 };
				down[] = { horizon_data, { 0.035, __EVAL(fontSizeSmall + (fontSizeSmall + fontBreakSmall)) }, 1 };
			};
		};
		class hGforce
		{
			class gText {
				type = text;
				source = static;
				text = "G";
				align = right;
				scale = 1;
				sourceScale = 1;
				pos[] = { horizon_data, { 0, __EVAL((fontSizeSmall + fontBreakSmall) * 2) }, 1 };
				right[] = { horizon_data, { __EVAL(fontSizeSmall*0.75), __EVAL((fontSizeSmall + fontBreakSmall) * 2) }, 1 };
				down[] = { horizon_data, { 0.0, __EVAL(fontSizeSmall + ((fontSizeSmall + fontBreakSmall) * 2)) }, 1 };
			};
			class gValue {
				type = text;
				//				source = gmeter; not supported :(
				source = static;
				text = "1.4";
				align = center;
				scale = 1;
				sourceScale = 1;
				pos[] = { horizon_data, { 0.035, __EVAL((fontSizeSmall + fontBreakSmall) * 2) }, 1 };
				right[] = { horizon_data, { __EVAL((fontSizeSmall*0.85) + 0.03), __EVAL((fontSizeSmall + fontBreakSmall) * 2) }, 1 };
				down[] = { horizon_data, { 0.035, __EVAL(fontSizeSmall + ((fontSizeSmall + fontBreakSmall) * 2)) }, 1 };
			};
		};
	};
#define speedIndicatorFontSize 0.05
#define speedIndicatorBoxSize 0.0353 // old 0.0688, ratio 1.95
	class speedIndicator {
		class indicatorBox {
			type = line;
			width = 4;
			points[] = {
					{ speedIndicator, { 0, 0 }, 1 },
					{ speedIndicator, { 0, __EVAL(speedIndicatorBoxSize / XtoYscale) }, 1 },
					{ speedIndicator, { __EVAL(speedIndicatorBoxSize * 1.95), __EVAL(speedIndicatorBoxSize / XtoYscale) }, 1 },
					{ speedIndicator, { __EVAL(speedIndicatorBoxSize * 1.95), 0 }, 1 },
					{ speedIndicator, { 0, 0 }, 1 }
			};
		};
		class speedKnots {
			type = text;
			source = speed;
			scale = 1;
			sourceScale = 3.6; // convert to knots = 1.94384, kph = 3.6
			align = center;
			pos[] = { speedIndicator, { __EVAL((speedIndicatorBoxSize*1.95) / 2), __EVAL((speedIndicatorBoxSize / 2) - (speedIndicatorFontSize / 2) + (speedIndicatorFontSize*0.07)) }, 1 };
			right[] = { speedIndicator, { __EVAL((speedIndicatorFontSize*0.7) + ((speedIndicatorBoxSize*1.95) / 2)), __EVAL((speedIndicatorBoxSize / 2) - (speedIndicatorFontSize / 2) + (speedIndicatorFontSize*0.07)) }, 1 };
			down[] = { speedIndicator, { __EVAL((speedIndicatorBoxSize*1.95) / 2), __EVAL((speedIndicatorBoxSize / 2) + (speedIndicatorFontSize / 2) + (speedIndicatorFontSize*0.07)) }, 1 };
		};
		class text_GS {
			type = text;
			source = static;
			text = "GS";
			scale = 1;
			sourceScale = 1;
			align = right;
			pos[] = { speedIndicator, { 0, __EVAL((speedIndicatorBoxSize) + (fontSizeSmall / 2)) }, 1 };
			right[] = { speedIndicator, { __EVAL(fontSizeSmall *0.75), __EVAL((speedIndicatorBoxSize) + (fontSizeSmall / 2)) }, 1 };
			down[] = { speedIndicator, { 0, __EVAL((speedIndicatorBoxSize) + (fontSizeSmall / 2) + fontSizeSmall) }, 1 };
		};
		class speedGround {
			type = text;
			source = speed;
			scale = 1;
			sourceScale = 3.7; // convert to knots with a little offset to fake "ground speed"
			align = left;
			pos[] = { speedIndicator, { __EVAL(speedIndicatorBoxSize*1.95), __EVAL((speedIndicatorBoxSize) + (fontSizeSmall / 2)) }, 1 };
			right[] = { speedIndicator, { __EVAL((speedIndicatorBoxSize*1.95) + (fontSizeSmall *0.75)), __EVAL((speedIndicatorBoxSize) + (fontSizeSmall / 2)) }, 1 };
			down[] = { speedIndicator, { __EVAL(speedIndicatorBoxSize*1.95), __EVAL((speedIndicatorBoxSize) + (fontSizeSmall / 2) + fontSizeSmall) }, 1 };
		};
	};
#define altIndicatorFontSize 0.05
#define altIndicatorFontSizeSmall 0.035
#define altIndicatorFontWidthSmall 0.01
#define altIndicatorBoxSize 0.0353 // old 0.0872, ratio 2.47
	class altIndicator {
		class indicatorBox {
			type = line;
			width = 4;
			points[] = {
					{ altIndicator, { 0, 0 }, 1 },
					{ altIndicator, { 0, __EVAL(altIndicatorBoxSize / XtoYscale) }, 1 },
					{ altIndicator, { __EVAL(altIndicatorBoxSize * -2.47), __EVAL(altIndicatorBoxSize / XtoYscale) }, 1 },
					{ altIndicator, { __EVAL(altIndicatorBoxSize * -2.47), 0 }, 1 },
					{ altIndicator, { 0, 0 }, 1 }
			};
		};
		class altFeet {
			type = text;
			source = altitudeASL;
			scale = 1;
			sourceScale = 1; // convert to feet = 3.28084, meters = 1
			align = center;
			pos[] = { altIndicator, { -0.0435955, -0.00385) }, 1 };
			right[] = { altIndicator, { -0.0085955), -0.00385 }, 1 };
			down[] = { altIndicator, { -0.0435955, 0.04615 }, 1 };
			//big 1000s altimeter setup. Cannot be done without monospaced HUD text. Commented out, reopen if monospaced HUD is released
			/*class digit_1 {
				clipTL[] = { __EVAL(PosX0Center + 0.295 - (altIndicatorFontSizeSmall*0.7*0.5) - 0.006), 0 };
				clipBR[] = { __EVAL(PosX0Center + 0.295), 1 };
				class digit // 1s indicator
				{
					type = text;
					source = altitudeASL;
					scale = 1;
					sourceScale = 3.28084; // convert to feet
					align = left;
					pos[] = { altIndicator, { -0.006, __EVAL((altIndicatorBoxSize / 2) - (altIndicatorFontSizeSmall / 2) + (altIndicatorFontSizeSmall * 0.07)) }, 1 };
					right[] = { altIndicator, { __EVAL((altIndicatorFontSizeSmall*0.7) - 0.006), __EVAL((altIndicatorBoxSize / 2) - (altIndicatorFontSizeSmall / 2) + (altIndicatorFontSizeSmall * 0.07)) }, 1 };
					down[] = { altIndicator, { -0.006, __EVAL((altIndicatorBoxSize / 2) + (altIndicatorFontSizeSmall / 2) + (altIndicatorFontSizeSmall * 0.07)) }, 1 };
				};
			};
			class digit_2 {
				clipTL[] = { __EVAL(PosX0Center + 0.295 - altIndicatorFontWidthSmall - (altIndicatorFontSizeSmall*0.7*0.5) - 0.006), 0 };
				clipBR[] = { __EVAL(PosX0Center + 0.295 - altIndicatorFontWidthSmall), 1 };
				class digit // 10s indicator
				{
					type = text;
					source = altitudeASL;
					scale = 1;
					sourceScale = 0.328084; // feet *10
					align = left;
					pos[] = { altIndicator, { __EVAL(-0.006 - altIndicatorFontWidthSmall), __EVAL((altIndicatorBoxSize / 2) - (altIndicatorFontSizeSmall / 2) + (altIndicatorFontSizeSmall * 0.07)) }, 1 };
					right[] = { altIndicator, { __EVAL((altIndicatorFontSizeSmall*0.7) - 0.006 - altIndicatorFontWidthSmall), __EVAL((altIndicatorBoxSize / 2) - (altIndicatorFontSizeSmall / 2) + (altIndicatorFontSizeSmall * 0.07)) }, 1 };
					down[] = { altIndicator, { __EVAL(-0.006 - altIndicatorFontWidthSmall), __EVAL((altIndicatorBoxSize / 2) + (altIndicatorFontSizeSmall / 2) + (altIndicatorFontSizeSmall * 0.07)) }, 1 };
				};
			};
			class digit_3 // 100s indicator
			{
				type = text;
				source = altitudeASL;
				scale = 1;
				sourceScale = 0.0328084; // feet *100
				align = left;
				pos[] = { altIndicator, { __EVAL((altIndicatorBoxSize*2.47) / -2), __EVAL((altIndicatorBoxSize / 2) - (altIndicatorFontSizeSmall / 2) + (altIndicatorFontSizeSmall * 0.07)) }, 1 };
				right[] = { altIndicator, { __EVAL((altIndicatorFontSizeSmall*0.7) + ((altIndicatorBoxSize*2.47) / -2)), __EVAL((altIndicatorBoxSize / 2) - (altIndicatorFontSizeSmall / 2) + (altIndicatorFontSizeSmall * 0.07)) }, 1 };
				down[] = { altIndicator, { __EVAL((altIndicatorBoxSize*2.47) / -2), __EVAL((altIndicatorBoxSize / 2) + (altIndicatorFontSizeSmall / 2) + (altIndicatorFontSizeSmall * 0.07)) }, 1 };
			}; */
		};
		class text_R {
			type = text;
			source = static;
			text = "R";
			scale = 1;
			sourceScale = 1;
			align = right;
			pos[] = { altIndicator, { __EVAL((altIndicatorBoxSize * -2.47) + 0.01), __EVAL(altIndicatorBoxSize + (fontSizeSmall / 2)) }, 1 };
			right[] = { altIndicator, { __EVAL((altIndicatorBoxSize * -2.47)+ 0.01 + fontSizeSmall *0.75), __EVAL(altIndicatorBoxSize + (fontSizeSmall / 2)) }, 1 };
			down[] = { altIndicator, { __EVAL((altIndicatorBoxSize * -2.47) + 0.01), __EVAL(altIndicatorBoxSize + (fontSizeSmall / 2) + fontSizeSmall) }, 1 };
		};
		class altRadar {
			type = text;
			source = altitudeAGL;
			scale = 1;
			sourceScale = 1; // convert to feet = 3.28084 (from meters)
			align = left;
			pos[] = { altIndicator, { -0.01, altIndicatorBoxSize + (fontSizeSmall / 2)) }, 1 };
			right[] = { altIndicator, { __EVAL((fontSizeSmall *0.75) - 0.01), __EVAL(altIndicatorBoxSize + (fontSizeSmall / 2)) }, 1 };
			down[] = { altIndicator, { -0.01, __EVAL(altIndicatorBoxSize + (fontSizeSmall / 2) + fontSizeSmall) }, 1 };
		};
	};
#define emconIndicatorFontSize 0.03
	class emconIndicator
	{
		class emcon {
			type = text;
			source = static;
			text = "EMCON";
			align = center;
			scale = 1;
			sourceScale = 1;
			pos[] = { emconIndicator, { 0, 0 }, 1 };
			right[] = { emconIndicator, { emconIndicatorFontSize*0.75, 0 }, 1 };
			down[] = { emconIndicator, { 0, emconIndicatorFontSize }, 1 };
		};
		class emconValue {
			type = text;
			source = static;
			text = "DL 014";
			align = center;
			scale = 1;
			sourceScale = 1;
			pos[] = { emconIndicator, { 0, emconIndicatorFontSize }, 1 };
			right[] = { emconIndicator, { emconIndicatorFontSize*0.75, emconIndicatorFontSize }, 1 };
			down[] = { emconIndicator, { 0, emconIndicatorFontSize*2 }, 1 };
		};
	};
#define weaponIndicatorFontSize 0.03
	class weaponIndicator
	{
		class aamCondition {
			condition = "AAmissile";
			class aamIndicator {
				type = text;
				source = static;
				text = "AA";
				align = center;
				scale = 1;
				sourceScale = 1;
				pos[] = { weaponIndicator, { 0, 0 }, 1 };
				right[] = { weaponIndicator, { weaponIndicatorFontSize*0.75, 0 }, 1 };
				down[] = { weaponIndicator, { 0, weaponIndicatorFontSize }, 1 };
			};
		};
		class agmCondition {
			condition = "ATmissile";
			class agmIndicator {
				type = text;
				source = static;
				text = "AG";
				align = center;
				scale = 1;
				sourceScale = 1;
				pos[] = { weaponIndicator, { 0, 0 }, 1 };
				right[] = { weaponIndicator, { weaponIndicatorFontSize*0.75, 0 }, 1 };
				down[] = { weaponIndicator, { 0, weaponIndicatorFontSize }, 1 };
			};
		};
		class bombCondition {
			condition = "bomb";
			class bombIndicator {
				type = text;
				source = static;
				text = "AG";
				align = center;
				scale = 1;
				sourceScale = 1;
				pos[] = { weaponIndicator, { 0, 0 }, 1 };
				right[] = { weaponIndicator, { weaponIndicatorFontSize*0.75, 0 }, 1 };
				down[] = { weaponIndicator, { 0, weaponIndicatorFontSize }, 1 };
			};
		};
		class weaponValue {
			type = text;
			source = weapon;
			align = center;
			scale = 1;
			sourceScale = 1;
			pos[] = { weaponIndicator, { 0, weaponIndicatorFontSize }, 1 };
			right[] = { weaponIndicator, { weaponIndicatorFontSize*0.75, weaponIndicatorFontSize }, 1 };
			down[] = { weaponIndicator, { 0, weaponIndicatorFontSize * 2 }, 1 };
		};
		class armIndicator {
			type = text;
			source = static;
			text = "ARM";
			align = center;
			scale = 1;
			sourceScale = 1;
			pos[] = { weaponIndicator, { 0, weaponIndicatorFontSize * 2 }, 1 };
			right[] = { weaponIndicator, { weaponIndicatorFontSize*0.75, weaponIndicatorFontSize * 2 }, 1 };
			down[] = { weaponIndicator, { 0, weaponIndicatorFontSize * 3 }, 1 };
		};
	};
	class planeHeading { // compass
		class headingScroll {
			type = scale;
			horizontal = 1;
			source = heading;
			sourceScale = 0.1;
			width = 2; // line width
			top = 0;
			center = 0.5;
			bottom = 1;
			lineXleft = 0.105; //small line top
			lineYright = 0.095; //small line bottom
			lineXleftMajor = 0.11; //big line top
			lineYrightMajor = 0.09; // big line bottom
			majorLineEach = 2;
			numberEach = 2;
			step = 0.5;
			stepsize = 0.1; //width
			align = center;
			scale = 1;
			pos[] = { -0.00, __EVAL(0.085 - fontSizeMed) };
			right[] = { __EVAL((fontSizeMed*0.75) - 0.00), __EVAL(0.085 - fontSizeMed) };
			down[] = { -0.00, 0.085 };
		};
		class headingIndicator {
			type = text;
			source = heading;
			sourceScale = 1;
			scale = 1;
			align = center;
			pos[] = { { 0.5, 0.005 }, 1 };
			right[] = { { __EVAL((fontSizeMed*0.75) + 0.5), 0.005 }, 1 };
			down[] = { { 0.5, __EVAL(0.005 + fontSizeMed) }, 1 };
		};
		class headingIndicatorBox {
			type = line;
			width = 2;
			points[] = {
					{ { 0.477, 0.01 }, 1 },
					{ { 0.523, 0.01 }, 1 },
					{ { 0.523, 0.041 }, 1 },
					{ { 0.477, 0.041 }, 1 },
					{ { 0.477, 0.01 }, 1 },
					{},
					{ { 0.493, 0.041 }, 1 },
					{ { 0.5, 0.05 }, 1 },
					{ { 0.507, 0.041 }, 1 }
			};
		};
		class waypointMarkers {
			DEF_WAYPOINTMARKER(68);
			DEF_WAYPOINTMARKER(279);
		};
	};
	class bankRot {
		class bankRotScale {
			type = line;
			width = 2;
			points[] = {
				HORIZON_BANK_ROT_MARKER(0.3, 0.01, -60),
				{},
				HORIZON_BANK_ROT_MARKER(0.3, 0.01, -48),
				{},
				HORIZON_BANK_ROT_MARKER(0.3, 0.01, -36),
				{},
				HORIZON_BANK_ROT_MARKER(0.3, 0.01, -24),
				{},
				HORIZON_BANK_ROT_MARKER(0.3, 0.01, -12),
				{},
				HORIZON_BANK_ROT_MARKER(0.3, 0.01, 12),
				{},
				HORIZON_BANK_ROT_MARKER(0.3, 0.01, 24),
				{},
				HORIZON_BANK_ROT_MARKER(0.3, 0.01, 36),
				{},
				HORIZON_BANK_ROT_MARKER(0.3, 0.01, 48),
				{},
				HORIZON_BANK_ROT_MARKER(0.3, 0.01, 60)
			};
		};
		class bankRotZero {
			type = text;
			source = static;
			text = "0";
			align = center;
			scale = 1;
			sourceScale = 1;
			pos[] = { ForwardVec, 1, planeW, { 0, 0.4 }, 1 };
			right[] = { ForwardVec, 1, planeW, { 0.03, 0.4 }, 1 };
			down[] = { ForwardVec, 1, planeW, { 0, 0.435 }, 1 };
		};
		class HorizonBankRot
		{
			type = line;
			width = 2;
			points[] =
			{
				{ HorizonBankRot, { 0, -0.29 }, 1, ForwardVec, 1 },
				{ HorizonBankRot, { 0.01, -0.27268 }, 1, ForwardVec, 1 },
				{ HorizonBankRot, { -0.01, -0.27268 }, 1, ForwardVec, 1 },
				{ HorizonBankRot, { 0, -0.29 }, 1, ForwardVec, 1 }
			};
		};
	};
#define bottomIndicatorFontSize 0.04
#define stallIndicatorFontSize 0.05
	class bottomIndicator
	{
		class stallIndicator
		{
			condition = "stall";
			blinkingPattern[] = { 0.2, 0.2 };
			blinkingStartsOn = 1;
			class stallText
			{
				type = text;
				source = static;
				text = "STALL";
				align = center;
				scale = 1;
				sourceScale = 1;
				pos[] = { bottomIndicator, { 0, -0.15 }, 1 };
				right[] = { bottomIndicator, { __EVAL(stallIndicatorFontSize * 0.75), -0.15 }, 1 };
				down[] = { bottomIndicator, { 0, stallIndicatorFontSize - 0.15 }, 1 };
			};
		};
		class gearIndicator
		{
			condition = "ils";
			class gearText
			{
				type = text;
				source = static;
				text = "GEAR";
				align = center;
				scale = 1;
				sourceScale = 1;
				pos[] = { bottomIndicator, { -0.1, 0 }, 1 };
				right[] = { bottomIndicator, { __EVAL(-0.1 + (bottomIndicatorFontSize * 0.75)), 0 }, 1 };
				down[] = { bottomIndicator, { -0.1, bottomIndicatorFontSize }, 1 };
			};
		};
		class flapsIndicator
		{
			condition = "flaps";
			class flapsText
			{
				type = text;
				source = static;
				text = "FLAPS";
				align = center;
				scale = 1;
				sourceScale = 1;
				pos[] = { bottomIndicator, { 0.1, 0 }, 1 };
				right[] = { bottomIndicator, { __EVAL(0.1 + (bottomIndicatorFontSize * 0.75)), 0 }, 1 };
				down[] = { bottomIndicator, { 0.1, bottomIndicatorFontSize }, 1 };
			};
		};
		class gunIndicator
		{
			condition = "mgun";
			class gunText
			{
				type = text;
				source = static;
				text = "GUN";
				align = center;
				scale = 1;
				sourceScale = 1;
				pos[] = { bottomIndicator, { 0, 0 }, 1 };
				right[] = { bottomIndicator, { __EVAL(bottomIndicatorFontSize * 0.75), 0 }, 1 };
				down[] = { bottomIndicator, { 0, bottomIndicatorFontSize }, 1 };
			};
		};
		class noGunIndicator
		{
			condition = "ils";
			class conditionGun
			{
				condition = "mgun";
				class noGunCross
				{
					type = line;
					width = 2;
					points[] =
					{
						{ bottomIndicator, { -0.03, 0.01 }, 1 },
						{ bottomIndicator, { 0.03, 0.035 }, 1 },
						{},
						{ bottomIndicator, { 0.03, 0.01 }, 1 },
						{ bottomIndicator, { -0.03, 0.035 }, 1 }
					};
				};
			};
		};
	};
	class MGun // machine gun aiming reticle
	{
		condition = "mgun";
		class Circle
		{
			type = line;
			width = 1;
			points[] = {
				CIRCLE_BIG2_FWD(weaponAim, ForwardVec, 0.05),
				{},
				{ weaponAim, 1, ForwardVec, { 0, -0.0005 }, 1 },
				{ weaponAim, 1, ForwardVec, { 0, 0.0005 }, 1 },
				{},
				{ weaponAim, 1, ForwardVec, { 0.05, 0 }, 1 },
				{ weaponAim, 1, ForwardVec, { 0.06, 0 }, 1 },
				{},
				{ weaponAim, 1, ForwardVec, { __EVAL(sin(30)*0.05), __EVAL(cos(30)*0.05 / XtoYscale) }, 1 },
				{ weaponAim, 1, ForwardVec, { __EVAL(sin(30)*0.06), __EVAL(cos(30)*0.06 / XtoYscale) }, 1 },
				{},
				{ weaponAim, 1, ForwardVec, { __EVAL(sin(60)*0.05), __EVAL(cos(60)*0.05 / XtoYscale) }, 1},
				{ weaponAim, 1, ForwardVec, { __EVAL(sin(60)*0.06), __EVAL(cos(60)*0.06 / XtoYscale) }, 1 },
				{},
				{ weaponAim, 1, ForwardVec, { 0, 0.05/XtoYscale }, 1 },
				{ weaponAim, 1, ForwardVec, { 0, 0.06/XtoYscale }, 1 },
				{},
				{ weaponAim, 1, ForwardVec, { __EVAL(sin(120)*0.05), __EVAL(cos(120)*0.05 / XtoYscale) }, 1 },
				{ weaponAim, 1, ForwardVec, { __EVAL(sin(120)*0.06), __EVAL(cos(120)*0.06 / XtoYscale) }, 1 },
				{},
				{ weaponAim, 1, ForwardVec, { __EVAL(sin(150)*0.05), __EVAL(cos(150)*0.05 / XtoYscale) }, 1 },
				{ weaponAim, 1, ForwardVec, { __EVAL(sin(150)*0.06), __EVAL(cos(150)*0.06 / XtoYscale) }, 1 },
				{},
				{ weaponAim, 1, ForwardVec, { -0.05, 0 }, 1 },
				{ weaponAim, 1, ForwardVec, { -0.06, 0 }, 1 },
				{},
				{ weaponAim, 1, ForwardVec, { __EVAL(sin(210)*0.05), __EVAL(cos(210)*0.05 / XtoYscale) }, 1 },
				{ weaponAim, 1, ForwardVec, { __EVAL(sin(210)*0.06), __EVAL(cos(210)*0.06 / XtoYscale) }, 1 },
				{},
				{ weaponAim, 1, ForwardVec, { __EVAL(sin(240)*0.05), __EVAL(cos(240)*0.05 / XtoYscale) }, 1 },
				{ weaponAim, 1, ForwardVec, { __EVAL(sin(240)*0.06), __EVAL(cos(240)*0.06 / XtoYscale) }, 1 },
				{},
				{ weaponAim, 1, ForwardVec, { 0, -0.05 / XtoYscale }, 1 },
				{ weaponAim, 1, ForwardVec, { 0, -0.06 / XtoYscale }, 1 },
				{},
				{ weaponAim, 1, ForwardVec, { __EVAL(sin(300)*0.05), __EVAL(cos(300)*0.05 / XtoYscale) }, 1 },
				{ weaponAim, 1, ForwardVec, { __EVAL(sin(300)*0.06), __EVAL(cos(300)*0.06 / XtoYscale) }, 1 },
				{},
				{ weaponAim, 1, ForwardVec, { __EVAL(sin(330)*0.05), __EVAL(cos(330)*0.05 / XtoYscale) }, 1 },
				{ weaponAim, 1, ForwardVec, { __EVAL(sin(330)*0.06), __EVAL(cos(330)*0.06 / XtoYscale) }, 1 }
			};
		};
	};
	class PlaneW_AA
	{
		condition = "AAmissile";
		class reticle
		{
			type = line;
			width = 2;
			points[] = {
				CIRCLE_BIG2_FWD(weaponAim, ForwardVec, 0.15),
				{},
				{ "ForwardVec", 1, "PlaneW", 1, { -0.04, 0 }, 1 },
				{ "ForwardVec", 1, "PlaneW", 1, { -0.016, 0 }, 1 },
				{ "ForwardVec", 1, "PlaneW", 1, { -0.008, 0.02 }, 1 },
				{ "ForwardVec", 1, "PlaneW", 1, { 0.0, 0 }, 1 },
				{ "ForwardVec", 1, "PlaneW", 1, { 0.008, 0.02 }, 1 },
				{ "ForwardVec", 1, "PlaneW", 1, { 0.016, 0 }, 1 },
				{ "ForwardVec", 1, "PlaneW", 1, { 0.04, 0 }, 1 }
			};
		};
	};
	class PlaneW_bomb
	{
		condition = "bomb";
		class reticle
		{
			type = line;
			width = 2;
			points[] = {
				{ "ForwardVec", 1, "PlaneW", 1, { -0.04, 0 }, 1 },
				{ "ForwardVec", 1, "PlaneW", 1, { -0.016, 0 }, 1 },
				{ "ForwardVec", 1, "PlaneW", 1, { -0.008, 0.02 }, 1 },
				{ "ForwardVec", 1, "PlaneW", 1, { 0.0, 0 }, 1 },
				{ "ForwardVec", 1, "PlaneW", 1, { 0.008, 0.02 }, 1 },
				{ "ForwardVec", 1, "PlaneW", 1, { 0.016, 0 }, 1 },
				{ "ForwardVec", 1, "PlaneW", 1, { 0.04, 0 }, 1 }
			};
		};
	};
	class PlaneW_AT
	{
		condition = "ATmissile";
		class reticle
		{
			type = line;
			width = 2;
			points[] = {
					{ "ForwardVec", 1, "PlaneW", 1, { -0.04, 0 }, 1 },
					{ "ForwardVec", 1, "PlaneW", 1, { -0.016, 0 }, 1 },
					{ "ForwardVec", 1, "PlaneW", 1, { -0.008, 0.02 }, 1 },
					{ "ForwardVec", 1, "PlaneW", 1, { 0.0, 0 }, 1 },
					{ "ForwardVec", 1, "PlaneW", 1, { 0.008, 0.02 }, 1 },
					{ "ForwardVec", 1, "PlaneW", 1, { 0.016, 0 }, 1 },
					{ "ForwardVec", 1, "PlaneW", 1, { 0.04, 0 }, 1 }
			};
		};
	};
#ifndef NO_RADAR
	class RadarTargets
	{
		type = radar;
		pos0[] = { __EVAL(PosX0Center), __EVAL(PosY0Center) };
		pos10[] = { __EVAL(PosX0Center + SizeX10deg), __EVAL(PosY0Center + SizeY10deg) };
		width = 2;
		points[] = {
			POINT(ForwardVec, -0.02, -0.02),
			POINT(ForwardVec, +0.02, -0.02),
			POINT(ForwardVec, +0.02, +0.02),
			POINT(ForwardVec, -0.02, +0.02),
			POINT(ForwardVec, -0.02, -0.02)
		};
	};
#endif
};