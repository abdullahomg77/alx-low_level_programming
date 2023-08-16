#include "main.h"

/**
 * times_table - prinnts the 9 times
 * example
 * 0 0 0 0 0
 * 0 1 2 3 4
*/

void times_table(void)
{
	int num, mult, pro;

	for (num = 0; num <= 9; num++)
	{
		_putchar(48);
		for (mult = 1; mult <= 9; mult++)
		{
			_putchar(',');
			_putchar(' ');

			pro = num * multi;
			if (pro <= 9)
				_putchar(' ');
			else
				_putchar((pro / 10) + 48);
			_putchar((pro % 10) + 48);
		}
		_putchar('\n');
	}
}
