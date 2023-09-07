#include "main.h"

/**
 * *_strchr - file memory constant
 * @s: pointer to put
 * @c: constatn
 * Return: point s
*/

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return ('\0');
}
