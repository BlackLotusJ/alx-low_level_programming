#include "main.h"
/**
 * length - returns length of string
 * @s: string
 * Return: integer length
 */
int length(char *s)
{
	if (*s == '\0')
		return (0);
		s++;
	return (1 + (length(s)));
}

/**
 * compareString - compares
 * @s: index starting from left of string
 * @revString: index starting from right of string, moving backwards
 * Return: 1 if palindrome, 0 if not
 */
int compareString(char *s, char *revString)
{
	if (s >= revString)
		return (1);
	if (*s == *revString)
		return (compareString(s + 1, revString - 1));
	return (0);
}

/**
 * is_palindrome - check if palindrome
 * @s: string to check
 * Return: 1 if palindrome, 0 if not
 */
int is_palindrome(char *s)
{
	int len = length(s);

	return (compareString(s, (s + len - 1)));
}
