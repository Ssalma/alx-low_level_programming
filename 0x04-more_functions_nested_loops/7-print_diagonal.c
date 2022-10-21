#include "main.h"

/**
 * print_diagonal - func that prints a diagonal line
 * @n: number of times \ should be printed
 * Description: func that prints a diagonal
 * Return: void
 */

void print_diagonal(int n)
{
	int i = 0;

	if (n <= i)
	{
		_putchar('\n');
		return;
	}

	while(n > i)
	{
		int c;
		for (c = 0; c < i; c++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
		i++;
	}
}
