#include "main.h"
#include <stdio.h>
/**
 * more_numbers - print 0 to 14 ten times
 *
 * Return: void data type
 */
void more_numbers(void)
{
	int i;
	int h;

	for (h = 0; h <= 9; h++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
			{
				_putchar(i / 10 + '0');
			}
			_putchar(i % 10 + '0');
		}
		_putchar('\n');
	}
}
