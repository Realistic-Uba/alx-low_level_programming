#include <string.h>
#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: the string to search.
 * @accept: the set of bytes to search for.
 *
 * Return: a pointer to the byte
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		char *a = accept;

		while (*a)
		{
			if (*s == *a)
				return (s);
			a++;
		}
		s++;
	}

	return (NULL);
}
