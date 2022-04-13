#include <stdio.h>

/**
 * print_name - Function that prints a name
 *
 * @name: Parameter 1
 * @f: parameter function
 */

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
	{
		if (name != NULL)
		{
			(*f)(name);
		}
	}
}
