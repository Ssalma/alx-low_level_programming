#include "main.h"

/**
 * print alphabet in lowercase from a to z with _putchar
 */

void print_alphabet(void)
{
	char i;

	for(i = 'a'; i<= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
