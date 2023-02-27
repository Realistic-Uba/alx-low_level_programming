#include "main.h"

/**
 * _strlen - checks the length of a string
 * @s: string to check
 *
 * Return: int i of the string
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	return (i);
}
