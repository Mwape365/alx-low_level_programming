#include "main.h"

/**
 * print_last_digit - function that prints the last digit of a number
 * @n: Checks the input number
 *
 * Return: int
 */
int print_last_digit(int n)
{
	int ln = n % 10;

	if (n < 0)
		ln = ln * -1;
	_putchar(ln + '0');
	return (ln);
}
