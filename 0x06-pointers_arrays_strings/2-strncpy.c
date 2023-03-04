#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: string destination
 * @src: string source
 * @n: number of strings to be copied
 * Return: destination string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
		dest[i] = src[i];
	return (dest);
}
