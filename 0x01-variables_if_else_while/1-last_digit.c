#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int n;
	int ldig;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ldig = n % 10;
	/* your code goes there */
	if (n > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, ldig);
	}
	else if (n == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, ldig);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, ldig);
	}
	return (0);
}
