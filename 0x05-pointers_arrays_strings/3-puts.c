#include "main.h"
/**
 * _puts - print the string
 * @str: string
 * Return: Always 0
*/

void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str++);
	}
		putchar('\n');
}
