#include "main.h"
#include <stdio.h>

/**
 * strlen() returns the length of a string
 * @a: represents the string
 */
int _strlen(char *s)
{
	char s[100];
	gets (s);

	printf("Length = %d\n", strlen(s));

	return (0);
}
