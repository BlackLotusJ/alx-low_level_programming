#include "main.h"
/**
 * _isupper - checks for uppercase character
 *
 * @c: ASCII character to be checked
 *
 * Return: int data type
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	return (0);
}
