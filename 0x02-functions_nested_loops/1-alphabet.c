#include "main.h"
/**
 * print_alphabet - print alphabet in lowercase
 *
 * Return: void type
 */
void print_alphabet(void)
{
	char alph = 'a';

	for (; alph <= 'z'; alph++)
		_putchar(alph);

	_putchar('\n');
}
