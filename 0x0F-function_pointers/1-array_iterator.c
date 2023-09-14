#include "function_pointers.h"

/**
 * array_iterator - map array
 * @array: aray of int
 * @size: array size
 * @action: function pointer
 * Return: none
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *e = array + size - 1;

	if (array && size && action)
		while (array <= e)
			action(*array++);
}
