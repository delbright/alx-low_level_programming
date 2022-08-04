#include "function_pointers.h"
/**
 * array_iterator - iterate over an array
 * @array: array
 * @size: size of the array
 * @action: function to call the array
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL)
		return;

	if (action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
