#include <string.h>
#include "main.h"
#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: the string to search
 * @accept: the string of accepted characters
 *
 * Return: Always Success
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				break;
			}
		}
		if (!accept[j])
		{
			break;
		}
	}

	return (i);
}
