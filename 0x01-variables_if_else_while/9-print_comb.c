#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints all possible combinations of single-digit numbers
 * separated by ", " and printed in ascending order
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');

	if (i != 9)
	{
		putchar(',');
		putchar(' ');
	}
	}

	putchar('\n');

	return (0);
}
