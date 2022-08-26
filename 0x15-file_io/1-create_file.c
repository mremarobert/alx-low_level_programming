#include "main.h"

/**
 * create_file - a function that creates a file
 * @filename: filename
 * @text_content: the string to write to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int i = 0;
	int fn;
	int wr;

	if (!filename)
		return (-1);
	fn = open(filename, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fn == -1)
		return (-1);

	while (text_content && text_content[i])
		i++;
	wr = write(fn, text_content, i);
	close(fn);
	if (wr < 0)
		return (-1);
	return (1);
}
