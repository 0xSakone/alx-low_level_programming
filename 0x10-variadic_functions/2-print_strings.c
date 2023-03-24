#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - strings
 * @separator: separator character
 * @n: count
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;

	int i;

	va_start(args, n);
	for (i = 0; i < (int) n; i++)
	{
		printf("%s", va_arg(args, char *));
		if (i != (int)n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
}
