#include "main.h"

/**
 * _strlen - A function that returns the length of a string
 *
 * @s: pointer passed for the char value
 *
 * Return: 0
 */

int _strlen(char *s)
{
	int i = 0;
	int length;

	while (s[i] != '\0')
	{
		i++;
	}
	length = i;
	return (length);
}
