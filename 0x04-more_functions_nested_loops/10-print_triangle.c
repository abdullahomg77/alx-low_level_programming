#include "main.h"

/**
 * print_triangle - triangle shape
 * @size: size of triangle
 * Return: always 0
*/

void print_triangle(int size)
{
	int line, row;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (line = 1; line <= size; line++)
		{
			for (row = 1; row <= size; row++)
			{
				if ((line + row) <= size)
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	}
}
