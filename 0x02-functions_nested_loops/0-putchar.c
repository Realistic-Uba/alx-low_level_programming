#include "main.h"

/**
 * main - Entry point
 *
 * Description: A program that prints _putchar, followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char *str = "_putchar";

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
	return (0);
}
