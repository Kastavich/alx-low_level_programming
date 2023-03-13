#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - sum of the two diagonals of a square
 * @a: parameter
 * @size: input
 * Return: Always 0
 */

void print_diagsums(int *a, int size)
{
	int k, l, sum1 = 0, sum2 = 0;

	for (k = 0 ; k <= (size * size) ; k = k + size + 1)
		sum1 = sum1 + a[k];
	for (l = size - 1 ; l <= (size * size) - size ; l = l + size - 1)
		sum2 = sum2 + a[l];
	printf("%d, %d\n", sum1, sum2);
}
