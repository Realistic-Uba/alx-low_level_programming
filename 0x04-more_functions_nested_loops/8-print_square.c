#include "main.h"

/**
 * print_square -  prints a square
 * @size: is the size of the square
 *
 * Return: void
 */
void print_square(int size)
{
	int nl, ash;

	for (nl = 0; nl < size; nl++)
	{
		for (ash = 0; ash < size; ash++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}
