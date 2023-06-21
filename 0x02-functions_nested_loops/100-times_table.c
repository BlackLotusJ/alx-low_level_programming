#include "main.h"

/**
 * print_times_table - Prints the n times table, starting with 0
 * @n: The number for which the times table is generated
 *
 * Description: This function prints the times table for the given number,
 * starting with 0. It prints the table up to 10 times the given number.
 * If n is not in the range of 0 to 15 (inclusive), nothing is printed.
 */
void print_times_table(int n)
{
	int i, j, product;

	if (n < 0 || n > 15)
		return;

	for (i = 0; i <= 10; ++i)
	{
		_putchar('0');
		for (j = 1; j <= 10; ++j)
		{
			_putchar(',');
			_putchar(' ');

			product = i * j;

			if (product < 10)
			{
				_putchar(' ');
				_putchar(' ');
			}
			else if (product < 100)
				_putchar(' ');

			if (product >= 100)
			{
				_putchar((product / 100) + '0');
				_putchar(((product / 10) % 10) + '0');
			}
			else
				_putchar((product / 10) + '0');

			_putchar((product % 10) + '0');
		}
		_putchar('\n');
	}
}

