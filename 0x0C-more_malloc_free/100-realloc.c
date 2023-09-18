#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block
 * @ptr: pointer
 * @old_size: size of the allocated memory
 * @new_size: new size
 * Return: pointer
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *po;
	char *old_p;
	unsigned int n;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (!ptr)
		return (malloc(new_size));
	po = malloc(new_size);
	if (!po)
		return (NULL);
	old_p = ptr;
	if (new_size < old_size)
	{
		for (n = 0; n < new_size; n++)
			po[n] = old_p[n];
	}
	if (new_size > old_size)
	{
		for (n = 0; n < old_size; n++)
			po[n] = old_p[n];
	}
	free(ptr);
	return (po);
}
