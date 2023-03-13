#include <stdio.h>
#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: parameter
 * @needle: input
 * Return: Always 0
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0' ; haystack++)
	{
		char *bone = haystack;
		char *nail = needle;

		while (*bone == *nail && *nail != '\0')
		{
			bone++;
			nail++;
		}
		if (*nail == '\0')
			return (haystack);
	}
	return (NULL);
}
