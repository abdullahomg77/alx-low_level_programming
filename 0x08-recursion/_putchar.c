#include <stdio.h>

/**
 * _putchar - to print a char
 * @c: character
 * Return: always 0
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
