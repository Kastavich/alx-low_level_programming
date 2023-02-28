#include <stdio.h>

/**
 * main - prints the sum of all the multiples
 *
 * Return: Always 0
 */

int main(void)
{
	int d, e = 0;

	while (d < 1024)
	{
		if ((d % 3 == 0) || (d % 5 == 0))
		{
			e += d;
		}
		d++;
	}
	printf("%d\n", e);
	return (0);
}
