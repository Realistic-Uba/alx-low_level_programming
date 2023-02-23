#include "main.h"

/**
 * _isupper - A function that checks for uppercase character
 *
 * @c: is uppercase
 *
 * Returns: 1 if uppercase, 0 if otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
