#include "main.h"

/**
 * *malloc_checked - allocates memory
 * @b: interger
 * Return: pointer 98 or Null
*/

void *malloc_checked(unsigned int b)
{
	int *p = malloc(b);

	if (p == 0)
		exit(98);
	return (p);
}
