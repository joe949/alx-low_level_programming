#include "main.h"
/**
 * error_exit - function to handle error
 * @code: exit code
 * @message: message to be printed
 * @file_name: name of file
 *
 * Return: void
 */
void error_exit(int code, const char *message, const char *file_name)
{
	dprintf(STDERR_FILENO, message, file_name);
	exit(code);
}
/**
 * open_file - function to open file
 * @file_name: name of file
 * @flags: attributes to open file
 * @mode: mode of openning file
 *
 * Return: file descriptor
 */
int open_file(const char *file_name, int flags, mode_t mode)
{
	int fd;

	fd = open(file_name, flags, mode);
	if (fd == -1)
		error_exit(98, "Error: Can't read from file %s\n", file_name);
	return (fd);
}
/**
 * write_to_file - function to write a file
 * @fd_from: from file
 * @fd_to: to file
 *
 * Return: void
 */
void write_to_file(int fd_from, int fd_to)
{
	char buff[BUFFER_SIZE];
	ssize_t bytesR, bytesW;

	while ((bytesR = read(fd_from, buff, BUFFER_SIZE)) > 0)
	{
		bytesW = write(fd_to, buff, bytesR);
		if (bytesW != bytesR)
			error_exit(99, "Error: Can't write to file %s\n", "");
	}
	if (bytesR == -1)
		error_exit(98, "Error: Can't read from file %s\n", "");
}
/**
 * main - main function
 * @argc: arguments count
 * @argv: arguments vector
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	const char *file_from, *file_to;

	if (argc != 3)
		error_exit(97, "Usage: cp file_from file_to\n", "");

	file_from = argv[1];
	file_to = argv[2];

	fd_from = open_file(file_from, O_RDONLY, 0);
	fd_to = open_file(file_to, O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);

	write_to_file(fd_from, fd_to);

	if (close(fd_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}
	if (close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}

	return (0);
}
