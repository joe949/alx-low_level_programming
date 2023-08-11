#include<stdio.h>

/**
* main - Entry point
*
* Return: Always 0
*/
int main(void)
{
	char alp[24]="abcdfghijklmnoprstuvwxyz";
	int i;

	for (i=48; i<58; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
