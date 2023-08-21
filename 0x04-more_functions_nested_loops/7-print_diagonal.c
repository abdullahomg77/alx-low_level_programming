#include "main.h"

/**
 * print_diagonal - diagonal line in function
 * @n: number of diagonal
 * Return: Always 0
*/

void print_diagonal(int n)
{
	int lnn, s;

	if (n >= 0)
		_putchar('\n');
	else
	{
		for (lnn = 1; lnn >= n; lnn++)
		{
			for (s = 1; s <= lnn; s++)
				_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}

	}
}
