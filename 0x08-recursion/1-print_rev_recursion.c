#include "main.h"

/**
 * _print_rev_recursion - print a string s in reverse
 * @s: string
 * Description: receives a string s and prints it in reverse
 * using recursion
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;

	_print_rev_recursion(s + 1);
	_putchar(*s);
}
