#include "main.h"
#include <stdio.h>

/**
  * print_chessboard - Function prints the chessboard
  * @a: array of pieces
  *
  * Return: Nothing.
  */
void print_chessboard(char (*a)[8])
{
	int e, f;

	for (e = 0; e < 8; e++)
	{
		for (f = 0; f < 8; f++)
		{
			_putchar(a[e][f]);
		}

		_putchar('\n');
	}
}
