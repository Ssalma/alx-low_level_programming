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
	int i, len, temp;
	len = strlen(s);

	if (len == 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < (len/2); i++)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;

		_putchar(*s);
	}
	_putchar('\n');
}
