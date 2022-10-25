#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - func reverese string
 * @s: string to reverse
 * Return: int
 */

void print_rev(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;

	for (i--; i >= 0; i--)
		putchar(s[i]);

	putchar('\n');
}
