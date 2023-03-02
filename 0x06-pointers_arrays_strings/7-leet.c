#include "main.h"

/**
 * leet - encodes a string
 * @str: string to be encoded
 *
 * Return: str
 */
char *leet(char *str)
{
	int i, j;

	char l[] = {'a', 'e', 'o', 't', 'l'};
	char a[] = {'A', 'E', 'O', 'T', 'L'};
	char n[] = {'4', '3', '0', '7', '1'};

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (str[i] == l[j] || str[i] == a[j])
				str[i] = n[j];
		}
	}
	return (str);
}
