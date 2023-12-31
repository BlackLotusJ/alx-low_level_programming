#include "main.h"

/**
 * binary_to_uint- convert binary to unsigned int
 * @b: binary
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{

	int i = 0, j;
	unsigned int number = 0;

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
	return (number);
}
