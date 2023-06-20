#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 * Description: Function to output _putchar
 * Return: ALways 0 (success)
 */
int main(void)
{
	char ch1[8] = "_putchar";
	int chpos;

	for (chpos = 0 ; chpos <= 7 ; chpos++)
	{
		_putchar(ch1[chpos]);
	}
	_putchar('\n');
	return (0);
}
