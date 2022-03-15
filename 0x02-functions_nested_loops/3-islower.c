#include "main.h"

/**
 * _islower - function that checks for lowercase character.
 * @c: checks character
 *
 * Return: 1 for lowercase, 0 for uppercase
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
