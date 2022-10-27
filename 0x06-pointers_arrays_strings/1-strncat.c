#include "main.h"

/**
 * *_strcat - concat func
 * Description: function that concatenate two strings
 * @dest: first string
 * @src: second string
 * @n:most bytes from src
 * Return: char
 */

char *_strncat(char *dest, char *src, int n)
{
	int len, j;

	len = 0;
	while (dest[len] != '\0'){
		++len;
	}
	for (j = 0;j < n && src[j] != '\0'; ++j, ++len){
		dest[len] = src[j];
	}

	dest[len] = '\0';


	return (dest);
}
