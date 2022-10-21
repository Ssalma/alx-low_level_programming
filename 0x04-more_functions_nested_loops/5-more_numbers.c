#include "main.h"

/**
 * more_numbers - more_numbers funtion
 * Description: prints more numbers 0 and 14
 * Return: void
 */

void more_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		int n = 0;

		for (n = 0; n < 15; n++)
		{
			if ((n / 10) > 0)
			{
				_putchar((n /10) + '0');
			}
			_putchar((n % 10) + '0');
		}
		_putchar('\n');
		i++;
	}
}
