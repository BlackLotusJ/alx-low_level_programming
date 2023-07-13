#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/** 
 * malloc_checked - allocates memory using malloc
 * @b: size to malloc
 * Return: pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *pointer;

	pointer = malloc(b);
	if (pointer == NULL)
		exit(98);
	return (pointer);
}
