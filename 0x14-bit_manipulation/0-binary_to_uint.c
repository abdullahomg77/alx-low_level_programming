#include "main.h"

/**
 * binary_to_uint - Function convent to unit
 * @b: variable to binary
 * Return: Always 0
*/

unsigned int binary_to_uint(const char *b)
{
	int n;
	unsigned int res = 0;

	if (b == NULL)
		return (0);
	for (n = 0; b[n] != '\0'; n++)
	{
		if (b[n] != '0' && b[n] != '1')
			return (0);
		if (b[n] == '0')
			res = res << 1;
		else if (b[n] == '1')
			res = res << 1 | 1;
	}
	return (res);
}
