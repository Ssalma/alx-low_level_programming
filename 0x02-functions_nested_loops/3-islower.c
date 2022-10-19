#include "main.h"

/**
 * _islower: func to chech if character is lower
 * @c: character to check
 * Description: return 1 if char is lower else 0
 */

int _islower(char c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}

	return (0);
}
	
