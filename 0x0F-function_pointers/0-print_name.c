#include <stdio.h>

/**
 * print_name - display name
 * @name: string name
 * @f: function to call to display
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);
}
