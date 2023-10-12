#include "function_pointers.h"

/**
* int_index - searches for an integer
* @array: pointer to an array
* @size: number of elements in the array
* @cmp: pointer to a function to be used to compare values
*
* Return: sucessful (0)
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int j, q;

	if (size > 0 && array && cmp)
	{
		for (j = 0; j < size; j++)
		{
			q = cmp(array[j]);
			if (q)
				break;
		}
		if (j < size)
			return (j);
	}
	return (-1);
}
