#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: A pointer to the destination memory block where the
 * data will be copied to
 * @src: A pointer to the source memory block where the
 * data will be copied from
 * @n: the number of bytes to set to the value starting from ptr
 *
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *ptr = dest;
	char *ptr2 = src;
	unsigned int i;

	for (i = 0; i < n; i++)
		ptr[i] = ptr2[i];

	return (dest);
}
