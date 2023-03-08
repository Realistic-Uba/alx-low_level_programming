#include "main.h"

/**
 * _strlen_recursion -  returns the length of a string
 * description: a function that returns the length of a string.
 * @s: the strong from which the lenght will be returned
 *
 * Return: i
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
