#include "main.h"

/**
 * _strstr - entry point
 * @hyastack: input
 * @needle: input
 * Retrun: always 0
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *l = haystack;
		char *p = needle;

		while  (*l == *p && *p != '\0')
		{
			l++;
			p++;
		}

		if (*P == '\0')
			return (haystack);
	}
	return (0);
}
