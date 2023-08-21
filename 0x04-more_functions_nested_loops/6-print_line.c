#include "main.h"

/**
 * print_line - print straight line
 * @n: is the number of times should be printed
 * Return: Always 0
*/

void print_line(int n)
{
	int line;

	if (n <= 0)
		_putchar("\n");
	else
	{
		for (line = 1; line <= n; line++)
			_putchar("_");
		_putchar("\n");
	}
}
