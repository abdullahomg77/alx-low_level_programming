#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - the min int of coins
 * @argc: count arguments
 * @argv: array
 * Return: 0 Succes, 1 Error
 */

int main(int argc, char *argv[])
{
	int n, i, res;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	n = atoi(argv[1]);
	res = 0;
	if (n < 0)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; i < 5 && n >= 0; i++)
	{
		while (n >= coins[i])
		{
			res++;
			n -= coins[i];
		}
	}
	printf("%d\n", res);
	return (0);
}
