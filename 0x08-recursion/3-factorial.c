#include "main.h"
#include <stdio.h>

/**
 * factorial - Function that returns factorial of a given number
 * @n: integer
 *
 * Return: 1 on success and -1 on error
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
