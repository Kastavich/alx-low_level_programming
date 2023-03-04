#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: array of integers
 * @n: number of elements
 *
 */

void reverse_array(int *a, int n)
{
	int tmp;
	int indx;

	for (indx = n - 1 ; indx >= n / 2 ; indx--)
	{
		tmp = a[n - 1 - indx];
		a[n - 1 - indx] = a[indx];
		a[indx] = tmp;
	}
}
