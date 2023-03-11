#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: input
 * @src: input
 * @n: input
 * Return: Always 0
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j;

	for (j = 0 ; j < n ; j++)
		dest[j] = src[j];
	return (dest);
}
