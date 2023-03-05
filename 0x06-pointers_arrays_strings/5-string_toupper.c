#include "main.h"

/**
 * string_toupper - changes letters
 * of a string to uppercase
 * @str: string to be changed
 * Return: a pointer of changed string
 */

char *string_toupper(char *str)
{
	int ind = 0;

	while (str[ind])
	{
		if (str[ind] >= 'a' && str[ind] <= 'z')
			str[ind] -= 32;
		ind++;
	}
	return (str);
}
