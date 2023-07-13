#include <stdlib.h>
#include "main.h"
/**
 * string_nconcat - function that concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: n amount of bytes
 * Return: new string
 **/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int index, first_string_length, second_string_length;
	char *concat_string;

	if (s2 == NULL)
		s2 = "";
	if (s1 == NULL)
		s1 = "";
	first_string_length = 0;
	second_string_length = 0;
	while (s2[second_string_length] != '\0')
		second_string_length++;
	while (s1[first_string_length] != '\0')
		first_string_length++;
	if (n >= second_string_length)
		n = second_string_length;
	concat_string = malloc(sizeof(char) * n + first_string_length + 1);
	if (concat_string == NULL)
		return (NULL);
	for (index = 0; index < first_string_length; index++)
		concat_string[index] = s1[index];
	for (index = 0; index < n; index++)
		concat_string[index + first_string_length] = s2[index];
	concat_string[index + first_string_length] = '\0';
	return (concat_string);
}
