#include <stdio.h>
#include "main.h"
/**
 * swap_int - Entry point
 * @a: pointer to int
 * @b: pointer to int b
 * Description: Function to swap two numbers using pointers
 * Return: void datatype
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;

}
