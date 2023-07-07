#include <stdio.h>
#include <stdlib.h>
/**
 * make_change - finds least number of coins
 * @n: money amount
 * Return: number of coins
 */
int make_change(int n)
{
	int coins = 0;

	while (n > 0)
	{
		if (n >= 25)
		{
			n -= 25;
			coins++;
		}
		else if (n >= 10)
		{
			n -= 10;
			coins++;
		}
		else if (n >= 5)
		{
			n -= 5;
			coins++;
		}
		else if (n >= 2)
		{
			n -= 2;
			coins++;
		}
		else
		{
			n -= 1;
			coins++;
		}
	}
	return (coins);
}

/**
 * main - prints the minimum number of coins to make change for an amount.
 * of money.
 * @argc: number of command line arguments.
 * @argv: array that contains the program command line arguments.
 * Return: 0 - success.
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else if (atoi(argv[1]) < 0)
	{
		printf("0\n");
	}
	else
	{
		int totalCoins = make_change(atoi(argv[1]));

		printf("%d\n", totalCoins);
	}
	return (0);
}
