#include "main.h"
#include <string.h>

/**
 * print_chessboard - display chess board
 * @a: array[8][8]
 * Return: nothing.
 */
void print_chessboard(char (*a)[8])
{
	int i, u;

	for (i = 0; i < 8; i++)
	{
		for (u = 0; u < 8; u++)
		{
			_putchar(a[i][u]);
		}
		_putchar('\n');
	}
}
