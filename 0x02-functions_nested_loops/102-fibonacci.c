#include <stdio.h>

/**
 * main - prints the first 52 Fibonacci numbers
 * Return: void
 */

int main(void)
{
	int t;
	long u = 1, v = 2, tot;

	for (t = 0 ; t < 50 ; t++)
	{
		tot = u + v;
		printf("%lu", tot);
		{
			u = v;
			v = tot;
		}
		if (t == 49)
			printf("\n");
		else
			printf(",");
	}
	return (0);
}
