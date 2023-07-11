#include <stdlib.h>
#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	return (length);
}
/**
 * argstostr - concatenates all the arguments to a program
 * @ac: argc - number of arguments
 * @av: argv - array of arguments
 * Return: pointe to new string
 */
char *argstostr(int ac, char **av)
{
	int length, i, j, k;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	length = 0;
	for (i = 0; i < ac; i++)
	{
		length += _strlen(av[i]) + 1;
	}
	str = malloc(sizeof(char) * length + 1);
	if (str == NULL)
		return (NULL);
	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; j < _strlen(av[i]); j++)
		{
			str[k] = av[i][j];
			k++;
		}
		str[k] = '\n';
		k++;
	}
	str[k] = '\0';
	return (str);
}
