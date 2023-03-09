#include "main.h"

/**
 * find_strlen - Returns the length of a string.
 * @s: The string to be measured.
 *
 * Return: The length of the string.
 */
int find_strlen(char *s)
{
	int len = 0;

	if (*(s + len))
	{
		len++;
		len += find_strlen(s + len);
	}

	return (len);
}

/**
 * pali - checks for palindrome matching
 *
 * @str: string to check
 * @len: length of string
 * @index: index to check against
 * Return: 1 if match, 0 if not
 */
int pali(char *str, int len, int index)
{
	if (len == index || len < index)
	{
		return (0);
	}
	else if (*(str + len) != *(str + index))
	{
		return (0);
	}
	else
	{
		index++;
		len--;
		return (1 + pali(str, len, index));
	}
}

/**
 * is_palindrome - finds if a string is a palindrome or not
 *
 * @s: pointer to string
 * Return: 1 if palindrome and 0 if not
 */
int is_palindrome(char *s)
{
	int len, palin;

	len = find_strlen(s);
	if (len == 0)
		return (1);
	palin = pali(s, len - 1, 0);
	if (palin == len / 2)
		return (1);
	else
		return (0);
}
