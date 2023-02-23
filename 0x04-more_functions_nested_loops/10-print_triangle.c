#include "main.h"

/**
 * print_triangle - entry function
 * 
 * @size: size of the triangle
 * 
 * Return: 0
 */
void print_triangle(int size)
{
	int i, j, v;

	for (i = 0; i < size; i++)
	{
		v = (size - i) - 2;
		for (j = 0; j < size; j++)
		{
			if (j > v)
				_putchar('#');
			else
				_putchar(' ');
		}
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
