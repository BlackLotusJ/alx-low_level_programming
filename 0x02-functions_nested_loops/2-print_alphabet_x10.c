#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - a function that prints 10 times the alphabet
 *
 * Return: void type
 */
void print_alphabet_x10(void)
{
	int alphaCount = 0;

	for (; alphaCount < 10; alphaCount++)
	{
		char alpha = 'a';

		for (; alpha <= 'z'; alpha++)
			_putchar(alpha);

		_putchar('\n');
	}
}
