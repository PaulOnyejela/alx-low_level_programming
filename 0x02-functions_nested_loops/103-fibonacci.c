#include <stdio.h>

/**
 * main - Prints the sum of even-valued Fibonacci sequence
 * terms not exceeding 4000000
 * Return: Always 0.
 */
int main(void)
{
	unsigned long fibo1 = 0, fibo2 = 1, sum;
	float tot_sum;

	while (1)
	{
		sum = fibo1 + fibo2;
		if (sum > 4000000)
			break;

		if ((sum % 2) == 0)
			tot_sum += fibsum;

		fibo1 = fibo2;
		fibo2 = sum;
	}
	printf("%.0f\n", tot_sum);

	return (0);
}
