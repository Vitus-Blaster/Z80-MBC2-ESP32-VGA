#include	<math.h>

extern double exp();

double
power(x, y)
double	x, y;
{
	if(y == 0.0)
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

