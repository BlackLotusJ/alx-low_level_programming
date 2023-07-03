#include "main.h"
/**
 * _strchr - function that locates a character in a string
 * @s: string to search
 * @c:characer being searched for
 * Return: pointer to that character in string
 */
char* _strchr(char* s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return s;
		}
		s++;
	}
	return NULL;
}
