#include "main.h"

/**
  * print_line - Function that draws a straight line in the terminal
  * @n: Number of times the character _ should be printed
  *
  * Return: 0
  */
void print_line(int n)
{
	int x;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x < n; x++)
		{
			_putchar(95);
		}

		_putchar('\n');
	}
}
