#include "main.h"
/**
 * _print_rev_recursion - print reverse
 * @s: string to be reversed
 * Description: Function thats prints astring in reverse follewd by new line
 */
void  _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
