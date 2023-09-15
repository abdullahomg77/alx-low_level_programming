#include "variadic_functions.h"

/**
 * print_numbers - Prints numbers
 * @separator: string between numbers.
 * @n: int passed to the function.
 * @...: numbers to be printed.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list i;
	unsigned int x;

	va_start(i, n);

	for (x = 0; x < n; x++)
	{
		printf("%d", va_arg(i, int));

		if (x != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(i);
}
