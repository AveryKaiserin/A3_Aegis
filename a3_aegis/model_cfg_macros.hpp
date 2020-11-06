/* ~~~~~~~~~~~~~~~~ Table of Content ~~~~~~~~~~~~~~~~ *\
- Overview
- Typical values for macro parameters
- DOOR_NO_HANDLE_ANIMATION(doorID,angle,l_angle)
- DOOR_ONE_HANDLE_ANIMATION(doorID,angle,h_angle,l_angle)
- TWO_WING_DOOR_NO_HANDLE_ANIMATION(doorID,angleA,l_angleA,angleB,l_angleB)
- TWO_WING_DOOR_ONE_HANDLE_ANIMATION(doorID,angleA,h_angleA,l_angleA,angleB,l_angleB)
- TWO_WING_DOOR_TWO_HANDLE_ANIMATION(doorID,angleA,h_angleA,l_angleA,angleB,h_angleB,l_angleB)
- ONE_WING_SLIDE_DOOR_ANIMATION(doorID,dist,l_dist)
- TWO_WING_SLIDE_DOOR_ANIMATION(doorID,distA,distB,l_distA,l_distB)
- HATCH_NO_HANDLE_ANIMATION(hatchID,angle)
- HITZONE_ANIMATION(hitzoneID,threshold)
- HIT_DOOR_ANIMATION(doorID,threshold,hitzoneID)
- HIT_GLASS_ANIMATION(glassID,threshold)
- HIT_GLASS_BASED_ON_HITZONE_ANIMATION(glassID,threshold,hitzoneID)
- ANIM_HIDE(sele,suffix,asource,srcadd,minV,maxV,hideV)
- ANIM_UNHIDE(sele,suffix,asource,srcadd,minV,maxV,hideV,unhideV)
- ANIM_ROTATION(sele,suffix,asource,srcadd,sele_axis,minV,maxV,minAngle,maxAngle)
- ANIM_TRANSLATION(sele,suffix,asource,srcadd,sele_axis,minV,maxV,minOff,maxOff)
\* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */



/* ~~~~~~~~~~~~~~~~~~~~ Overview ~~~~~~~~~~~~~~~~~~~~ *\
The following macros are meant for structures (Structures_F addon at the time of their creation). They deal with:
- animations for various kinds of doors, gates, hatches etc.,
- animations for hitpoints aka gradual destruction or windows
- and constants (default values) for the above

These macros are designed to work with cfgStructures.hpp - the config.cpp counterpart macros for this file - (that was located in a3\ when this file was created).
\* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */



/* Typical values for macro parameters */
#define DEFAULT_THRESHOLD 0.99999			// Must be the same as DEFAULT_THRESHOLD in cfgStructures.hpp for hiding user actions properly along with doors
#define DEFAULT_DOOR_ANGLE 90
#define DEFAULT_DOOR_HANDLE_ANGLE 35
#define DEFAULT_DOOR_LOCKED_ANGLE 0.5
#define DEFAULT_DOOR_DISTANCE 1
#define DEFAULT_DOOR_LOCKED_DISTANCE 0.005
#define DEFAULT_HATCH_ANGLE 105



/* Animations for a door without a handle
	doorID					id of the door
	angle					maximum opening angle (in degrees)
	l_angle					angle of door movement when attempting to open locked door

	Insight:
	- Creates classes:
	  Door_<doorID>_rot : Main animation that rotates the wing of the door
	  Door_<doorID>_locked_rot : Animation for when the door is locked by script command

	Dependencies:
	- DOOR_ANIMATION_SOURCE (from cfgStructures.hpp)	animation source class in appropriate CfgVehicles class in config.cpp
	- Door_<doorID>										selections in resolution and geometry lods in p3d, listed in skeleton as well
	- Door_<doorID>_axis								selection in memory lod in p3d
*/
#define DOOR_NO_HANDLE_ANIMATION(doorID,angle,l_angle)						\
			class Door_##doorID##_rot										\
			{																\
				type					= rotation;							\
				source					= Door_##doorID##_sound_source;		\
				selection				= Door_##doorID;					\
				axis					= Door_##doorID##_axis;				\
				memory					= 1;								\
				minValue				= 0.1;								\
				maxValue				= 1;								\
				angle0					= 0;								\
				angle1					= (rad angle);						\
			};																\
			class Door_##doorID##_locked_rot: Door_##doorID##_rot			\
			{																\
				source					= Door_##doorID##_locked_source;	\
				sourceAddress			= mirror;							\
				minValue				= 0.05;								\
				maxValue				= 0.2;								\
				angle0					= (rad (-0.5 * l_angle));			\
				angle1					= (rad (1.0 * l_angle));			\
				phaseBeg				= 0.1;								\
				phaseEnd				= 0.2;								\
			};



