#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Return: 0 on success
 */
int main(void)
{
	unsigned long int fib1 = 1;
	unsigned long int fib2 = 2;
	unsigned long int fib_next;
	int i;

	printf("%lu, %lu, ", fib1, fib2);

	for (i = 3; i <= 98; i++)
	{
		fib_next = fib1 + fib2;
		printf("%lu", fib_next);

		if (i != 98)
			printf(", ");

		fib1 = fib2;
		fib2 = fib_next;
	}

	printf("\n");
	return (0);
}
