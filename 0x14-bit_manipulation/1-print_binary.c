#include "main.h"

/**
 * print_binary - Function to print binary
 * @n: varuabk
 * Return: Always 0
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	_putchar('0' + (n & 1));
}
