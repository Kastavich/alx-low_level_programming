#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: string parameter
 * Return: pointer to string
 */

char *cap_string(char *str)
{
	int m;
	int p;
	char c[] = {44, 59, 46, 33, 63, 34, 40, 41, 123, 125, 32, 10, 9};

	m = 0;

	while (str[m] != '\0')
	{
		if (m == 0 && str[m] >= 97 && str[m] <= 122)
		{
			str[m] = str[m] - 32;
		}
		p = 0;

		while (c[p] != '\0')
		{
			if (c[p] == str[m] && (str[m + 1] >= 97 && str[m + 1] <= 122))
			{
				str[m + 1] = str[m + 1] - 32;
			}
			p++;
		}
		m++;
	}
	return (str);
}










