#include "main.h"
/**
 * factorial - Function to print factorial
 * @n: factorial to be found
 * Return: -1 or n
 */
int factorial(int n)
{
	if (n == 0)
		return (0);
	else if (n == 1)
		return (1);
	else
		return (n * factorial(n - 1));

}
