#include <stdio.h>

/**
 * main - entry point
 *
 * Description: Prints the first 50 Fibonacci numbers, starting with 1 and 2
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int fib1 = 1, fib2 = 2, temp, i;

	printf("%d, %d", fib1, fib2);

	for (i = 3; i <= 50; i++)
	{
		temp = fib2;
		fib2 += fib1;
		fib1 = temp;

		printf(", %d", fib2);
	}

	printf("\n");

	return (0);
}
