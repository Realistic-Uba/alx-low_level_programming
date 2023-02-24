#include "main.h"

/**
 * print_line - draws a striaght line
 * @n: number of times the character _ should be printed
 *
 * Returns: void
 */
void print_line(int n)
{
	int a = 0;

	while (a < n && n > 0)
	{
		_putchar('_');
		a++;
	}
	_putchar('\n');
}
