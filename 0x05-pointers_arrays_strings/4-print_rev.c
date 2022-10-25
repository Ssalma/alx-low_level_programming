#include "main.h"

/**
 * print_rev - func reverese string
 * @s: string to reverse
 * Return: int
 */

void print_rev(char *s)
{
	int i, len, temp;
	len = strlen(s);

	for (i = 0; i < (len/2); i++)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;

		_putchar(*s);
	}
	_putchar('\n');
}
