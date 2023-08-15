#include <stdio.h>

/**
 * main - entry poit
 * Description: no printf only using putcher
 * Return: Always 0
*/

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
