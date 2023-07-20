#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all -  variadic sum all integers
 * @n: first argument
 * Return: sum(int)
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	va_list ptr;

	va_start(ptr, n);

	for (int i = 0; i < n; i++)
	{
		sum += va_arg(ptr, int);
		va_end(ptr);
		return (sum);
	}
}
