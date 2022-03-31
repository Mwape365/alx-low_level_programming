#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - Returns Length of String
 * @s: string
 *
 * Return: 1 on success
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
