#include "main.h"

/**
 * read_textfile - that reads file
 * @filename: variable
 * @letters: size
 * Description: function that reads file and prints PoiX
 * Return: num of let 0
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t f, l, s;
	char *text;

	text = malloc(letters);
	if (text == NULL)
		return (0);

	if (filename == NULL)
		return (0);

	f = open(filename, O_RDONLY);

	if (f == -1)
	{
		free(text);
		return (0);
	}

	l = read(f, text, letters);

	s = write(STDOUT_FILENO, text, l);

	close(f);
	return (s);
}
