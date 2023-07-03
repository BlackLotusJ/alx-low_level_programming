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
	char *p = s;

	while (n > 0)
	{
		*p = b;
		p++;
		n--;
	}
	return (s);
}

