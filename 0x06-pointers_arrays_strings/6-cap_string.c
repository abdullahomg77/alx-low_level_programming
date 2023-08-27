#include "main.h"
#include <stdio.h>

/**
 * isLower - determines whether asi is lowercae
 * @c: charater
 * Return: 1 if t 0 if F
*/

int isLower(char c)
{
	return (c >= 97 && c <= 122);
}

/**
 * isDelimiter - determines whether adcii
 * @c: char
 * Return: 1 if t 0 if F
*/

int isDelimiter(char c)
{
	int i;
	char del[] = "\t\n,.!?\"(){}";

	for (i = 0; i < 12; i++)
		if (c == del[i])
			return (1);
	return (0);
}

/**
 * cap_string - capitalizes all words
 * @s: input string
 * Return: string
*/

char *cap_string(char *s)
{
	char *ptr = s;
	int fdel = 1;

	while (*s)
	{
		if (isDelimiter(*s))
			fdel = 1;
		else if (isLower(*s) && fdel)
		{
			*s -= 32;
			fdel = 0;
		}
		else
			fdel = 0;
		s++;
	}
	return (ptr);
}
