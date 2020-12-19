#include <math.h>
#include "float.h"

double
logn(base, val)
int base;
double val;
{
        return log(val)/log(base);
}
