#include "main.h"

/**
 * _isalpha - function is alpha
 * Description: func that checks letter, lowercase or uppercase
 * @c: character to be checked
 * Return: an int
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	return (0);
}
