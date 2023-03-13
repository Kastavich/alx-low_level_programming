#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: array
 * Return: Always 0
 */

void print_chessboard(char (*a)[8])
{
	int j;
	int m;

	for (j = 0 ; j < 8 ; j++)
	{
		for (m = 0 ; m < 8 ; m++)
			_putchar(a[j][m]);
		_putchar('\n');
	}
}
