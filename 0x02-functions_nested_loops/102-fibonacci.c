#include <stdio.h>
/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 *
 * Return: Always 0.
 */
int main(void)
{
	long int start = 0;
	long int nextdigit = 1;
	long int sum = 0;
	int number = 0;

	while (number < 49)
	{
		sum = start + nextdigit;
		printf("%li, ", sum);
		start = nextdigit;
		nextdigit = sum;
		number++;
	}
	sum = start + nextdigit;
	printf("%li\n", sum);
	return (0);
}

