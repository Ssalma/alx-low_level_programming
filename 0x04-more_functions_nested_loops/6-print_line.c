#include "main.h"

/**
 * print_line - func that prints line
 * Description: function that prints n number of lines
 * @n: int n
 * Return: void
 */

void print_line(int n)
{
	int c;

	c = 0;
	if (n <= c)
	{
		_putchar('\n');
		return;
	}

	while (c < n)
	{
		_putchar('_');
		c++;
	}
	_putchar('\n');
}
