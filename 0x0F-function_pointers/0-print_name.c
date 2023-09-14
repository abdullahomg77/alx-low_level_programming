#include "function_pointers.h"

/**
 * print_name - print function
 * @name: str
 * @f: function pointer
 * Return: none
*/

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
