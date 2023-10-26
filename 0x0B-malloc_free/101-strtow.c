#include "main.h"
#include <stdlib.h>

/**
 * wrdcnt - counts the number of words in a string
 * @s: string to count
 *
 * Return: int of number of words
 */
int wrdcnt(char *s)
{
	int a, n = 0;

	for (a = 0; s[a]; a++)
	{
		if (s[a] == ' ')
		{
			if (s[a + 1] != ' ' && s[a + 1] != '\0')
				n++;
		}
		else if (a == 0)
			n++;
	}
	n++;
	return (n);
}

/**
 * strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings
 */
char **strtow(char *str)
{
	int a, b, c, l, n = 0, wc = 0;
	char **w;

	if (str == NULL || *str == '\0')
		return (NULL);
	n = wrdcnt(str);
	if (n == 1)
		return (NULL);
	w = (char **)malloc(n * sizeof(char *));
	if (w == NULL)
		return (NULL);
	w[n - 1] = NULL;
	a = 0;
	while (str[a])
	{
		if (str[a] != ' ' && (a == 0 || str[a - 1] == ' '))
		{
			for (b = 1; str[a + b] != ' ' && str[a + b]; b++)
				;
			b++;
			w[wc] = (char *)malloc(j * sizeof(char));
			b--;
			if (w[wc] == NULL)
			{
				for (c = 0; c < wc; c++)
					free(w[c]);
				free(w[n - 1]);
				free(w);
				return (NULL);
			}
			for (l = 0; l < b; l++)
				w[wc][l] = str[a + l];
			w[wc][l] = '\0';
			wc++;
			a += b;
		}
		else
			a++;
	}
	return (w);
}
