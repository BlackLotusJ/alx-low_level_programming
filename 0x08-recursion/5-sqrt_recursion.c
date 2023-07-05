#include "main.h"
/**
 * rootcheck - finds the natural root
 * @n: square number
 * @num:number being checked
 * Return: true for valid condition
 */
int rootcheck(int n, int num)
{
	if (num * num == n)
		return (num);

	if (num > n / num)
		return (-1);

	return (rootcheck(n, num + 1));
}

/**
 * _sqrt_recursion - find natural square root of n
 * @n: n
 *
 * Return: natural square root, or -1 if not natural root
 */
int _sqrt_recursion(int n)
{
	int start = 1;

	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);

	return (rootcheck(n, start));
}
