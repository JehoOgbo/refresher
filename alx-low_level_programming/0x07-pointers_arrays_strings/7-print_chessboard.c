#include "main.h"

/**
 * print_chessboard - prints a chess board when given the pieces config
 * Description: the input is provided in form of an 8 x 8 pointer to an array
 *
 * @a: pointer to an 8 x 8 array
 *
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (j = 0; j < 8; j++)
	{
		i = 0;
		while (i < 8)
		{
			_putchar(a[j][i]);
			i++;
		}
		_putchar('\n');
	}
}
