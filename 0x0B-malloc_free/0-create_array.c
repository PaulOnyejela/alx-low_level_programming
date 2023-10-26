#include "main.h"
#include <stdlib.h>

/**
* create_array - creates an array of chars
* @size: number of characters
* @c: initial array character
* Return: pointer
*/

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int j;

	if (size == 0)
		return (NULL);
	s = malloc(size * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < size; j++)
	{
		s[j] = c;
	}
	return (s);
}
