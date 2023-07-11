#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates array of chars
 * @size: size of array
 * @c: char to initialize array with
 * Return: NULL if size = 0, pointer to array
 */

char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);
	p = (char *) malloc(sizeof(char) * size);

	if (p == NULL)
		return (0);
	while (i < size)
	{
		*(p + i) = c;
		i++;
	}
	*(p + i) = '\0';
	return (p);
}
