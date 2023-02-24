#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: is the size of the triangle
 *
 * return: void
 */
void print_triangle(int size)
{
	int i, j;

	for (i = 1; i <= size; i++)
	{
	for (j = size - i; j > 0; j--)
		_putchar(' ');

	for (j = 1; j <= i; j++)
	_putchar('#');

	_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
