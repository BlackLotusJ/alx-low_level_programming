#include <stdio.h>
/**
 * main - Entry point
 * Description: Function to print numbers using putchar only
 * Return: Always 0 (success)
 */
int main(void)
{
	int b10;

	for (b10 = 0 ; b10 < 10 ; b10++)
	{
		putchar(b10 + '0');
	}
	putchar('\n');
	return (0);
}
