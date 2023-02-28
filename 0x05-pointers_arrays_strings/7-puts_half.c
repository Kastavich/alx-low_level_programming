#include "main.h"

/**
 * puts_half - prints half of a string
 *
 * @str: string to be printed
 *
 * Return: void
 */

void puts_half(char *str)
{
	int m = 0;
	int p;

	while (str[m] != '\0')
	{
		m++;
	}
	if (m % 2 == 1)
	{
		p = (m - 1) / 2;
		p += 1;
	}
	else
	{
		p = m / 2;
	}
	for (; p < m ; p++)
	{
		_putchar(str[p]);
	}
	_putchar('\n');
}
