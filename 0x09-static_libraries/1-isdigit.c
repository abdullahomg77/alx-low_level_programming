#include "main.h"

/**
 * _isdigit - check if c is through 0 - 9
 * @c: is character
 * Return: if c is digit return 1 else 0
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
