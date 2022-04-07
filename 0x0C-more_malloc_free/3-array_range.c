#include "main.h"
#include <stdlib.h>

/**
 * array_range - Function creates an array of integers ordered
 * @min: First value of array.
 * @max: Last value of array.
 *
 * Return: Null if min > max or the function fails
 */

int *array_range(int min, int max)
{
	int *array, index, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	array = malloc(sizeof(int) * size);

	if (array == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
		array[index] = min++;

	return (array);
}