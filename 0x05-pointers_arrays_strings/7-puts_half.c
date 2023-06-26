#include "main.h"
/**
 * puts_half - prints the half of a string
 * @str: string to print
 */
void puts_half(char *str)
{
	int i;
	int length = 0;

	/* find the length of the string */
	while (str[length] != '\0')
	{
		length++;
	}
	/* find the index to start printing from,*/
	/* depending on the even/odd length of the string */
	if (length % 2 != 0)
		i = (length - 1) / 2 + 1;
	else
		i = length / 2;

	/* print the second half of the string, minus the first character */
	while (i < length)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}


