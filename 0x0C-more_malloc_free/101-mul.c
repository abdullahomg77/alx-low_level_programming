#include "main.h"
#include <stdlib.h>
#include <stdio.h>

#define ERR_MSG "Error"

/**
 * is_digit - number comfirm
 * @s: str
 * Return: 0 if not digit else 1
*/

int is_digit(char *s)
{
	int n = 0;

	while (s[n])
	{
		if (s[n] < '0' || s[n] > '9')
			return (0);
		n++;
	}
	return (1);
}

/**
 * _strlen - lenthgh of string
 * @s: str
 * Return: num
*/

int _strlen(char *s)
{
	int n = 0;

	while (s[n] != '\0')
	{
		n++;
	}
	return (n);
}

/**
 * errors - handles errors for main
 */

void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - multiplies two num
 * @argc: number
 * @argv: array
 * Return: 0
 */

int main(int argc, char *argv[])
{
	char *s1, *s2;
	int t1, t2, t, n, c, k1, k2, *res, z = 0;

	s1 = argv[1], s2 = argv[2];
	if (argc != 3 || !is_digit(s1) || !is_digit(s2))
		errors();
	t1 = _strlen(s1);
	t2 = _strlen(s2);
	t = t1 + t2 + 1;
	res = malloc(sizeof(int) * t);
	if (!res)
		return (1);
	for (n = 0; n <= t1 + t2; n++)
		res[n] = 0;
	for (t1 = t1 - 1; t1 >= 0; t1--)
	{
		k1 = s1[t1] - '0';
		c = 0;
		for (t2 = _strlen(s2) - 1; t2 >= 0; t2--)
		{
			k2 = s2[t2] - '0';
			c += res[t1 + t2 + 1] + (k1 * k2);
			res[t1 + t2 + 1] = c % 10;
			c /= 10;
		}
		if (c > 0)
			res[t1 + t2 + 1] += c;
	}
	for (n = 0; n < t - 1; n++)
	{
		if (res[n])
			z = 1;
		if (z)
			_putchar(res[n] + '0');
	}
	if (!z)
		_putchar('0');
	_putchar('\n');
	free(res);
	return (0);
}
