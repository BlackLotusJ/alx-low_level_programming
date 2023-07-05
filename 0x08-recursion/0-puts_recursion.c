#include "main.h"
/**
 * _puts_recursion - recusive function
 * @s: character to be output
 * Description: Function to print a string followed by a next line
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
		_putchar('\n');
		return;
	_putchar(*s);
	_puts_recursion(s + 1);
}
