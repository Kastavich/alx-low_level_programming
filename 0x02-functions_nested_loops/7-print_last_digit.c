#include "main.h"

/**
 * print_last_digit - prints the last digit
 *
 * @q: function parameter
 *
 * Return: Value of last digit
 */

int print_last_digit(int q)
{
	int t;

	t = q % 10;
	if (t < 0)
	{
		t = t * -1;
	}
	_putchar(t + '0');
	return (t);
}
