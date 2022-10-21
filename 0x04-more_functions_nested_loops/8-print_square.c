#include "main.h"

/**
 * print_square - print_square
 * @size: size of square
 * Description: prints a square of number
 * Return: void
 */

void print_square(int size)
{
	int r = 0;

	if (size <= 0)
	{
		_putchar('\n');
	}

	while (r < size)
	{
		int col = 0;

		while (col < size)
		{
			_putchar('#');
			col++;
		}
		_putchar('\n');
		r++;
	}
}
