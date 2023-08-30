#include "main.h"

/**
 * *_memset - filter memory with constant
 * @s: pointer on input constant
 * @b: constant
 * @n: number of maximum bytes
 * Return: s
*/

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++, n--)
	{
		s[i] = b;
	}
	return (s);
}