/* Animations for a door with a handle
	doorID					id of the door
	angle					maximum opening angle (in degrees)
	h_angle					angle of door handle rotation (in degrees)
	l_angle					angle of door movement when attempting to open locked door

	Insight:
	- Creates classes:
	  Door_<doorID>_rot : Main animation that rotates the door itself
	  Door_<doorID>_handle_rot_1 : First handle animation that rotates the door handle down when opening (up when closing)
	  Door_<doorID>_handle_rot_2 : Second handle animation that rotates the door handle up when opening (down when closing)
	  Door_<doorID>_locked_rot : Animation of the door when the it is locked by script command
	  Door_<doorID>_handle_locked_rot : Animation of the handle when the door is locked by script command

	Dependencies:
	- DOOR_ANIMATION_SOURCE (from cfgStructures.hpp)	animation source classes for door and handle in appropriate CfgVehicles class in config.cpp
	- Door_<doorID>										selections in resolution and geometry lods in p3d, listed in skeleton as well
	- Door_<doorID>_axis								selection in memory lod in p3d
	- Door_Handle_<doorID>								selections in resolution lods in p3d, listed in skeleton as well
	- Door_Handle_<doorID>_axis							selection in memory lod in p3d, listed in skeleton as well
*/
#define DOOR_ONE_HANDLE_ANIMATION(doorID,angle,h_angle,l_angle)						\
			class Door_##doorID##_rot												\
			{																		\
				type					= rotation;									\
				source					= Door_##doorID##_sound_source;				\
				selection				= Door_##doorID;							\
				axis					= Door_##doorID##_axis;						\
				memory					= 1;										\
				minValue				= 0.1;										\
				maxValue				= 1;										\
				angle0					= 0;										\
				angle1					= (rad angle);								\
			};																		\
			class Door_##doorID##_handle_rot_1: Door_##doorID##_rot					\
			{																		\
				source					= Door_##doorID##_noSound_source;			\
				selection				= Door_Handle_##doorID;						\
				axis					= Door_Handle_##doorID##_axis;				\
				minValue				= 0;										\
				maxValue				= 0.1;										\
				angle1					= (rad h_angle);							\
			};																		\
			class Door_##doorID##_handle_rot_2: Door_##doorID##_handle_rot_1		\
			{																		\
				minValue				= 0.1;										\
				maxValue				= 0.4;										\
				angle1					= -(rad h_angle);							\
			};																		\
			class Door_##doorID##_locked_rot: Door_##doorID##_rot					\
			{																		\
				source					= Door_##doorID##_locked_source;			\
				sourceAddress			= mirror;									\
				minValue				= 0.05;										\
				maxValue				= 0.2;										\
				angle0					= (rad (-0.5 * l_angle));					\
				angle1					= (rad (1.0 * l_angle));					\
				phaseBeg				= 0.1;										\
				phaseEnd				= 0.2;										\
			};																		\
			class Door_##doorID##_handle_locked_rot: Door_##doorID##_handle_rot_1	\
			{																		\
				source					= Door_##doorID##_locked_source;			\
				sourceAddress			= mirror;									\
				maxValue				= 0.5;										\
				angle1					= (rad (5 * h_angle));						\
				phaseBeg				= 0;										\
				phaseEnd				= 0.1;										\
			};

/* 	Same macro as previous one, but for purposes of Enoch,
	e needed to reverse the animation for doors since they are opened on lots of them
	and this seems like faster solution than editing the models
*/
#define DOOR_ONE_HANDLE_ANIMATION_REVERSED(doorID,angle_closed,angle_opened,h_angle,l_angle)		\
			class Door_##doorID##_rot												\
			{																		\
				type					= rotation;									\
				source					= Door_##doorID##_sound_source;				\
				selection				= Door_##doorID;							\
				axis					= Door_##doorID##_axis;						\
				memory					= 1;										\
				minValue				= 0.1;										\
				maxValue				= 1;										\
				angle0					= (rad angle_closed);						\
				angle1					= (rad angle_opened);						\
			};																		\
			class Door_##doorID##_handle_rot_1: Door_##doorID##_rot					\
			{																		\
				source					= Door_##doorID##_noSound_source;			\
				selection				= Door_Handle_##doorID;						\
				axis					= Door_Handle_##doorID##_axis;				\
				minValue				= 0;										\
				maxValue				= 0.1;										\
				angle0					= 0;										\
				angle1					= (rad h_angle);							\
			};																		\
			class Door_##doorID##_handle_rot_2: Door_##doorID##_handle_rot_1		\
			{																		\
				minValue				= 0.1;										\
				maxValue				= 0.4;										\
				angle1					= -(rad h_angle);							\
			};																		\
			class Door_##doorID##_locked_rot: Door_##doorID##_rot					\
			{																		\
				source					= Door_##doorID##_locked_source;			\
				sourceAddress			= mirror;									\
				minValue				= 0.05;										\
				maxValue				= 0.2;										\
				angle0					= (rad (-0.5 * l_angle));					\
				angle1					= (rad (1.0 * l_angle));					\
				phaseBeg				= 0.1;										\
				phaseEnd				= 0.2;										\
			};																		\
			class Door_##doorID##_handle_locked_rot: Door_##doorID##_handle_rot_1	\
			{																		\
				source					= Door_##doorID##_locked_source;			\
				sourceAddress			= mirror;									\
				maxValue				= 0.5;										\
				angle1					= (rad (5 * h_angle));						\
				phaseBeg				= 0;										\
				phaseEnd				= 0.1;										\
			};




