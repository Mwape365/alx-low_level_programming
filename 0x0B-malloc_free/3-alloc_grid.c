#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * **alloc_grid - Function that returns a pointer to
 * a 2 dimensional array of integers
 * @width: int type
 * @height: int type
 *
 * Return: Null
 */
int **alloc_grid(int width, int height)
{
	int a, b;
	int **ptr;

	if (width <= 0 || height <= 0)
	{
		return  (NULL);
	}
	ptr = malloc(height * sizeof(int *));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < height; a++)
	{
		ptr[a] = malloc(width * sizeof(int));
		if (ptr[a] == NULL)
		{
			for (b = 0; b < a;  b++)
				free(ptr[b]);
			free(ptr);
			return (NULL);
		}
		for (b = 0; b < width; b++)
		{
			ptr[a][b] = 0;
		}
	}
	return (ptr);
}
