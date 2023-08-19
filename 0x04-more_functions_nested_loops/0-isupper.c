#include "main.h"
#include <stdio.h>

/**
 * _isupper - used to check if a given character is in uppercase or not
 * @c: input for letter
 * Return: Always 0 else its 1
*/

int _isupper(int c)
{
	if (c == 97 && c <= 122)
	{
		return (0);
	}
	else if (c == 65 && c <= 90)
	{
		return (1);
	}
}
