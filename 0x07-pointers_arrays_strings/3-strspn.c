#include "main.h"
/**
 * _strspn - function that gets the length of a prefix substring
 * @s: string to search
 * @accept: substring to find its length
 * Return: number of bytes consecutively matched
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int length = 0;

	while (*s != '\0' && *s != ' ')
	{
		char *p = accept;

		while (*p != '\0')
		{
			if (*s == *p)
			{
				length++;
				break;
			}
			p++;
		}
		if (*p == '\0')
		{
			break;
		}
		s++;
	}
	return (length);
}

