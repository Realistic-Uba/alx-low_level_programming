#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Entry point for the program
 * @argc: The number of command-line arguments provided
 * @argv: An array of pointers to the arguments
 *
 * Return: 0 if successful, 1 if there is an error with the input
 */
int main(int argc, char **argv)
{
	int sum = 0;
	int i;

	/* Check if there are any arguments */
	if (argc == 1)
	{
	printf("0\n");
	return (0);
	}

	/* Loop through all the arguments and add them together */
	for (i = 1; i < argc; i++)
	{
	int j;
		for (j = 0; argv[i][j] != '\0'; j++)
		{
	/* Check if the character is not a digit */
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
	/* Convert the argument to an integer and add it to the sum */
	sum += atoi(argv[i]);
	}

	/* Print the sum */
	printf("%d\n", sum);

	return (0);
}
