#include "main.h"
#include <stdlib.h>

/**
  * _calloc - Function allocates memory of an array
  * @nmemb: number of elements
  * @size: size of an array element
  *
  * Return: 0
  */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int a = 0, b = 0;
	char *t;

	if (nmemb == 0 || size == 0)
		return (NULL);

	b = nmemb * size;
	t = malloc(b);

	if (t == NULL)
		return (NULL);

	while (a < b)
	{
		t[a] = 0;
		a++;
	}

	return (t);
}
