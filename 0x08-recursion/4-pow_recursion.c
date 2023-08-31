#include "main.h"

/**
 * _pow_recursion - raise num to the power of num2
 * @x: number
 * @y: raised number
 * Return: for error -1
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else if (y == 1)
	{
		return (x);
	}
	return (x * _pow_recursion(x, y - 1));
}