/* Animations for a two wing door without any door handle
	doorID					id of the door
	angleA					maximum opening angle (in degrees) of the A wing of the door
	l_angleA				angle of rotation of the A wing of the door when the door is locked
	angleB					maximum opening angle (in degrees) of the B wing of the door
	l_angleB				angle of rotation of the B wing of the door when the door is locked

	Insight:
	- Creates classes:
	  Door_<doorID>A_rot : Animation that rotates the Door_<doorID>A wing of the door
	  Door_<doorID>A_locked_rot : Animation that rotates the Door_<doorID>A wing of the door when it is locked
	  Door_<doorID>B_rot : Animation that rotates the Door_<doorID>B wing of the door
	  Door_<doorID>B_locked_rot : Animation that rotates the Door_<doorID>B wing of the door when it is locked

	Dependencies:
	- DOOR_ANIMATION_SOURCE (from cfgStructures.hpp)	animation source classes in appropriate CfgVehicles class in config.cpp
	- Door_<doorID>A									selections in resolution and geometry lods in p3d, listed in skeleton as well
	- Door_<doorID>B									selections in resolution and geometry lods in p3d, listed in skeleton as well
	- Door_<doorID>A_axis								selection in memory lod in p3d
	- Door_<doorID>B_axis								selection in memory lod in p3d
*/
#define TWO_WING_DOOR_NO_HANDLE_ANIMATION(doorID,angleA,l_angleA,angleB,l_angleB)	\
			class Door_##doorID##A_rot												\
			{																		\
				type					= rotation;									\
				source					= Door_##doorID##_sound_source;				\
				selection				= Door_##doorID##A;							\
				axis					= Door_##doorID##A_axis;					\
				memory					= 1;										\
				minValue				= 0.1;										\
				maxValue				= 1;										\
				angle0					= 0;										\
				angle1					= (rad angleA);								\
			};																		\
			class Door_##doorID##A_locked_rot: Door_##doorID##A_rot					\
			{																		\
				source					= Door_##doorID##_locked_source;			\
				sourceAddress			= mirror;									\
				minValue				= 0.05;										\
				maxValue				= 0.2;										\
				angle0					= (rad (-0.5 * l_angleA));					\
				angle1					= (rad (1.0 * l_angleA));					\
				phaseBeg				= 0.1;										\
				phaseEnd				= 0.2;										\
			};																		\
			class Door_##doorID##B_rot: Door_##doorID##A_rot						\
			{																		\
				source					= Door_##doorID##_noSound_source;			\
				selection				= Door_##doorID##B;							\
				axis					= Door_##doorID##B_axis;					\
				angle1					= (rad angleB);								\
			};																		\
			class Door_##doorID##B_locked_rot: Door_##doorID##A_locked_rot			\
			{																		\
				selection				= Door_##doorID##B;							\
				axis					= Door_##doorID##B_axis;					\
				angle0					= (rad (-0.5 * l_angleB));					\
				angle1					= (rad (1.0 * l_angleB));					\
			};



