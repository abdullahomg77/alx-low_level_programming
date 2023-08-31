#include "main.h"

/**
 * _sqrt_recursion - find sqrt root
 * @n: integer
 * @v: square
 * Return: value
*/

int sq(int n, int v);
int _sqrt_recursion(int n)
{
	return (sq(n, 1));
}

/**
 * sq - find sqrt
 * @n: interger
 * @v: square
 * Return: value
*/

int sq(int n, int v)
{
	if (v * v == n)
		return (v);
	else if (v * v < n)
		return (sq(n, v + 1));
	else
		return (-1);
}
