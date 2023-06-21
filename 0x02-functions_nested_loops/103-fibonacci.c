#include <stdio.h>
/**
 * main - print sum of even Fionacci sequence up to 4,000,000
 * Return: 0
 */
int main(void)
{
	int sof_evenNums = 0;
	int start = 0;
	int nextdigit = 1;
	int sum = 0;

	while (nextdigit < 4000000)
	{
		sum = start + nextdigit;
		start = nextdigit;
		nextdigit = sum;

		if ((sum <= 4000000) && (sum % 2 == 0))
		sof_evenNums += sum;
	}
	printf("%d\n", sof_evenNums);
	return (0);
}
