#include "main.h"
#include <stdio.h>

/**
 * *_strncpy - copy function
 *@dest: first string
 * @src: second string
 *@n: bytes
 * Return: char
 */

char *_strncpy(char *dest, char *src, int n)
{
	char i;

	for (i = 0; i < n && dest[i] != '\0'; ++i){
		src[i] = dest[i];
	}

	dest[i] = '\0';

	return (dest);
}
