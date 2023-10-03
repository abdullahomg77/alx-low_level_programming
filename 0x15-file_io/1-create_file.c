#include "main.h"

/**
 * create_file - func create file
 * @filename: variable
 * @text_content: content a file
 * Description: Create a function that is creating a file
 * Return: sucss 1 or -1 for failure
*/

int create_file(const char *filename, char *text_content)
{
	int n = 0, f;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";


	while (text_content[n] != '\0')
	{
		n++;
	}
	f = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (f == -1)
		return (-1);
	write(f, text_content, n);
	return (1);
}
