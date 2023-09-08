#include "main.h"

/**
 * *_memset - memory
 * @s: pointer
 * @r: cons
 * @n: byts
 * Return: pointer
*/

char *_memset(char *s, char r, unsigned int n)
{
	char *p = s;

	while (n--)
		*s++ = r;

	return (p);
}

/**
 * *_calloc - allocates memory
 * @nmemb: length of array
 * @size: size of element
 * Return: pointer
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *i;

	if (size == 0 || nmemb == 0)
		return (NULL);
	i = malloc(sizeof(int) * nmemb);

	if (i == 0)
		return (NULL);

	_memset(i, 0, sizeof(int) * nmemb);
	return (i);
}
