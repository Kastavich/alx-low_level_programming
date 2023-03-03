#include "main.h"
#include <stdio.h>

/**
 * _strcat - concatenates two strings
 * @dest: string destination
 * @src: string source
 * Return: the string destination
 */

char *_strcat(char *dest, char *src)
{
	int destlen = 0;
	int i;

	while (dest[destlen])
	{
		destlen++;
	}
	for (i = 0 ; src[i] != 0 ; i++)
	{
		dest[destlen] = src[i];
		destlen++;
	}
	dest[destlen] = '\0';
	return (dest);
}
