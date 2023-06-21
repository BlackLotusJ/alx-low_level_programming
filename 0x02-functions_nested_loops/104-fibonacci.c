#include <stdio.h>
/**
 * main - prints the first 98 Fibonacci numbers
 *
 * Return: Always 0
 */
int main(void)
{
	unsigned long int n1 = 0;
	unsigned long int n2 = 1;
	unsigned long int n3 = 0;
	unsigned long total = 0;

	while (total <= 99)
	{
		n3 = n1 + n2;
		printf("%lu", n3);
		putchar(',');
		putchar(' ');
		n1 = n2;
		n2 = n3;
		total++;
	}
	putchar('\n');
	return (0);
}
