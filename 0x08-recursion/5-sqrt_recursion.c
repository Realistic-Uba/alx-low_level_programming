#include "main.h"

/**
 * sqrt_helper - Helper function for _sqrt_recursion
 * @n: Input number
 * @low: Lowest possible value of the natural square root
 * @high: Highest possible value of the natural square root
 *
 * Return: Natural square root of n if found, -1 otherwise
 */
int sqrt_helper(int n, int low, int high);

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: Input number
 *
 * Return: Natural square root of n if found, -1 otherwise
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	return (-1); /* Negative numbers don't have a natural square root */
	return (sqrt_helper(n, 0, n));
		/* Call helper function with initial low and high values */
}

/**
 * sqrt_helper - Helper function for _sqrt_recursion
 * @n: Input number
 * @low: Lowest possible value of the natural square root
 * @high: Highest possible value of the natural square root
 *
 * Return: Natural square root of n if found, -1 otherwise
 */
int sqrt_helper(int n, int low, int high)
{
	int mid;

	if (low > high)
		return (-1); /* n does not have a natural square root */
	mid = (low + high) / 2;
	if (mid * mid == n)
	return (mid); /* Found the natural square root */
	else if (mid * mid > n)
	return (sqrt_helper(n, low, mid - 1));
	/* Search in the lower half of the range */
	else
	return (sqrt_helper(n, mid + 1, high));
	/* Search in the upper half of the range */
}

