#include "main.h"

/**
 * array_range - create array
 * @min: begininge int
 * @max: maximum int
 * Return: pointer
*/

int *array_range(int min, int max)
{
	int l, n;
	int *p;

	if (min > max)
		return (NULL);
	l = max - min + 1;
	p = malloc(sizeof(int) * l);

	if (p == 0)
		return (NULL);
	for (n = 0; n < l; n++)
		p[n] = min++;
	return (p);
}
