#include "main.h"
#include <stdio.h>
/**
 * largest_number - prints the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: Always 0
 */
int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b && a > c)
	{
		largest = a;
	}
	else if (b > c)
	{
		largest = c;
	}	}
	else if (b > c)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}
	return (largest);
}
