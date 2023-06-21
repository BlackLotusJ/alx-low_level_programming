#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - Entry point
 * @n: integer n
 * Description: Function to print from n to 98
 * Return: void data type
 */
void print_to_98(int n)
{
	for (; n < 98 ; n++)
	{
		printf("%d, ", n);
	}

	for (; n > 98 ; n--)
	{
		printf("%d, ", n);
	}

	if (n == 98)
	{
		printf("%d", n);
		printf("\n");
	}
}
