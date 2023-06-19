#include <stdio.h>
/**
 * main - Entry point
 * Description: Function to print lowercase except q and e
 * Return: Always 0 (success)
 */
int main(void)
{
	char ch = 'a';

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch == 'q' || ch == 'e')
			continue;
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
