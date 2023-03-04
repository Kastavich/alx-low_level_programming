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
	int indx = 0;
	int srclen = 0;

	while (src[indx++])
		srclen++;
	for (indx = 0 ; src[indx] && indx < n ; indx++)
		dest[indx] = src[indx];
	for (indx = srclen ; indx < n ; indx++)
		dest[indx] = '\0';
	return (dest);
}
