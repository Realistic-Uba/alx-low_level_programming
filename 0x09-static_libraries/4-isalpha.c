#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 *
 * @c: is a letter,lower or uppercase
 *
 * Return: prints 1 if uppercase or 0 if lower
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

