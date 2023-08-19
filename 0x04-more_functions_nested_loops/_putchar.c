#include <unistd.h>
#include "main.h"

/**
 * putchar - writes the char
 * descrition: find the way
 * Return: 1
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
