#include <stdio.h>

/**
 * main - entry point
 * Description: print alphabet
 * Return: Always 0
*/

int main(void)
{
	char ch = 'a';
	char cH = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}

	while (cH <= 'Z')
	{
		putchat(cH);
		cH++
	}
	putchar('\n');

	return (0);
}
