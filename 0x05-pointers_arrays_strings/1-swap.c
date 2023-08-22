#include "main.h"

/**
 * swap_int - change the values of  2 int
 * @a: integer 1
 * @b: integer 2
 * Return: none
*/

void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
