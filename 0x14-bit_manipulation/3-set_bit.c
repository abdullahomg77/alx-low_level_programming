#include "main.h"

/**
 * set_bit - Function to set num of bit
 * @n: intager
 * @index : intager
 * Return: Always 0
*/

int set_bit(unsigned long int *n, unsigned int index)
{

	if (index > 31 || n == NULL)
		return (-1);

	*n |= (1 << index);
	return (1);
}
