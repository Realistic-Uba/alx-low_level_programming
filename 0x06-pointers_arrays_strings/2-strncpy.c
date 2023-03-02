#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: the destination to copy to
 * @src: the source to copy from
 * @n: maximum number of characters to be copied from the source string.
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;

	while (src[j] != '0' && j < n)
	{
		dest[j] = src[j];
		j++;
	}

	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);
}
