#include "main.h"

/**
 * print_sign - print + if n is  > 0 if less 1
 * @n: takes integer input
 * Return: 1 if + 0 if -
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
