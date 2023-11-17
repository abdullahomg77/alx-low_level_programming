#include "main.h"

/**
 * get_bit - Function name
 * @n: interger in function
 * @index : interger to count
 * Return: Always 0
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int b;

	if (index > 31)
		return (-1);
	b = (n >> index) & 1;
	if ((b == 0 || b == 1))
		return (b);

	return (-1);
}
