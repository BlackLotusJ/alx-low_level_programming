#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: columns
 * @height: rows
 * Return: pointer to 2d array
 */
int **alloc_grid(int width, int height)
{
	int **array;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	array = malloc(height * sizeof(int *));
	if (array == NULL)
		return (NULL);

	/* Allocate memory for columns of each row */
	for (i = 0; i < height; i++)
	{
		array[i] = malloc(width * sizeof(int));
		if (array[i] == NULL)
		{
			for (i = 0; i < height; i++)
			{
				if (array[i])
					free(array[i]);
			}
			free(array);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			array[i][j] = 0;
	}
	return (array);
}
