#include "main.h"

/**
 * swap_int -  swaps the values of two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: a function that swaps the values of two integers.
 */
void swap_int(int *a, int *b)
{
	int i = *a;
	int j = *b;
	*a = j;
	*b = i;
}
