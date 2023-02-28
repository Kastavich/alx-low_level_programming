#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers
 * Return: Always
 */

int main(void)
{
	int t;
	long u = 1, v = 2;

	while (t < 50)
	{
		if (t == 0)
			printf("%ld", u);
		else if (t == 1)
			printf(", %ld", v);
		else
		{
			v += u;
			u = v - u;
			printf(", %ld", v);
		}
		++t;
	}
	printf("\n");
	return (0);
}
