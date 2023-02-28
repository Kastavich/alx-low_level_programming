#include <stdio.h>

/**
 * swap_int - swaps the values of two integers
 *
 * @a: first integer
 *
 * @b: second integer
 *
 * Return: Always 0
 */

void swap_int(int *a, int *b)
/* function that swaps the values of two integers. */
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
