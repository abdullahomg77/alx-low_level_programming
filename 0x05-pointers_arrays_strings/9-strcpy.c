#include "main.h"

/**
 * *_strcpy - copies the str
 * @src: char type str
 * @dest: char type str
 * Description: copy the string pointed to pointer
 * Return: point to dest
*/

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0']);

	return (dest);
}
