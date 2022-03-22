#include "main.h"

/**
 * print_rev - Function that prints a string in reverse,
 *
 * @s: parameter string to reverse
 */

void print_rev(char *s)
{
	int i, j;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}

	j = i - 1;
	while (s[j])
	{
		_putchar(s[j]);
		j--;
	}
	_putchar('\n');
}
