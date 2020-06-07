#include "tree_based_quadrants.h"
#include "math.h"

int child_id (const quadrant_t *q) {
	int h = pow(2, QUADRANT_LEN(q->level));
	int res = 0;
	res += (q->x & h ? 1 : 0);
	res += 2*(q->y & h ? 1 : 0);
	res += 4*(q->z & h ? 1 : 0);
	
	return res;
}