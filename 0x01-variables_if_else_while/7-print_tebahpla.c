#include <stdio.h>
/**
 * main - Entry point
 * Description: Function to print reverse alphabet
 * Return: Always 0 (success)
 */
int main(void)
{
	int ch;

	for (ch = 'z' ; ch >= 'a' ; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
