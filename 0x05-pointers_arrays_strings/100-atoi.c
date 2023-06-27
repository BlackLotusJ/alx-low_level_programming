#include "main.h"
/**
 * _atoi - Converts a string to an integer
 * @s: The input string
 *
 * Return: The converted integer
 */
int _atoi(char *s)
{
	int sign = 1;
	int num = 0;
	int i = 0;

	/* Skip leading whitespace */
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
		i++;

	/* Check for optional sign */
	if (s[i] == '-' || s[i] == '+')
	{
		sign = (s[i] == '-') ? -1 : 1;
		i++;
	}

	/* Convert digits to integer */
	while (s[i] >= '0' && s[i] <= '9')
	{
		/* Check for overflow */
		if (num > INT_MAX / 10 ||
				(num == INT_MAX / 10 && (s[i] - '0') > INT_MAX % 10))
		{
			if (sign == 1)
				return (INT_MAX);
			else
				return (INT_MIN);
		}

		num = num * 10 + (s[i] - '0');
		i++;
	}

	return (sign * num);
}
