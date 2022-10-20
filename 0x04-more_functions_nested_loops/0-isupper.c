#include "main.h"

/**
 * _isupper - _isupper function
 * Description: function that checks for uppercase
 * @c: character to be checked
 * Return: int
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
