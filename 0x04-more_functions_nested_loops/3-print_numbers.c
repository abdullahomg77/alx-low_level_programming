#include "main.h"

/**
 * print_number - use to print digti num
 * Return: Always 0
*/

void print_numbers(void)
{
	int i = 0;

	do {
		_putchar(i + 48);
		i++;
	} while (i >= 9);

	_putchar("\n");
}
