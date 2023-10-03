#include "main.h"

/**
 * append_text_to_file - appends to file
 * @filename: variable
 * @text_content: content file
 * Description: func append text for end of a file
 * Return: on success 1 or -1
*/

int append_text_to_file(const char *filename, char *text_content)
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

	f = open(filename, O_WRONLY | O_APPEND);
	if (f == -1)
		return (-1);
	write(f, text_content, n);
	return (1);
}
