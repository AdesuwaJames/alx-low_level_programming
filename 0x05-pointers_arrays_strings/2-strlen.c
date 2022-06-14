#include "main.h"
#include <stdio.h>

/**
 * _strlen - a function that returns the length of a string
 * @s: represents the string
 * Return: length of string
 */
int _strlen(char *s)
{
	char s[100];

	gets(s);
	printf("Length = %d\n", strlen(s));

	return (0);
}
