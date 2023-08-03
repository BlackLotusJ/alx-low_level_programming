#include "main.h"

/**
 * binary_to_uint- convert binary to unsigned int
 * @b: binary
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{

	int i = 0, j;
	unsigned int num = 0, non_binary = 0;

	if (b == NULL)
		return (non_binary);

	while (b[i] != '\0')
		i++;
	i -= 1;
	j = 0;
	while (b[j])
	{
		if ((b[j] != '0') && (b[j] != '1'))/*&& logical AND operator*/
			return (non_binary);

		if (b[j] == '1')
			num += (1 * (1 << i));/*<< bitwise left shift operator*/
		j++;

		i--;
	}
	return (num);
}
