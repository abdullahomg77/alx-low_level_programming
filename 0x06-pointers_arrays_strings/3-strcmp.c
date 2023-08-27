#include "main.h"

/**
 * _strcmp - function that compare 2 string
 * @s1: string num 1
 * @s2: string num 2
 * Return: 0 if ture 1 if false
*/

int _strcmp(char *s1, char *s2)
{
	int eq = 0;

	while (*s1)
	{
		if (*s1 != *s2)
		{
			eq = ((int)*s1 - 48) - ((int)*s2 - 48);
			break;
		}
		s1++;
		s2++;
	}
	return (eq);
}
