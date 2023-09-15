#include "variadic_functions.h"

/**
 * print_strings - Prints strings
 * @separator: string between strings
 * @n: strings passed to the function
 * @...: number of strings
 * Description: If separator is NULL, no print
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list s;
	char *str;
	unsigned int x;

	va_start(s, n);

	for (x = 0; x < n; x++)
	{
		str = va_arg(s, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (x != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(s);
}
