#include "main.h"

/**
 * _islower - is lower func
 * @c: character to be checked
 * Description: return 1 if char is lower else 0
 * Return: int if character is lower
 */

int _islower(char c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}

	return (0);
}
