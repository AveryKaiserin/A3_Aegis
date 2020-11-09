/*
- Groups and such
- Placed in CfgGroups
*/

// Unit for a group
#define GROUP_UNIT(num,unit,side,rank,posX,posY) \
	class Unit##num \
	{ \
		side = side; \
		vehicle = unit; \
		rank = rank; \
		position[] = {posX,posY,0}; \
	};