#include "main.h"

/**
 * puts2 - print every char 2
 * @str: string
 * Return: none
*/

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; ++i)
	{
		if (i % 2 == 0)
			putchar(str[i]);
	}
	putchar('\n');
}
