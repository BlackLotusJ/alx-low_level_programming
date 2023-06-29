#include "main.h"
/**
 * _strcat - concats two arrays
 *
 * @dest: destination of concat
 * @src: source array to concat
 *
 * Return: char value
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i + j] = src[j];
	}
	dest[i + j] = '\0';
	return (dest);
}
