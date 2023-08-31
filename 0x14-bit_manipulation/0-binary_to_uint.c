#include "main.h"

/**
 * binary_to_uiint - convert binary nuber to unsigned integer
 * b: strng with 1s and 0s
 * Return: converted number
 */

unsigned int binary_to_uint(const char *b)
{
	int i= 0, j;
	unsigned int val = 0;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
		i++;
	i -= 1;
	j = 0;

	while (b[j])
	{
		if ((b[j] != '0') && (b[j] != '1'))
			return (0);

		if (b[j] == '1')
			number += (1 * (1 << i));
		j++;

		i--;
	}
	return (val);
}


