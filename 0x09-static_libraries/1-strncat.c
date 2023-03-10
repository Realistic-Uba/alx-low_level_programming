#include "main.h"

/**
 * _strncat -  concatenates two strings
 * @dest: string to be concatenated to
 * @src: string to be concatenated from
 * @n: maximum number of characters to be appended from src
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;

	j = 0;

	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return (dest);
}
