#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * infinite_add - Add two numbers
 * @n1: no.1
 * @n2: no.2
 * @r: buffer
 * @size_r: buffer size
 * Description: Function that adds two numbers by use of a buffer
 * Return: result
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int carry = 0;
	int i = strlen(n1) - 1;
	int j = strlen(n2) - 1;
	int k = size_r - 1;

	r[k] = '\0';
	while (i >= 0 || j >= 0)
	{
		if (k == 0)
		{
			return (0);
		}
		int sum = carry;

		if (i >= 0)
		{
			sum += n1[i] - '0';
			i--;
		}
		if (j >= 0)
		{
			sum += n2[j] - '0';
			j--;
		}
		carry = sum / 10;
		r[--k] = sum % 10 + '0';
	}
	if (carry > 0)
	{
		if (k == 0)
		{
			return (0);
		}
		r[--k] = carry + '0';
	}
	return (&r[k]);
}


