#include <unistd.h>

/**
 * _putchar: writes the charcter
 * @c: the character to print
 * Return: 0 success 1 on error
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
