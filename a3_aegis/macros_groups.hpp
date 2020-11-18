/*
- Groups and such
- Placed in CfgGroups
*/

#define GROUP_UNIT(a,b,c,d,posX,posY) \
	class Unit##a## \
	{ \
		side = ##c##; \
		vehicle = ##b##; \
		rank = ##d##; \
		position[] = {##posX##,##posY##,0}; \
	}