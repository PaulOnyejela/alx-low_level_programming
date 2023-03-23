#include "main.h"
/**
 * _isdigit - function that verifies if char is gigit
 * @c: character
 * Return: returns 0 or 1
 */

int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
		return (1);
	return (0);
}
