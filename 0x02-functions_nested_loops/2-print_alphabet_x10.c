#include "main.h"

/**
 * prints all alphabets 10 times in a nested loop
 */

void print_alphabet_x10(void)
{
	char i, j;
	for (j = 0; j < 10; j++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
