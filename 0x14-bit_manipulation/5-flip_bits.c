#include "main.h"

/**
 * flip_bits - Function play with bits
 * @n: variales
 * @m : intager
 * Return: Always 0
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{

	int i = 0;

	if (n == m)
		return (0);
	while (n != 0 || m != 0)
	{
		if ((n & 1) != (m & 1))
			i++;
		n >>= 1;
		m >>= 1;
	}
	return (i);

}
