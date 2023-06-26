#include <stdio.h>
#include "main.h"
/**
 * print_rev - prnt string in reverse followed by new line
 *
 * @s: string to reverse
 */
void print_rev(char *s)
{
	int i, len;

	for (i = 0; *s != 0 ; i++)
	{
		len++;
		++s;
	}
	s--;
	for (i = len ; i > 0; i++)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
