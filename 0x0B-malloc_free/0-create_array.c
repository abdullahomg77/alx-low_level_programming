#include "main.h"

/**
 * *create_array - making array
 * @size: size of array
 * @c: character
 * Return: pointer
*/

char *create_array(unsigned int size, char c)
{
	char *p = malloc(size);

	if (size == 0 || p == 0)
		return (0);

	while (size--)
		p[size] = c;
	return (p);
}
