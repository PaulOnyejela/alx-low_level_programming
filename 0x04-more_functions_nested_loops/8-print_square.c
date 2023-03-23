#include "main.h"
/**
 * print_square - prints a aquare
 * @size: prin size
 * Return : 0
 */

void print_square(int size)
{
	int i;
	int k;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (k = 0; k < size; k++)
			{
				_putchar (35);
			}
			_putchar ('\n'n);
		}
	}
	else
	{
		_putchar ('\n');
	}
}
