#include "main.h"

/**
 * swap_int - func that swaps two int
 * @a: first pointer int
 * @b: second pointer int
 * Return: int
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
