#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num = 0;

	while (num < 16)
	{
		if (num < 10)
		{
			putchar(num + '0');
		}
		else
		{
			puutchar(num - 10 + 'a');
		}
		num++;
	}
	putchar('\n');

	return (0);
}
