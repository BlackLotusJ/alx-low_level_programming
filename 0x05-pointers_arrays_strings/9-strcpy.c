#include "main.h"
/**
 * _strcpy - copies the string pointed to by src
 * @dest: copy source to this buffer
 * @src: this is the source to copy
 * Return: copy of original source
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*src)
		dest[i++] = *src++;
	dest[i] = '\0';

	return (dest);
}
