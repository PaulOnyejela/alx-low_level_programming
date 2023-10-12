#include "function_pointers.h"

/*
* array_iterator - executes a function given as a parameter on each element of arr
* @array: pointer to array
* @size: size of array
* @action: pointer to a function to be executed
* Return: void
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t j;

	if (array && action)
	{
		for (j = 0; j < size; j++)
		{
			action(array[j]);
		}
	}
}
