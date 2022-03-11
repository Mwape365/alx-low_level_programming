#include <stdio.h>

/**
  * main - Prints numbers from 0 to 9 using putchar
  *
  * Return: 0
  */
int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}

	putchar('\n');

	return (0);
}
