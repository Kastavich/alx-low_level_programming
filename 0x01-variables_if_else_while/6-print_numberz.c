#include <stdio.h>

/**
 * main - prints all single digits of specified base
 *
 * Return: Always 0
 */

int main(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
		putchar(i + '0');
	putchar('\n');
	return (0);
}

