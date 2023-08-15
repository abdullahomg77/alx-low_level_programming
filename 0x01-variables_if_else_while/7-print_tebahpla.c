#include <stdio.h>

/**
 * main - entry point
 * Description: print a to z
 * Return: Always 0
*/

int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');

	return (0);
}
