#include "main.h"

/**
 * _strlen_recursion - function return the length
 * @s: string
 * Return: len
*/

int _strlen_recursion(char *s)
{
	int len;

	len = 0;

	if (*s == '\0')
	{
		return (len);
	}
	else
	{
		len++;
		_putchar(len);
		_strlen_recursion(s + 1);
	}
}
