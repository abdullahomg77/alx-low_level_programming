#include "main.h"

/**
 * _strncpy - Function that copy one string to another
 * @dest: destination input
 * @src: source input string
 * @n: number of copy
 * Return: always dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
