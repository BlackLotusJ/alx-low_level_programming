#include "main.h"
/**
 * _isdigit - checks for a digit 0 through 9
 *
 * @c: integer value
 *
 * Return: 0 if condition is false
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
