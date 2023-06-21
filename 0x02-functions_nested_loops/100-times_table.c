#include <stdio.h>

/**
 * print_times_table - Prints the n times table, starting with 0
 * @n: The number for which the times table is generated
 *
 * Description: This function prints the times table for the given number,
 * starting with 0. It prints the table up to 10 times the given number.
 * If n is not in the range of 0 to 15 (inclusive), nothing is printed.
 * Return: void data type
 */
void print_times_table(int n)
{
	if (n < 0 || n > 15)
		return;  /* Do nothing if n is out of range */

	for (int i = 0; i <= 10; ++i)
		printf("%d x %d = %d\n", i, n, i * n);
}

