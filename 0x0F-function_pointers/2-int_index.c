#include <stdio.h>
#include <stddef.h>

/**
 * int_index - comparison function
 * @array: int array
 * @size: array size
 * @cmp: function to call
 * Return: nothing
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (cmp == NULL || array == NULL || size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
