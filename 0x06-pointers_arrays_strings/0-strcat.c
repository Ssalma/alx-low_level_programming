#include "main.h"
#include <stdio.h>

/**
 * *_strcat - concat func
 * Description: function that concatenate two strings
 * @dest: first string
 * @src: second string
 * Return: int
 */

char *_strcat(char *dest, char *src)
{
	int len, j;

	len = 0;
	while (dest[len] != '\0'){
		++len;
	}
	for (j = 0; src[j] != '\0'; ++j; ++len){
		dest[len] = src[j];
	}

	dest[len] = '\0';


	return (dest);
}
