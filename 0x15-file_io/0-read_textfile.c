#include "main.h"

/**
 * read_textfile - reads a text file and prints the letters
 * @filename: filename
 * @letters: numbers of letters printed.
 *
 * Return: numbers of letters printed. it fails, return 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file, i = 0;
	char *buf;
	ssize_t n;

	if (!filename || !letters)
		return (0);


	file = open(filename, O_RDONLY);
	if (file < 0)
		return (0);


	buf = malloc(sizeof(char) * letters);
	if (!buf)
		return (0);


	n = read(file, buf, letters);
	if (n < 0)
	{
		free(buf);
		return (0);
	}


	while (buf && buf[i])
		i++;
	n = write(STDOUT_FILENO, buf, i);
	free(buf);
	close(file);
	if (n < 0)
		return (0);

	return (n);
}
