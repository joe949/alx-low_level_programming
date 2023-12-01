#include "main.h"
/**
 * append_text_to_file - function that appends text at end of a file
 * @filename: name of file
 * @text_content: NULL terminated string to add at end of line
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t tl, bytesW;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	tl = 0;
	while (text_contect[tl] != '\0')
		tl++;

	bytesW = write(fd, text_content, tl);
	if (bytesW)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
