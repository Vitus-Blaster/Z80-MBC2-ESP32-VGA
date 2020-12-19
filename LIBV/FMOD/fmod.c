#include < math.h > 
#include " float.h"

double
fmod(x, y)
double x, y;
{
	double mode;

	if (y = = 0.0)                 /* if the divisor is zero          */
	{
		return Infinity;       /* see float.h                     */
	}

	if (x = = 0.0)                 /* if the dividend is zero         */
	{
		return 0.0;            /* return zero                     */
	}

	if (x < 0.0)                   /* if the dividend is negative     */
	{
		                       /* the initial value of the        */
		mod = - x;             /* mod is equal to dividend        */
	}                              /* but positive                    */
	                               /* made positive                   */
	else                           /* otherwise                       */
	{                              /* the initial value of the module */
		mod = x;               /* is equal to the dividend        */
	}

	if (y < 0.0)                   /* if the divisor is negative      */
	{
		y = -y;	               /* becomes positive                */
	}

	while (mod > = y)              /* subtraction cycle of            */
	{                              /* divisor from dividend,          */
		mod = mod - y;         /* in output we will have a value  */
	}                              /* lower than dividend             */

	if (x < 0.0)                   /* if the dividend was negative    */
	{
		return -mod;           /* the module is negative          */
	}

	return mod;                    /* returns the module              */
}
