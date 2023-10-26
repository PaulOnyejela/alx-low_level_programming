#include "main.h"

/**
 * get_bit - value of a bit at a given index
 * @n: decimal parameter
 * @index: index
 * Return: val
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bt;

	bt = (n >> index);
	if (index > 32)
	return (-1);
	return (bt & 1);
}
