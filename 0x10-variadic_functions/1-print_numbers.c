#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - output numbers
 * @separator: separates the numbers
 * @n: number of arguments
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int num;
	va_list ptr;

	va_start(ptr, n);
	for (unsigned int i = 0; i < n; i++)
	{
		num = va_arg(ptr, int);
		printf("%d", num);
		if (separator && i != n - 1)
			printf("%s", separator);
	}
	va_end(ptr);
	printf("\n");
}
