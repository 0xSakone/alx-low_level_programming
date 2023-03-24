#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - sum of all
 * @separator: separator character
 * @n: count
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;

	int i;

	va_start(args, n);
	for (i = 0; i < (int) n; i++)
	{
		printf("%i", va_arg(args, int));
		if (i != (int)n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
}
