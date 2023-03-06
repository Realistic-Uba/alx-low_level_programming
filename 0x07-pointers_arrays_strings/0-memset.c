#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: a pointer to the block of memory to be filled
 * @b: the value to be set
 * @n: the number of bytes to be set to the value b
 *
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;
	unsigned char v = b;
	unsigned int i;

	for (i = 0; i < n; i++)
		ptr[i] = v;

	return (s);
}
