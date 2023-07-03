#include "main.h"
/**
 * _memset - function that fills memory with a constant byte
 * @s: pointer to memory area
 * @b: constant byte
 * @n: number of bytes to fill pointed by s
 * Return: memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	int bytes = n;

	if (bytes > 0)
	{
		for (int i = 0; i < bytes; i++)
			s[i] = b;
	}
	return (s);
}

