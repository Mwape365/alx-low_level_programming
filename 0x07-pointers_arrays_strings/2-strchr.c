#include "main.h"
#include <stdio.h>

/**
  * _strchr - Function that locates a character in string
  * @c: character to be found
  * @s: source of string
  *
  * Return: string of character found
  */

char *_strchr(char *s, char c)
{
	int x = 0, y;

	while (s[x])
	{
		x++;
	}

	for (y = 0; y <= x; y++)
	{
		if (c == s[y])
		{
			s += y;
			return (s);
		}
	}

	return ('\0');
}
