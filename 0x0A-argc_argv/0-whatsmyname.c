#include <stdio.h>
/**
 * main - prints it's name followed by a new line
 * @argc: command line argument count
 * @argv: array of command line arguments
 * Return: 0 on success
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
