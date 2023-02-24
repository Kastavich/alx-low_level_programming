#include "main.h"

/**
 * _islower - Check for lower case character
 * @c: paramter or character to be checked
 * Return: 1 if lower case or 0 for anything else
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
