#include <stdio.h>
#include "main.h"
/**
 * print_sign - Prints the sign
 * @n: is an ASCII character
 * Return: int data type
 */
int print_sign(int  n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
