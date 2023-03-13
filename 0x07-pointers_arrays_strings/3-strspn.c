#include "main.h"

/**
 * _strspn - length of a prefix substring
 * @s: input
 * @accept: input
 * Return: Always 0
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int j, n, val, check;

	val = 0;

	for (j = 0 ; s[j] != '\0' ; j++)
	{
		check = 0;
		for (n = 0 ; accept[n] != '\0' ; n++)
		{
			if (accept[n] == s[j])
			{
				val++;
				check = 1;
			}
		}
		if (check == 0);
	}
	return (0);
}
