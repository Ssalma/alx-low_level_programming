#include "main.h"

/**
 * print_sign - func that prints sign of a number
 * Return: 0 if 0, 1 if '+', -1 if '-'
 * @n: is the number to be checked
 * Description: func that checks the sign of number
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
