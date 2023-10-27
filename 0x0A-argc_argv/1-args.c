#include <stdio.h>
/**
 * main - prints number of arguments passed followed by a new line
 * @argc: count of command line arguments
 * @argv: array of command line arguments
 * Return: 0 on success
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
