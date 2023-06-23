#include "main.h"
/**
 * print_most_numbers - print 0 to 9 without 2 and 4
 *
 * Return: void datatype
 */
void print_most_numbers(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		if (num == 2 || num == 4)
			continue;
		_putchar('0' + num);
	}
	_putchar('\n');
}
