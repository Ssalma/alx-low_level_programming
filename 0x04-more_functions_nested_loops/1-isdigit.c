#include "main.h"

/**
 * _isdigit - _isdigit function
 * @c: character to be checked
 * Description: func that checks for digit 0 to 9
 * Return: int
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
