#include "main.h"
#include <stdlib.h>
/**
 * array_range - range of arrays
 * @min: min of arrange
 * @max: max of arrays
 * Return: int value
 */
int *array_range(int min, int max)
{
	int index, *array, length;

	if (min > max)
		return (NULL);
	length = 0;
	for (index = min; index <= max; index++)
		length++;
	array = malloc(sizeof(int) * length);
	if (array == NULL)
		return (NULL);
	index = 0;
	while (min <= max)
	{
		array[index] = min;
		index++;
		min++;
	}
	return (array);
}
