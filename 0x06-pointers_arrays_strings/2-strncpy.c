#include "main.h"
#include <stdio.h>

/**
 * *_strncpy - copy function
 * @dest: first string
 * @src: second string
 * @n: bytes
 * Return: char
 */

char *_strncpy(char *dest, char *src, int n)
{
	int j;
	char *ptr = dest;

	for (j = 0; j < n && src[j] != '\0'; j++, dest++)
	{
		*dest = src[j];
	}

	while (j < n)
	{
		*dest = '\0';
		dest++;
		j++;
	}

	return (ptr);
}
