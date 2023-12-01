#include "main.h"
/**
 * create_file - function that creates a file
 * @filename: name of file created
 * @text_content: content in file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t tl, bytesW;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);

	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		tl = 0;
		while (text_content[tl] != '\0')
			tl++;

		bytesW = write(fd, text_content, tl);

		if (bytesW == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
