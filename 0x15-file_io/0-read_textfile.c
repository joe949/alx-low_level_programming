#include "main.h"
/**
 * read_textfile - reads a text file and prints the letters
 * @filename: name of file to be read
 * @letters: num of letters printed
 *
 * Return: num of letters printed, 0 if it fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *file;
	char *buf;
	ssize_t bytesR, bytesW;

	if (filename == NULL)
		return (0);

	file = fopen(filename, "r");

	if (file == NULL)
		return (0);

	buf = (char *)malloc(letters + 1);
	if (buf == NULL)
	{
		fclose(file);
		return (0);
	}

	bytesR = fread(buf, 1, letters, file);
	if (bytesR == 0 || ferror(file))
	{
		free(buf);
		fclose(file);
	}
	buf[bytesR] = '\0';

	bytesW = fwrite(buf, 1, bytesR, stdout);
	if (bytesW < bytesR || ferror(stdout))
	{
		free(buf);
		fclose(file);
		return (0);
	}
	free(buf);
	fclose(file);

	return (bytesW);
}
