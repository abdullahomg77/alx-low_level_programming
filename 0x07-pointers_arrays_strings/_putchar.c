#include <unistd.h>

/**
 * _putchar - writes the char c to stdout
 * @c: The char to print
 * Return: on succes
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
