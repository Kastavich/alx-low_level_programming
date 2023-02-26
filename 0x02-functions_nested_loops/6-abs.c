#include "main.h"

/**
 * _abs - computes the absolute value
 *
 * @a: parameter checked
 *
 * Return: Absolute value of number or 0
 */

int _abs(int a)
{
	if (a < 0)
	{
		int abs_val;

		abs_val = a * -1;
		return (abs_val);
	}
	return (a);
}
