#include "main.h"

/**
 * _puts- puts func
 *@str: string to print to standard output
 *Description: prints string to standard output
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
