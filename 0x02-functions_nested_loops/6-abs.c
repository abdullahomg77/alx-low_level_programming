#include "main.h"

/**
 * _abs - function that computes the absolute value
 *
 * @n: takes in iteger type in put for function
 *
 * Return: Always 0
*/

int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}
