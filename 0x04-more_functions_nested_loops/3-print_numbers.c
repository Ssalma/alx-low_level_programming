#include "main.h"

/**
 * print_numbers - print numbers
 * Description: print numbers from 0 to 9
 * Return: int
 */

void print_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
