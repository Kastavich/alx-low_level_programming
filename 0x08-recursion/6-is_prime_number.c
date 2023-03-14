#include "main.h"

/**
 * is_prime_number - checks if number is a prime number
 * @n: number to be checked
 * Return: 1 if prime number and 0 if composite
 */

int is_prime_number(int n)
{
	_pri;

	return (_pri(n, 2));
}

/**
 * _pri - compute the prime number
 * @n: number to find prime number of
 * @i: value to use to divide
 * Return: 1 if prime number and 0 if not
 */

int _pri(int n, int i)
{
	if ((i > (n / 2)) && n != 1 && n > 0)
	{
		return (1);
	}
	else if ((n % i == 0 && i < (n / 2)) || n <= 1)
	{
		return (0);
	}

	return (_pri(n, i + 1));

}
