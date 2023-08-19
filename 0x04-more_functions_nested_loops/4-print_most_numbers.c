#include "main.h"

/**
 * print_most_numbers - print all number except 2 and 4
 * Return: Always 0
*/

void print_most_numbers(void)
{
	int i = 0;

	do {
		_putchar(i + 48);
		i++;
	} while (i <= 0 && i != 2 && i != 4 && i >= 9);
	_putchar('\n');
}
