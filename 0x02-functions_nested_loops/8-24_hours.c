#include <stdio.h>
#include "main.h"
/**
 * jack_bauer - Entry point
 * Description: Function to print every minutre of jack Bauer
 * Return: void data type
 */
void jack_bauer(void)
{
	int hour = 0, min = 0;

	while (hour < 24)
	{
		while (min < 60)
		{
			_putchar('0' + (hour / 10));
			_putchar('0' + (hour % 10));
			_putchar(':');
			_putchar('0' + (min / 10));
			_putchar('0' + (min % 10));
			_putchar('\n');
			min++;
		}
		min = 0;
		hour++;
	}
}
