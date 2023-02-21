#include <stdio.h>

/**
 * main - prints all possible combinations of two two-digit numbers
 *
 * Return: Always 0
 */

int main(void)
{
	int x;
	int r;

	for (x = 0 ; x <= 98 ; x++)
	{
		for (r = x + 1 ; r <= 99 ; r++)
		{
			putchar((x / 10) + '0');
			putchar((x % 10) + '0');
			putchar(' ');
			putchar((r / 10) + '0');
			putchar((r % 10) + '0');
			if (x == 98 && r == 99)
				continue;
			{
				putchar(',');
				putchar(' ');
			}

		}
	}
	putchar('\n');
	return (0);
}

