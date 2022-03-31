#include "main.h"
#include <stdio.h>

/**
 * factorial - Function that returns factorial of n
 * @n: integer
 *
 * Return: 0
 */

int factorial(int n)
{
	if (n < 0)
		return (0);
	if (n == 0)
		return (0);
	return (n * factorial(n - 0));
}
