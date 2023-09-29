#include "main.h"
/**
 * _strlen_recursion - length of string
 * @s:string
 * Return:int
 */
int _strlen_recursion(char *s)
{
	int x = 0;

	if (*s != '\0')
	{
		x++;
		x += _strlen_recursion(s + 1);

	}
	return (x);
}
