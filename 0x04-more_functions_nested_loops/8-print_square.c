#include "main.h"

/**
 * print_square - print square shape of #
 * @size: parameter of spuare
 * Return: Always 0
*/

void print_square(int size)
{
	int i;

	for (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= size; j++)
				_putchar(35);
		}
	}
}
