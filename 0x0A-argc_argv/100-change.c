#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the minimum number of coins to
 *        make change for an amount of money.
 * @argv: An array of pointers to the arguments
 * @argc: The number of arguments supplied to the program
 *
 * Return: If the number of arguments is not exactly one - 1.
 *         Otherwise - 0.
 */
int main(int argc, char *argv[])
{
	int value, coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	value = atoi(argv[1]);

	while (value > 0)
	{
		coins++;
		if ((value - 25) >= 0)
		{
			value -= 25;
			continue;
		}
		if ((value - 10) >= 0)
		{
			value -= 10;
			continue;
		}
		if ((value - 5) >= 0)
		{
			value -= 5;
			continue;
		}
		if ((value - 2) >= 0)
		{
			value -= 2;
			continue;
		}
		value--;
	}

	printf("%d\n", coins);

	return (0);
}
