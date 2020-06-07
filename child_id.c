#include "tree_based_quadrants.h"

int child_id (const quadrant_t *q) {
	int res = 0;
	res += (q->x & QUADRANT_LEN(q->level) ? 1 : 0);
	res += ((q->y & QUADRANT_LEN(q->level) ? 1 : 0) << 1);
	res += ((q->z & QUADRANT_LEN(q->level) ? 1 : 0) << 2);
	
	return res;
}