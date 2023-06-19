#include <stdio.h>
/**
 * main - Entry point
 * Description: Fuction to output lowercase and UPPERCASE
 * Return: Always 0 (success)
 */
int main(void)
{
	char ch = 'a';
	char ch_1 = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}

	while (ch_1 <= 'Z')
	{
		putchar(ch_1);
		ch_1++;
	}
	putchar('\n');
	return (0);
}
