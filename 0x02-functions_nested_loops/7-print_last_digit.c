#include <stdio.h>
#include "main.h"
/**
 * print_last_digit - function that prints the last digit of a number
 *
 * @num: ASCII character
 *
 * Return: int data type
 */
int print_last_digit(int num)
{

	if (num < 0)
		num = num * -1;
		_putchar('0' + (num % 10));

	return (num % 10);
}


