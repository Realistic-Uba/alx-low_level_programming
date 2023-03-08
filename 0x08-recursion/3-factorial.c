#include "main.h"

/**
 * factorial - factorial of a given number
 * description: a function that returns the factorial of a given number.
 * @n: the given number
 *
 * Return: n * fact
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 1)
		return (1);

	return (n * factorial(n - 1));
}