/* Animations for a two wing door with a door handle on the A door wing
	doorID					id of the door
	angleA					maximum opening angle (in degrees) of the A wing of the door
	h_angleA				angle of door handle rotation (in degrees) of the A wing of the door
	l_angleA				angle of rotation of the A wing of the door when the door is locked
	angleB					maximum opening angle (in degrees) of the B wing of the door
	l_angleB				angle of rotation of the B wing of the door when the door is locked

	Insight:
	- Creates classes:
	  Door_<doorID>A_rot : Animation that rotates the Door_<doorID>A wing of the door
	  Door_<doorID>A_handle_rot_1 : First animation that rotates the Door_<doorID>A door handle down when opening (up when closing)
	  Door_<doorID>A_handle_rot_2 : Second animation that rotates the Door_<doorID>A door handle up when opening (down when closing)
	  Door_<doorID>A_locked_rot : Animation that rotates the Door_<doorID>A wing of the door when it is locked
	  Door_<doorID>A_handle_locked_rot : Animation that rotates the Door_<doorID>A wing of the door
	  Door_<doorID>B_rot : Animation that rotates the Door_<doorID>B wing of the door
	  Door_<doorID>B_locked_rot : Animation that rotates the Door_<doorID>B wing of the door when it is locked

	Dependencies:
	- DOOR_ANIMATION_SOURCE (from cfgStructures.hpp)	animation source classes in appropriate CfgVehicles class in config.cpp
	- Door_<doorID>A									selections in resolution and geometry lods in p3d, listed in skeleton as well
	- Door_<doorID>B									selections in resolution and geometry lods in p3d, listed in skeleton as well
	- Door_<doorID>A_axis								selection in memory lod in p3d
	- Door_<doorID>B_axis								selection in memory lod in p3d
	- Door_Handle_<doorID>A								selections in resolution lods in p3d, listed in skeleton as well
	- Door_Handle_<doorID>A_axis						selection in memory lod in p3d, listed in skeleton as well
*/
#define TWO_WING_DOOR_ONE_HANDLE_ANIMATION(doorID,angleA,h_angleA,l_angleA,angleB,l_angleB)	\
			class Door_##doorID##A_rot														\
			{																				\
				type					= rotation;											\
				source					= Door_##doorID##_sound_source;						\
				selection				= Door_##doorID##A;									\
				axis					= Door_##doorID##A_axis;							\
				memory					= 1;												\
				minValue				= 0.1;												\
				maxValue				= 1;												\
				angle0					= 0;												\
				angle1					= (rad angleA);										\
			};																				\
			class Door_##doorID##A_handle_rot_1: Door_##doorID##A_rot						\
			{																				\
				source					= Door_##doorID##_noSound_source;					\
				selection				= Door_Handle_##doorID##A;							\
				axis					= Door_Handle_##doorID##A_axis;						\
				minValue				= 0;												\
				maxValue				= 0.1;												\
				angle1					= (rad h_angleA);									\
			};																				\
			class Door_##doorID##A_handle_rot_2: Door_##doorID##A_handle_rot_1				\
			{																				\
				minValue				= 0.1;												\
				maxValue				= 0.4;												\
				angle1					= -(rad h_angleA);									\
			};																				\
			class Door_##doorID##A_locked_rot: Door_##doorID##A_rot							\
			{																				\
				source					= Door_##doorID##_locked_source;					\
				sourceAddress			= mirror;											\
				minValue				= 0.05;												\
				maxValue				= 0.2;												\
				angle0					= (rad (-0.5 * l_angleA));							\
				angle1					= (rad (1.0 * l_angleA));							\
				phaseBeg				= 0.1;												\
				phaseEnd				= 0.2;												\
			};																				\
			class Door_##doorID##A_handle_locked_rot: Door_##doorID##A_handle_rot_1			\
			{																				\
				source					= Door_##doorID##_locked_source;					\
				sourceAddress			= mirror;											\
				maxValue				= 0.5;												\
				angle1					= (rad (5 * h_angleA));								\
				phaseBeg				= 0;												\
				phaseEnd				= 0.1;												\
			};																				\
			class Door_##doorID##B_rot: Door_##doorID##A_rot								\
			{																				\
				source					= Door_##doorID##_noSound_source;					\
				selection				= Door_##doorID##B;									\
				axis					= Door_##doorID##B_axis;							\
				angle1					= (rad angleB);										\
			};																				\
			class Door_##doorID##B_locked_rot: Door_##doorID##A_locked_rot					\
			{																				\
				selection				= Door_##doorID##B;									\
				axis					= Door_##doorID##B_axis;							\
				angle0					= (rad (-0.5 * l_angleB));							\
				angle1					= (rad (1.0 * l_angleB));							\
			};



