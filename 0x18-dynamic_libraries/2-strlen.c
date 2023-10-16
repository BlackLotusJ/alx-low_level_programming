#include "main.h"
#include <stdio.h>
/**
 * _strlen - Entry point
 * @s: pointer to s
 * Description: Function to output the lenth of string wittout strlen()
 * Return: Length l
 */
int _strlen(char *s)
{
	int l;

	for (l = 0; *s != '\0' ; ++l)
	{
		s++;
	}
	return (l);
}
