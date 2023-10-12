#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: separator to print between numbers
 * @n: number of numbers to print
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int j;
	int numb;
	va_list valists;

	va_start(valists, n);
	for (j = 0; j < n; j++)
	{
		numb = va_arg(valists, int);
		printf("%d", numb);
		if (j < n - 1 && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(valists);
}