/* Animations for a two wing door with door handles on both door wings
	doorID					id of the door
	angleA					maximum opening angle (in degrees) of the A wing of the door
	h_angleA				angle of door handle rotation (in degrees) of the A wing of the door
	l_angleA				angle of rotation of the A wing of the door when the door is locked
	angleB					maximum opening angle (in degrees) of the B wing of the door
	h_angleB				angle of door handle rotation (in degrees) of the B wing of the door
	l_angleB				angle of rotation of the B wing of the door when the door is locked

	Insight:
	- Creates classes:
	  Door_<doorID>A_rot : Animation that rotates the Door_<doorID>A wing of the door
	  Door_<doorID>A_handle_rot_1 : First animation that rotates the Door_<doorID>A door handle down when opening (up when closing)
	  Door_<doorID>A_handle_rot_2 : Second animation that rotates the Door_<doorID>A door handle up when opening (down when closing)
	  Door_<doorID>A_locked_rot : Animation that rotates the Door_<doorID>A wing of the door when it is locked
	  Door_<doorID>A_handle_locked_rot : Animation that rotates the Door_<doorID>A wing of the door
	  Door_<doorID>B_rot : Animation that rotates the Door_<doorID>B wing of the door
	  Door_<doorID>B_handle_rot_1 : First animation that rotates the Door_<doorID>B door handle down when opening (up when closing)
	  Door_<doorID>B_handle_rot_2 : Second animation that rotates the Door_<doorID>B door handle up when opening (down when closing)
	  Door_<doorID>B_locked_rot : Animation that rotates the Door_<doorID>B wing of the door when it is locked
	  Door_<doorID>B_handle_locked_rot : Animation that rotates the Door_<doorID>B wing of the door

	Dependencies:
	- DOOR_ANIMATION_SOURCE (from cfgStructures.hpp)	animation source classes in appropriate CfgVehicles class in config.cpp
	- Door_<doorID>A									selections in resolution and geometry lods in p3d, listed in skeleton as well
	- Door_<doorID>B									selections in resolution and geometry lods in p3d, listed in skeleton as well
	- Door_<doorID>A_axis								selection in memory lod in p3d
	- Door_<doorID>B_axis								selection in memory lod in p3d
	- Door_Handle_<doorID>A								selections in resolution lods in p3d, listed in skeleton as well
	- Door_Handle_<doorID>B								selections in resolution lods in p3d, listed in skeleton as well
	- Door_Handle_<doorID>A_axis						selection in memory lod in p3d, listed in skeleton as well
	- Door_Handle_<doorID>B_axis						selection in memory lod in p3d, listed in skeleton as well
*/
#define TWO_WING_DOOR_TWO_HANDLE_ANIMATION(doorID,angleA,h_angleA,l_angleA,angleB,h_angleB,l_angleB)	\
			class Door_##doorID##A_rot																	\
			{																							\
				type					= rotation;														\
				source					= Door_##doorID##_sound_source;									\
				selection				= Door_##doorID##A;												\
				axis					= Door_##doorID##A_axis;										\
				memory					= 1;															\
				minValue				= 0.1;															\
				maxValue				= 1;															\
				angle0					= 0;															\
				angle1					= (rad angleA);													\
			};																							\
			class Door_##doorID##A_handle_rot_1: Door_##doorID##A_rot									\
			{																							\
				source					= Door_##doorID##_noSound_source;								\
				selection				= Door_Handle_##doorID##A;										\
				axis					= Door_Handle_##doorID##A_axis;									\
				minValue				= 0;															\
				maxValue				= 0.1;															\
				angle1					= (rad h_angleA);												\
			};																							\
			class Door_##doorID##A_handle_rot_2: Door_##doorID##A_handle_rot_1							\
			{																							\
				minValue				= 0.1;															\
				maxValue				= 0.4;															\
				angle1					= -(rad h_angleA);												\
			};																							\
			class Door_##doorID##A_locked_rot: Door_##doorID##A_rot										\
			{																							\
				source					= Door_##doorID##_locked_source;								\
				sourceAddress			= mirror;														\
				minValue				= 0.05;															\
				maxValue				= 0.2;															\
				angle0					= (rad (-0.5 * l_angleA));										\
				angle1					= (rad (1.0 * l_angleA));										\
				phaseBeg				= 0.1;															\
				phaseEnd				= 0.2;															\
			};																							\
			class Door_##doorID##A_handle_locked_rot: Door_##doorID##A_handle_rot_1						\
			{																							\
				source					= Door_##doorID##_locked_source;								\
				sourceAddress			= mirror;														\
				maxValue				= 0.5;															\
				angle1					= (rad (5 * h_angleA));											\
				phaseBeg				= 0;															\
				phaseEnd				= 0.1;															\
			};																							\
			class Door_##doorID##B_rot: Door_##doorID##A_rot											\
			{																							\
				source					= Door_##doorID##_noSound_source;								\
				selection				= Door_##doorID##B;												\
				axis					= Door_##doorID##B_axis;										\
				angle1					= (rad angleB);													\
			};																							\
			class Door_##doorID##B_handle_rot_1: Door_##doorID##A_handle_rot_1							\
			{																							\
				selection				= Door_Handle_##doorID##B;										\
				axis					= Door_Handle_##doorID##B_axis;									\
				angle1					= (rad h_angleB);												\
			};																							\
			class Door_##doorID##B_handle_rot_2: Door_##doorID##A_handle_rot_2							\
			{																							\
				selection				= Door_Handle_##doorID##B;										\
				axis					= Door_Handle_##doorID##B_axis;									\
				angle1					= -(rad h_angleB);												\
			};																							\
			class Door_##doorID##B_locked_rot: Door_##doorID##A_locked_rot								\
			{																							\
				selection				= Door_##doorID##B;												\
				axis					= Door_##doorID##B_axis;										\
				angle0					= (rad (-0.5 * l_angleB));										\
				angle1					= (rad (1.0 * l_angleB));										\
			};																							\
			class Door_##doorID##B_handle_locked_rot: Door_##doorID##A_handle_locked_rot				\
			{																							\
				selection				= Door_Handle_##doorID##B;										\
				axis					= Door_Handle_##doorID##B_axis;									\
				angle1					= (rad (5 * h_angleB));											\
			};



/* Animations for a door that slides instead of rotating
	doorID					id of the door
	dist					distance to move the door
	l_dist					distance to move the door when the door is locked

	Insight:
	- Creates a class:
	  Door_<doorID>_move : Animation that slides Door_<doorID>
	  Door_<doorID>_locked_move : Animation that slides Door_<doorID> when it's locked

	Dependencies:
	- DOOR_ANIMATION_SOURCE (from cfgStructures.hpp)	animation source class in appropriate CfgVehicles class in config.cpp
	- Door_<doorID>										selections in resolution and geometry lods in p3d, listed in skeleton as well
	- Door_<doorID>_axis								selection in memory lod in p3d
*/
#define ONE_WING_SLIDE_DOOR_ANIMATION(doorID,dist,l_dist)					\
			class Door_##doorID##_move										\
			{																\
				type					= translation;						\
				source					= Door_##doorID##_sound_source;		\
				selection				= Door_##doorID;					\
				axis					= Door_##doorID##_axis;				\
				memory					= 1;								\
				minValue				= 0;								\
				maxValue				= 1;								\
				offset0					= 0;								\
				offset1					= dist;								\
			};																\
			class Door_##doorID##_locked_move: Door_##doorID##_move			\
			{																\
				source					= Door_##doorID##_locked_source;	\
				sourceAddress			= mirror;							\
				maxValue				= 0.1666;							\
				offset1					= l_dist;							\
			};


