#include "main.h"

/**
 * _isalpha - checks alphabet
 *
 * @c: parameter to be checked
 *
 * Return: 1 if it is alphabet & 0 if otherwise
 */

int _isalpha(int c)
{
	if ((c >= 98 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
