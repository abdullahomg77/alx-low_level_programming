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
	int l1, l2, l, i, cy, d1, d2, *result, a = 0;

	s1 = argv[1], s2 = argv[2];
	if (argc != 3 || !is_digit(s1) || !is_digit(s2))
		errors();
	l1 = _strlen(s1);
	l2 = _strlen(s2);
	l = l1 + l2 + 1;
	result = malloc(sizeof(int) * l);
	if (!result)
		return (1);
	for (i = 0; i <= l1 + l2; i++)
		result[i] = 0;
	for (l1 = l1 - 1; l1 >= 0; l1--)
	{
		d1 = s1[l1] - '0';
		cy = 0;
		for (l2 = _strlen(s2) - 1; l2 >= 0; l2--)
		{
			d2 = s2[l2] - '0';
			cy += result[l1 + l2 + 1] + (d1 * d2);
			result[l1 + l2 + 1] = cy % 10;
			cy /= 10;
		}
		if (cy > 0)
			result[l1 + l2 + 1] += cy;
	}
	for (i = 0; i < l - 1; i++)
	{
		if (result[i])
			a = 1;
		if (a)
			_putchar(result[i] + '0');
	}
	if (!a)
		_putchar('0');
	_putchar('\n');
	free(result);
	return (0);
}