/* Animations for a door that slides instead of rotating
	doorID					id of the door
	dist					distance to move the door
	l_dist					distance to move the door when the door is locked

	Insight:
	- Creates a class:
	  Door_<doorID>_move : Animation that slides Door_<doorID>
	  Door_<doorID>_locked_move : Animation that slides Door_<doorID> when it's locked

	Dependencies:
	- DOOR_ANIMATION_SOURCE (from cfgStructures.hpp)	animation source class in appropriate CfgVehicles class in config.cpp
	- Door_<doorID>										selections in resolution and geometry lods in p3d, listed in skeleton as well
	- Door_<doorID>_axis								selection in memory lod in p3d
*/
#define ONE_WING_SLIDE_DOOR_ANIMATION_REVERSED(doorID,dist_close,dist_open,l_dist)	\
			class Door_##doorID##_move												\
			{																		\
				type					= translation;								\
				source					= Door_##doorID##_sound_source;				\
				selection				= Door_##doorID;							\
				axis					= Door_##doorID##_axis;						\
				memory					= 1;										\
				minValue				= 0;										\
				maxValue				= 1;										\
				offset0					= dist_close;								\
				offset1					= dist_open;								\
			};																		\
			class Door_##doorID##_locked_move: Door_##doorID##_move					\
			{																		\
				source					= Door_##doorID##_locked_source;			\
				sourceAddress			= mirror;									\
				maxValue				= 0.1666;									\
				offset1					= l_dist;									\
			};


/* Animations for a two wing door that slides instead of rotating
	doorID					id of the door
	distA					distance to move the A wing of the door
	distB					distance to move the B wing of the door
	l_distA					distance to move the A wing of the door when the door is locked
	l_distB					distance to move the B wing of the door when the door is locked

	Insight:
	- Creates classes:
	  Door_<doorID>A_move : Animation that slides Door_<doorID>A
	  Door_<doorID>A_locked_move : Animation that slides Door_<doorID>A when the door is locked
	  Door_<doorID>B_move : Animation that slides Door_<doorID>B
	  Door_<doorID>B_locked_move : Animation that slides Door_<doorID>B when the door is locked
	- While the door wings share their animation source, each of them has it's own axis

	Dependencies:
	- DOOR_ANIMATION_SOURCE (from cfgStructures.hpp)	animation source classes in appropriate CfgVehicles class in config.cpp
	- Door_<doorID>A									selections in resolution and geometry lods in p3d, listed in skeleton as well
	- Door_<doorID>B									selections in resolution and geometry lods in p3d, listed in skeleton as well
	- Door_<doorID>A_axis								selection in memory lod in p3d
	- Door_<doorID>B_axis								selection in memory lod in p3d
*/
#define TWO_WING_SLIDE_DOOR_ANIMATION(doorID,distA,distB,l_distA,l_distB)	\
			class Door_##doorID##A_move										\
			{																\
				type					= translation;						\
				source					= Door_##doorID##_sound_source;		\
				selection				= Door_##doorID##A;					\
				axis					= Door_##doorID##A_axis;			\
				memory					= 1;								\
				minValue				= 0;								\
				maxValue				= 1;								\
				offset0					= 0;								\
				offset1					= distA;							\
			};																\
			class Door_##doorID##A_locked_move: Door_##doorID##A_move		\
			{																\
				source					= Door_##doorID##_locked_source;	\
				sourceAddress			= mirror;							\
				maxValue				= 0.1666;							\
				offset1					= l_distA;							\
			};																\
			class Door_##doorID##B_move: Door_##doorID##A_move				\
			{																\
				source					= Door_##doorID##_noSound_source;	\
				selection				= Door_##doorID##B;					\
				axis					= Door_##doorID##B_axis;			\
				offset1					= distB;							\
			};																\
			class Door_##doorID##B_locked_move: Door_##doorID##B_move		\
			{																\
				source					= Door_##doorID##_locked_source;	\
				sourceAddress			= mirror;							\
				maxValue				= 0.1666;							\
				offset1					= l_distB;							\
			};



/* Animation class for a hatch without a handle.
	hatchID					id of the hatch
	angle					maximum opening angle (in degrees)

	Insight:
	- Creates class:
	  Hatch_<hatchID>_rot : Animation that rotates the hatch.

	Dependencies:
	- HATCH_ANIMATION_SOURCE							animation source class in appropriate CfgVehicles class in config.cpp
	- Hatch_<hatchID>									selections in resolution and geometry lods in p3d, listed in skeleton as well
	- Hatch_<hatchID>_axis								selection in memory lod in p3d
*/
#define HATCH_NO_HANDLE_ANIMATION(hatchID,angle)					\
			class Hatch_##hatchID##_rot								\
			{														\
				type					= rotation;					\
				source					= Hatch_##hatchID##_source;	\
				selection				= Hatch_##hatchID;			\
				axis					= Hatch_##hatchID##_axis;	\
				memory					= 1;						\
				minValue				= 0;						\
				maxValue				= 1;						\
				angle0					= 0;						\
				angle1					= (rad angle);				\
			};



