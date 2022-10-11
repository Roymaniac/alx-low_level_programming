#include "main.h"

/**
 * more_numbers - prints ten times the numbers from 0-14.
 */

void more_numbers(void)
{
	int i;
	char ch;

	for (i = 0; i < 10; i++)
	{
		for (ch = 0; ch <= 14; ch++)
		{
			if (ch > 9)
			_putchar((ch / 10) + '0');
			_putchar((ch % 10) + '0');
		}
		_putchar ('\n');
	}
}
