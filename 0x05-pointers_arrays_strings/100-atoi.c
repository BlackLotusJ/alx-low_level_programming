#include <stdio.h>
#include "main.h"
/**
 * _atoi - Function to convert string to integer
 * @str: string to be converted to integer
 * Description: Concert string to integer wthout atoi() function
 * Return: 0  always
 */
int _atoi(char *str)
{
	int sign = 1, number = 0, i = 0;

	if (str[0] == '-')
	{
		sign = -1;
		i = 1;
	}
	for (; str[i] != '\0' ; i++)
	{
		if (str[i] >= '0' && str[i] <= '9')
			number = number * 10 + (str[i] - '0');
		else
			break;
	}
	number = number * sign;
}