/* Animation class for a hitzone.
	hitzoneID					id of hitzone
	threshold					damage level at which the hitzone colapses

	Insight:
	- Creates classes:
	  Hitzone_<hitzoneID>_hide : Animation that hides a destroyed part of a structure.
	  Hitzone_<hitzoneID>_unhide : Animation that unhides ruins/rubble of a destroyed part of a structure.
	- See notes for DEFAULT_THRESHOLD at the start of this file for more info on synchronization of gradual destruction.

	Dependencies:
	- HITZONE_ANIMATION_SOURCE							animation source class in appropriate CfgVehicles class in config.cpp
	- Dam_<hitzoneID>_hide								selections in lods in p3d, listed in skeleton as well
	- Dam_<hitzoneID>_unhide							selections in lods in p3d, listed in skeleton as well
*/
#define HITZONE_ANIMATION(hitzoneID,threshold)								\
			class Hitzone_##hitzoneID##_hide								\
			{																\
				type					= hide;								\
				source					= Hitzone_##hitzoneID##_source;		\
				selection				= Dam_##hitzoneID##_hide;			\
				minValue				= 0;								\
				maxValue				= 1;								\
				hideValue				= threshold;						\
			};																\
			class Hitzone_##hitzoneID##_unhide: Hitzone_##hitzoneID##_hide	\
			{																\
				selection				= Dam_##hitzoneID##_unhide;			\
				hideValue				= 0;								\
				unhideValue				= threshold;						\
			};



/* Animation class for hiding door and their useractions based on hitpoints.
	doorID						id of door
	threshold					damage level at which the hitzone colapses
	hitzoneID					id of hitzone

	Insight:
	- Creates class:
	  Door_<doorID>_Hitzone_<hitzoneID>_hide : Animation that hides a door based on destruction of a hitzone.
	- See notes for DEFAULT_THRESHOLD at the start of this file for more info on synchronization of gradual destruction.

	Dependencies:
	- HITZONE_ANIMATION_SOURCE							animation source class in appropriate CfgVehicles class in config.cpp
	- Door_<doorID>										selections in lods in p3d, listed in skeleton as well
*/
#define HIT_DOOR_ANIMATION(doorID,threshold,hitzoneID)					\
			class Door_##doorID##_Hitzone_##hitzoneID##_hide			\
			{															\
				type					= hide;							\
				source					= Hitzone_##hitzoneID##_source;	\
				selection				= Door_##doorID;				\
				minValue				= 0;							\
				maxValue				= 1;							\
				hideValue				= threshold;					\
			};



/* Animation class for destroying glass (windows).
	glassID						id of glass
	threshold					damage level at which the glass is destroyed

	Insight:
	- Creates classes:
	  Glass_<glassID>_hide : Animation that hides the full plate of the glass
	  Glass_<glassID>_unhide : Animation that unhides bits/shards of the glass
	- See notes for DEFAULT_THRESHOLD at the start of this file for more info on synchronization of gradual destruction.

	Dependencies:
	- GLASS_ANIMATION_SOURCE							animation source class in appropriate CfgVehicles class in config.cpp
	- Glass_<glassID>_hide								selections in lods in p3d, listed in skeleton as well
	- Glass_<glassID>_unhide							selections in lods in p3d, listed in skeleton as well
*/
#define HIT_GLASS_ANIMATION(glassID,threshold)						\
			class Glass_##glassID##_hide							\
			{														\
				type					= hide;						\
				source					= Glass_##glassID##_source;	\
				selection				= Glass_##glassID##_hide;	\
				minValue				= 0;						\
				maxValue				= 1;						\
				hideValue				= threshold;				\
			};														\
			class Glass_##glassID##_unhide: Glass_##glassID##_hide	\
			{														\
				selection				= Glass_##glassID##_unhide;	\
				hideValue				= 0;						\
				unhideValue				= threshold;				\
			};



/* Animation class for hiding glass based on hitpoints
	glassID						id of glass
	threshold					damage level at which the glass is destroyed
	hitzoneID					id of hitzone

	Insight:
	- Creates classes:
	  Glass_<glassID>_Hitzone_<hitzoneID>_hide : Animation that hides the full plate of the glass based on damage to a hitzone.
	  Glass_<glassID>_Hitzone_<hitzoneID>_unhide : Animation that unhides bits/shards of the glass based on damage to a hitzone.
	- See notes for DEFAULT_THRESHOLD at the start of this file for more info on synchronization of gradual destruction.
	- This is an extension to the macro HIT_GLASS_ANIMATION just above. However this extension isn't necessary as the same
	  can be achieved with proper skeleton structure and selections in p3d.

	Dependencies:
	- HITZONE_ANIMATION_SOURCE							animation source class in appropriate CfgVehicles class in config.cpp
	- Glass_<glassID>_hide								selections in lods in p3d, listed in skeleton as well
	- Glass_<glassID>_unhide							selections in lods in p3d, listed in skeleton as well
*/
#define HIT_GLASS_BASED_ON_HITZONE_ANIMATION(glassID,threshold,hitzoneID)				\
			class Glass_##glassID##_Hitzone_##hitzoneID##_hide: Glass_##glassID##_hide	\
			{																			\
				source					= Hitzone_##hitzoneID##_source;					\
			};																			\
			class Glass_##glassID##_Hitzone_##hitzoneID##_hide: Glass_##glassID##_hide	\
			{																			\
				selection				= Glass_##glassID##_unhide;						\
				hideValue				= 0;											\
				unhideValue				= threshold;									\
			};



