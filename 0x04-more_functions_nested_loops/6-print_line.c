#include "main.h"

/**
 * print_line - draws straight line in the terminal.
 * @n: integer amount of '_' to be printed
 */

void print_line(int n)
{
	char ch;

	for (ch = 0; ch < n; ch++)
		_putchar('_');
	_putchar('\n');
}
