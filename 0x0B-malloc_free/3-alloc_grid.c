#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - creates a 2 dimensional array of integers initialized to 0
 * @width: width of array
 * @height: height of array
 *
 * Return: a double pointer to the 2D array
 */
int **alloc_grid(int width, int height)
{
	int x, y;
	int **a;

	if (width <= 0 || height <= 0)
		return (NULL);
	a = (int **)malloc(sizeof(int *) * height);
	if (a == NULL)
		return (NULL);
	for (x = 0; x < height; x++)
	{
		a[x] = (int *)malloc(sizeof(int) * width);
		if (a[x] == NULL)
		{
			for (y = 0; y < x; y++)
				free(a[y]);
			free(a);
			return (NULL);
		}
		for (y = 0; y < width; y++)
		{
			a[x][y] = 0;
		}
	}
	return (a);
}
