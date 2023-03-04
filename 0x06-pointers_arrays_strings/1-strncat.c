#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: string destination
 * @src: string source
 * @n: number of characters to be appended
 * Return: concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int destlen = 0;
	int indx = 0;

	while (dest[indx++])
		destlen++;
	for (indx = 0 ; src[indx] && indx < n ; indx++)
		dest[destlen++] = src[indx];
	return (dest);
}

