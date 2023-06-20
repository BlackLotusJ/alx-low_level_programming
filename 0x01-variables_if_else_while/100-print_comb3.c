#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int num;

	for (num = 0 ; num < 10 ; num++)
	{
		int num_1 = num + 1;

		for (; num_1 < 10 ; num_1++)
		{
			putchar(num + '0');
			putchar(num_1 + '0');
			if (num != 8 || num != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
