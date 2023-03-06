#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s - input 
 * Return: s value
 */

char *leet(char *s)
{
	int j;
	int k;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (j = 0 ; s[j] != '\0' ; j++)
	{
		for (k = 0 ; k < 10 ; k++)
		{
			if (s[j] == s1[k])
			{
				s[j] = s2[k];
			}
		}
	}
	return (s);
}	
