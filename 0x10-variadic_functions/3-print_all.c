#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - strings
 * @format: separator character
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *sep = "";
	char *str;
	va_list args;

	va_start(args, format);
	while (format && format[i])
	{
		if (i > 0)
			sep = ", ";
		switch (format[i])
		{
			case 'c':
				printf("%s%c", sep, va_arg(args, int));
				break;
			case 'i':
				printf("%s%d", sep, va_arg(args, int));
				break;
			case 'f':
				printf("%s%f", sep, va_arg(args, double));
				break;
			case 's':
				str = va_arg(args, char *);
				printf("%s%s", sep, str ? str : "(nil)");
				break;
			default:
				sep = "";
				i++;
				continue;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
