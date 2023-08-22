#include "main.h"

/**
 * _strlen - the length of a string
 * @*s: string
 * Return: none
*/

int _strlen(char *s)
{
	int c;

	for (c = 0; *s != '\0'; s++)
		++c;

	return (c);
}
