#include <stdio.h>
/**
 * main - Entry point
 * Description: Function to print out fibonacci numbers from 1 t0o 50
 * Return: ALways 0 (success)
 */
int main(void)
{
	int n1 = 1, n2 = 2, n3, i, total = 50;

	printf("\n%d%d", n1, n2);
	for (i = 3 ; i < total ; ++i)
	{
		n3 = n1 + n2;
		printf("%d, ", n3);
		n1 = n2;
		n2 = n3;
	}
	return (0);
}
