#include "main.h"
/**
 * _puts_recursion - prints string
 * @s:string
 * Return:void
 */
void _puts_recursion(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s); /* print letter */
		s = s + 1;  /* point to the next letter. */
	}
	_putchar('\n');
}
