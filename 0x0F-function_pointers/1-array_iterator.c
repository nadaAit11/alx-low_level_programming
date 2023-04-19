#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - prints each array elem on a new line
 * @array: an array of numbers
 * @size: size of the array
 * @action: a pointer to the function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0 ; i < size ; i++)
		action(array[i]);
}
