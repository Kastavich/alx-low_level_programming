#include "main.h"

/**
 * jack_bauer -  prints every minute of the day
 *
 * Return: Always 0
 */

void jack_bauer(void)
{
	int g;
	int h;

	for (g = 0 ; g < 24 ; g++)
	{
		for (h = 0 ; h < 60 ; h++)
		{
			_putchar(g / 10 + '0');
			_putchar(g % 10 + '0');
			_putchar(':');
			_putchar(h / 10 + '0');
			_putchar(h % 10 + '0');
			_putchar('\n');
		}
	}
}