/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
#define ANIM_HIDE(sele,suffix,asource,srcadd,minV,maxV,hideV)	\
			class sele##suffix									\
			{													\
				type					= hide;					\
				source					= asource;				\
				sourceaddress 			= srcadd;				\
				selection				= sele;					\
				memory					= 1;					\
				minValue				= minV;					\
				maxValue				= maxV;					\
				hideValue				= hideV;				\
			};

#define ANIM_UNHIDE(sele,suffix,asource,srcadd,minV,maxV,hideV,unhideV)	\
			class sele##suffix											\
			{															\
				type					= hide;							\
				source					= asource;						\
				sourceaddress 			= srcadd;						\
				selection				= sele;							\
				memory					= 1;							\
				minValue				= minV;							\
				maxValue				= maxV;							\
				hideValue				= hideV;						\
				unhideValue				= unhideV;						\
			};

#define ANIM_ROTATION(sele,suffix,asource,srcadd,sele_axis,minV,maxV,minAngle,maxAngle)	\
			class sele##suffix															\
			{																			\
				type					= rotation;										\
				source					= asource;										\
				sourceaddress 			= srcadd;										\
				selection				= sele;											\
				axis					= sele_axis;									\
				memory					= 1;											\
				minValue				= minV;											\
				maxValue				= maxV;											\
				angle0					= (rad minAngle);								\
				angle1					= (rad maxAngle);								\
			};

#define ANIM_TRANSLATION(sele,suffix,asource,srcadd,sele_axis,minV,maxV,minOff,maxOff)	\
			class sele##suffix															\
			{																			\
				type					= translation;									\
				source					= asource;										\
				sourceaddress 			= srcadd;										\
				selection				= sele;											\
				axis					= sele_axis;									\
				memory					= 1;											\
				minValue				= minV;											\
				maxValue				= maxV;											\
				offset0					= minOff;										\
				offset1					= maxOff;										\
			};
/* Animation class for hiding/unhiding damage for cage armor (SLAT).
	side					name of location of cage part (e.g. "front" or "left_1")
	slction					name of selection of cage part

	Insight:
	- Creates classes:
	  Cage_<side>_normal_hide -			Animation that hides the undamaged (normal) part of cage if damage is big enough
	  Cage_<side>_damage_unhide -		Animation that unhides damaged part of cage if damage is big enough
	  Cage_<side>_damage_hide -			Animation that hides damaged part of cage if damage is big enough
	  Cage_<side>_destroyed_unhide -	Animation that unhides destroyed part of cage if damage is big enough

	Dependencies:
	- HitSLAT_<side>_src				animation source class in appropriate CfgVehicles class in config.cpp
	- Cage_<side>						selections in lods in p3d, listed in skeleton as well (normal, undamaged variant)
	- Cage_<side>_dmg					selections in lods in p3d, listed in skeleton as well (damaged variant)
	- Cage_<side>_dst					selections in lods in p3d, listed in skeleton as well (destroyed variant)
*/

#define SLAT_ARMOR(side,slction)					\
			class Slat_##side##_normal_hide			\
			{										\
				type        = "hide";				\
				source      = HitSLAT_##side##_src;	\
				selection   = slction;				\
				minValue    = 0;					\
				maxValue    = 1;					\
				hideValue   = 0.5;					\
			};										\
			class Slat_##side##_damage_unhide		\
			{										\
				type        = "hide";				\
				source      = HitSLAT_##side##_src;	\
				selection   = slction##_dmg;		\
				minValue    = 0;					\
				maxValue    = 1;					\
				hideValue   = 0;					\
				unHideValue = 0.5;					\
			};										\
			class Slat_##side##_damage_hide			\
			{										\
				type        = "hide";				\
				source      = HitSLAT_##side##_src;	\
				selection   = slction##_dmg;		\
				minValue    = 0;					\
				maxValue    = 1;					\
				hideValue   = 0.7;					\
			};										\
			class Slat_##side##_destroyed_unhide	\
			{										\
				type        = "hide";				\
				source      = HitSLAT_##side##_src;	\
				selection   = slction##_dst;		\
				minValue    = 0;					\
				maxValue    = 1;					\
				hideValue   = 0;					\
				unHideValue = 0.7;					\
			};										\
			class Slat_##side##_firegeo_hide		\
			{										\
				type        = "hide";				\
				source      = HitSLAT_##side##_src;	\
				selection   = slction##_geo;		\
				minValue    = 0;					\
				maxValue    = 1;					\
				hideValue   = 0.7;					\
			};