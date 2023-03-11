#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point for the program
 * @argc: The number of command-line arguments provided
 * @argv: An array of pointers to the arguments
 *
 * Return: 0 if successful, 1 if there is an error with the input
 */
int main(int argc, char **argv)
{
	int cents, coins = 0;

	/* Check if the correct number of arguments was provided */
	if (argc != 2)
	{
	printf("Error\n");
	return (1);
	}

	/* Convert the argument to an integer */
	cents = atoi(argv[1]);

	/* Check if the input is negative */
	if (cents < 0)
	{
		printf("0\n");
	return (0);
	}

	/* Calculate the number of coins required */
	while (cents >= 25)
	{
	coins++;
	cents -= 25;
	}
	while (cents >= 10)
	{
	coins++;
	cents -= 10;
	}
	while (cents >= 5)
	{
	coins++;
	cents -= 5;
	}
	while (cents >= 2)
 	{
	coins++;
	cents -= 2;
	}
	while (cents >= 1)
	{
	coins++;
	cents -= 1;
	}

	/* Print the number of coins required */
	printf("%d\n", coins);

	return (0);
}
