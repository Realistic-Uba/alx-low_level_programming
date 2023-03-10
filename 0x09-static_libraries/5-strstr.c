#include <string.h>
#include "main.h"
/**
 * _strstr - locates a substring
 * @haystack: the string to search in
 * @needle: the substring to search for
 *
 * Return: a pointer to the beginning of the located substring.
 */
char *_strstr(char *haystack, char *needle)
{
	char *h, *n;

	while (*haystack)
	{
		h = haystack;
		n = needle;

		while (*haystack && *n && *haystack == *n)
		{
			haystack++;
			n++;
		}

		if (!*n)
			return (h);

		haystack = h + 1;
	}

	return (NULL);
}
