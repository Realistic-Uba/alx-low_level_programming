#include <stdio.h>
#include "main.h"

int _sqrt(int n, int i);

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to compute the square root of.
 *
 * Return: If n has a natural square root, return the square root.
 *         If n does not have a natural square root, return -1.
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
/**
 * _sqrt - Recursive helper function for _sqrt_recursion.
 * @n: The number to compute the square root of.
 * @i: The lowest possible square root of n.
 * Return: If n has a natural square root, return the square root.
 *         If n does not have a natural square root, return -1.
 */
int _sqrt(int n, int i)
{
	int mid = i * i;

	if (mid > n)
	{
		return (-1);
	}
	if (mid  == n)
	{
		return (i);
	}
	return (_sqrt(n, i + 1));
}
