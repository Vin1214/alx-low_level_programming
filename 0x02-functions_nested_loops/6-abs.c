#include "main.h"

/**
 * _abs - Computes absolute value of an integer
 * @c: The number to be computed
 * Retur: Absolute value of number or xero
 */

int _abs(int c)

{
	if (c < 0)
	{
	int abs_val;

	abs_val = c * -1;
	return (abs_val);
	}
	return (c);

}
