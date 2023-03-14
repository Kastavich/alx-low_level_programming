#include <stdio.h>
#include "main.h"

/**
 * _sqrt_recursion - returns sqrt of n
 * @n: value to find sqrt of
 * Return: sqrt value
 */

int _sqrt_recursion(int n)
{
	return (_sqroot(n, 1));
}

/**
 * _sqroot - returns square root
 * @n: value to find square root of
 * @i: odd value to subtract from n
 * Return: value of sqrt
 */

int _sqroot(int n, int i)
{
	if (n == 0)
		return (0);
	else if (n < 0)
	{
		i /= 2;
		i++;
		return (i * -1);
	}
	n -= i;
	i += 2;
	return (1 + _sqroot(n, i));
}
