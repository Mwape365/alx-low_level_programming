#include "main.h"

/**
 * puts_half - Function that prints half of a string,
 * followed by a new line
 *
 * @str: string to be divided
 */

void puts_half(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		;
	}

	if (i % 2 != 0)
	{
		i = (i + 1) / 2;

		for (; str[i] != '\0';)
		{
			_putchar(str[i++]);
		}
		_putchar('\n');
	}
	else if (i % 2 == 0)
	{
		i /= 2;

		for (; str[i] != '\0';)
		{
			_putchar(str[i++]);
		}
		_putchar('\n');
	}
}
