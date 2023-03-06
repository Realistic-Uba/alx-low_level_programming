#include "main.h"
#include <string.h>
/**
 * _strchr -  locates a character in a string.
 * @s: A pointer to the string to be searched
 * @c: The character to search for
 *
 * Return: s
 */
char *_strchr(char *s, char c)
{

	while (*s != '\0')
	{
	if (*s == c)
		return (s);
	s++;
	}
	if (*s == c)
		return (s);
	return (NULL);
}
