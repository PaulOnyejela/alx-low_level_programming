#include "main.h"
#include <stdlib.h>

/**
 * _strdup - copy a string to a newly allocated space in memory
 * @str: string to copy
 *
 * Return: pointer to duplicated string or NULL if error
 */
char *_strdup(char *str)
{
	unsigned int x, y;
	char *p;

	if (str == NULL)
		return (NULL);
	for (x = 0; str[x]; x++)
		;
	x++;
	p = malloc(x * sizeof(char));
	if (p == NULL)
	{
		return (NULL);
	}
	for (y = 0; y < x; y++)
	{
		p[y] = str[y];
	}
	return (p);
}
