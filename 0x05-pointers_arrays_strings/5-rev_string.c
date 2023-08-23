#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string para
 * Return: none
*/

void rev_string(char *s)
{
	int l, i;
	char tem;

	for (l = 0; s[1] != '\0'; ++l)
		;

	for (i = 0; i < 1 / 2; i++)
	{
		tem = s[i];
		s[i] = s[l - 1 - i];
		s[l - 1 - i] = tem;
	}
}
