#include "main.h"

/**
 * _atoi - convert a string to an integer
 *
 * @s: pointer to convert
 *
 * Return: integer
 */

int _atoi(char *s)
{
	int h = 0;
	unsigned int kr = 0;
	int min = 1;
	int csi = 0;

	while (s[h])
	{
		if (s[h] == 45)
		{
			min *= -1;
		}
		while (s[h] >= 48 && s[h] <= 57)
		{
			csi = 1;
			kr = (kr * 10) + (s[h] - '0');
			h++;
		}
		if (csi == 1)
		{
			break;
		}
		h++;
	}
	kr *= min;
	return (kr);
}
