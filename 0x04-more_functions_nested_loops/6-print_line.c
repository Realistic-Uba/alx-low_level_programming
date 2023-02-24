#include "main.h"

/**
 * print_line - draws a striaght line
 * @n: number of times the character _ should be printed
 *
 * Returns: void
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
