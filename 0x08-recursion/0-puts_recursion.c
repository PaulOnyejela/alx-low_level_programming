#include "main.h"
/**
 * _puts_recursion - print a string
 * @s:string
 * Return:void
 */
void _puts_recursion(char *s)
{
	while (*s != '\0')
    {
        putchar(*s); /* print letter */
        s = s + 1;  /* point to the next letter. */
    }
	putchar('\n');
	
}
