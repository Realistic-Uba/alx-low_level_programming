#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Finds the sum of even-valued terms in the Fibonacci sequence
 *              up to a value of 4,000,000.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int fib1 = 1, fib2 = 2, sum = 0, temp;

	while (fib1 <= 4000000)
	{
		if (fib1 % 2 == 0)
			sum += fib1;

		temp = fib1;
		fib1 = fib2;
		fib2 += temp;
	}

	printf("%d\n", sum);

	return (0);
}
