#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	char *str;

	va_start(args, format);
	while (format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				if (format[i + 1] != '\0')
				printf(", ");
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				if (format[i + 1] != '\0')
				printf(", ");
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				if (format[i + 1] != '\0')
				printf(", ");
				break;
			case 's':
				str = va_arg(args, char *);
				if (str == NULL)
					printf("(nil)");
				else
					printf("%s", str);
				if (format[i + 1] != '\0')
				printf(", ");
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
