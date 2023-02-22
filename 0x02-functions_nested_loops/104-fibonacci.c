#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Finds and prints the first 98 Fibonacci numbers,
 *              starting with 1 and 2, separated by comma and space.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned int fib1 = 1, fib2 = 2, fib3, i;

	printf("%u, %u", fib1, fib2);

	for (i = 3; i <= 98; i++)
	{
		fib3 = fib1 + fib2;
		printf(", %u", fib3);
		fib1 = fib2;
		fib2 = fib3;
	}

	printf("\n");

	return (0);
}
