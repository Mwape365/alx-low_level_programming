#include "main.h"

/**
  * string_toupper - Function changes all lowercase letters to uppercase
  * @u: String that will be modified
  *
  * Return: char u
  */
char *string_toupper(char *u)
{
	int a = 0;

	while (u[a])
	{
		if (u[a] >= 97 && u[a] <= 122)
		{
			u[a] -= 32;
		}

		a++;
	}

	return (u);
}
