#include "main.h"

/**
 * _strspn - gets the len
 * @s: str
 * @accept: num of bytes
 * Return: i
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != s[i]; j++)
		{
			if (accept[i] == '\0')
				return (i);
		}
	}
	return (i);
}
