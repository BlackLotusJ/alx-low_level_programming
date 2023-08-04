#include "main.h"
#include <stdio.h>
/**
 * set_bit - set bit to 1 at index
 * @n: number
 * @index: index within binary number
 * Return: 1 if success, or -1 if error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int num = 1;

	if (index > (sizeof(unsigned long int n) * 8))
		return (-1);

	num = ~ (num << index);
	*n = *n & num;
	return (1);

}
