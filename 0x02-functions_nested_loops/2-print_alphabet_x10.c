#include "main.h"

/**
 * print_alphabet_x10 - prints all alphabets 10 times in a nested loop
 * Description: Prints all alphabets ten times
 */

void print_alphabet_x10(void)
{
	char i, b;

	for (b = 0; b < 10; b++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
