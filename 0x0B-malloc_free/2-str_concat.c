#include "main.h"

/**
 * _strlen - find len
 * @s: strings
 * Return: int
*/

int _strlen(char *s)
{
	int size;

	for (size = 0; s[size] != '\0'; size++)
		;
	return (size);
}

/**
 * *str_concat - add two string
 * @s1: string 1
 * @s2: string 2
 * Return: pointer p
*/

char *str_concat(char *s1, char *s2)
{
	int n1, n2, i;
	char *p;

	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
		s2 = "\0";

	n1 = _strlen(s1);
	n2 = _strlen(s2);
	p = malloc((n1 + n2) * sizeof(char) + 1);

	if (p == 0)
		return (NULL);

	for (i = 0; i <= n1 + n2; i++)
	{
		if (i < n1)
			p[i] = s1[i];
		else
			p[i] = s2[i - n1];
	}
	p[i] = '\0';
	return (p);
}
