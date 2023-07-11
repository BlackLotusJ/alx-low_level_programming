#include "main.h"
#include <stdlib.h>
/**
 * countWords - function to count the number of words in a string
 * @str: string to count
 *
 * Return: number of words
 */
int countWords(char *str)
{
	int isWord = 0, currentChar, numWords = 0;

	for (currentChar = 0; str[currentChar] != '\0'; currentChar++)
	{
		if (str[currentChar] == ' ')
			isWord = 0;
		else if (isWord == 0)
		{
			isWord = 1;
			numWords++;
		}
	}
	return (numWords);
}
/**
 * strtow - a function that splits a string into words
 * @str: string
 * Return: pointer to array of strings
 */
char **strtow(char *str)
{
	char **matrix, *tmp;
	int i, currentWord = 0, length = 0, numWords, currentChar = 0, start, end;

	while (*(str + length))
		length++;
	numWords = countWords(str);
	if (numWords == 0)
		return (NULL);
	matrix = (char **) malloc(sizeof(char *) * (numWords + 1));
	if (matrix == NULL)
		return (NULL);
	for (i = 0; i <= length; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (currentChar)
			{
				end = i;
				tmp = (char *) malloc(sizeof(char) * (currentChar + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				matrix[currentWord] = tmp - currentChar;
				currentWord++;
				currentChar = 0;
			}
		}
		else if (currentChar++ == 0)
			start = i;
	}
	matrix[currentWord] = NULL;
	return (matrix);
}

