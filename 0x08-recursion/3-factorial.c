#include "main.h"
/**
 * factorial - factorial of int
 * @n:int
 * Return:int
 */
int factorial(int n)
{
	int l;

	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		l = n * factorial(n - 1);
	}
			return (l);

}
