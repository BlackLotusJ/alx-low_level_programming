#include "main.h"
/**
 * _memcpy -  function that copies memory area
 * @dest: destination
 * @src: source
 * @n: number of bytes to be copied
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int bytes = n;

	if (bytes > 0)
	{
		for (int i = 0; i < bytes; i++)
			dest[i] = src[i];
	}
	return (dest);
}
