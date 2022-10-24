#include "main.h"

/**
 * _strlen - check string length
 * @s: char pointer
 * Description: Prints string length
 * Return: int
 */

int _strlen(char *s)
{
	char *c = s;

	while (*c != '\0')
	{
		c++;
	}
	return (c - s);
}
