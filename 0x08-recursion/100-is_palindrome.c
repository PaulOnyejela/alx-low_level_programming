#include "main.h"
/**
 * _strlen_recursion - Prints the length of a string.
 * @s: the string to be printed
 * Return: the length of string
 */
int _strlen_recursion(char *s)
{
	if (s[0] != '\0')
		return (1 + _strlen_recursion(s + 1));
	return (0);
}
/**
 *pal_check - check if s is palindrome.
 * @s: string base address.
 * @a: left index.
 * @b: rigth index.
 * Return: 1 if s is palindrome, 0 otherwise.
 */
int pal_check(char *s, int a, int b)
{
	if (s[a] == s[b])
		if (a > b / 2)
			return (1);
		else
			return (pal_check(s, a + 1, b - 1));
	else
		return (0);
}
/**
 * is_palindrome - check if s is palindrome
 * @s: base address for string.
 *
 * Return: 1 if n is prime, 0 otherwise.
 */
int is_palindrome(char *s)
{
	return (pal_check(s, 0, _strlen_recursion(s) - 1));
}
