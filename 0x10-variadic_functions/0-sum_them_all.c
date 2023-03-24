#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sum of all
 * @n: counnt
 * Return: nothing
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;

	int total = 0;
	int i;

	if (n == 0)
		return (0);
	va_start(args, n);
	for (i = 0; i < (int) n; i++)
		total += va_arg(args, int);
	return (total);
}
