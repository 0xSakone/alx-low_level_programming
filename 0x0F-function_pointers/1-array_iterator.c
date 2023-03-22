#include <stdio.h>
#include <stddef.h>

/**
 * array_iterator - call action on all other parameter array item
 * @array: int array
 * @size: array size
 * @action: function to call
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (action == NULL || array == NULL)
		return;
	for (i = 0; i < (int)size; i++)
	{
		action(array[i]);
	}
}
