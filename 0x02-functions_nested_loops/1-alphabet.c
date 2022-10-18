#include "main.h"

/**
 * print_alphabet - Print lowercase alphabets with _putchar
 * from a to z
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
