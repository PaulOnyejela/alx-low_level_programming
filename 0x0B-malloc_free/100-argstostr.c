#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: number of arguments
 * @av: double pointer to arguments
 *
 * Return:pointer to new string, or NULL if error
 */
char *argstostr(int ac, char **av)
{
	int a, b, c = 0, n = 0;
	char *p;

	if (ac <= 0 || av == NULL)
		return (NULL);
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
			n++;
		n++;
	}
	n++;
	p = malloc(n * sizeof(char));
	if (p == NULL)
		return (NULL);
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
		{
			p[c] = av[a][b];
			c++;
		}
		p[c] = '\n';
		c++;
	}
	p[c] = '\0';
	return (p);
}
