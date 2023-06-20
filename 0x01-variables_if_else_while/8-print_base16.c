#include <stdio.h>
/**
 * main - Entry point
 * Description: Function to print hexadecimal
 * Return: Always 0 (success)
 */
int main(void)
{
	int ch;
	int alpha;

	for (ch = 0 ; ch < 10 ; ch++)
	{
		putchar(ch + '0');
	}

	for (alpha = 'a' ; alpha <= 'f' ; alpha++)
	{
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
