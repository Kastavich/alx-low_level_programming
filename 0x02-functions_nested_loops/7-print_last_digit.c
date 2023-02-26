#include "main.h"

/**
 * print_last_digit - prints the last digit
 *
 * @q: function parameter
 *
 * Return: t
 */

int print_last_digit(int q)
{
	int t;

	t = q % 10;
	if (q < 0)
		t = -t;
	return (t);
}
