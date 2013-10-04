#include <math.h>

void Sys_SnapVector(float *v)
{
	v[0] = (double)lrint(v[0]);
	v[1] = (double)lrint(v[1]);
	v[2] = (double)lrint(v[2]);
}

