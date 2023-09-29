#include "main.h"

/**
 * str_check - check if two strings are identical.
 * @s1: string_1 base address.
 * @s2: string_2 base address.
 * @a: left index.
 * @b: special index
 * Return: 1 if s is identical, 0 otherwise.
 */
int str_check(char *s1, char *s2, int a, int b)
{
	if (s1[a] == '\0' && s2[b] == '\0')
		return (1);
	if (s1[a] == s2[b])
		return (str_check(s1, s2, a + 1, b + 1));
	if (s1[a] == '\0' && s2[b] == '*')
		return (str_check(s1, s2, a, b + 1));
	if (s2[b] == '*')
		return (str_check(s1, s2, a + 1, b) || str_check(s1, s2, a, b + 1));
	return (0);
}
/**
 * wildcmp - check if strings could be considered identical
 * @s1: base address for string.
 * @s2: base address for string.
 *
 * Return: 1 if are considered identical.
 */
int wildcmp(char *s1, char *s2)
{
	return (str_check(s1, s2, 0, 0));
}
