#include	<math.h>

extern double exp();

double
ldexp(x, y)
double	x;
int y;
{
	if(y == 0)
		return 1.0;

	if(x == 0.0)
		return 0.0;

        if (x < 0)
        {
		x = -x;
		return -exp(log(x) * y);
	}

	return exp(log(x) * y);
}

