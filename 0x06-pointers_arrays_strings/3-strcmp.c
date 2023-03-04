#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: pointer of first string
 * @s2: pointer of second string
 * Return: negative difference if str1 < str2.
 * If str1 == str2, 0.
 * postive difference if str1 > str2.
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

