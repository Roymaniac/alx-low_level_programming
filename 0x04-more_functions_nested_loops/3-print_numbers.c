#include "main.h"
#include <stdio.h>

/**
 * print_numbers - prints numbers from 0-9
 * Return: no return
 */

void print_numbers(void)
{
	char ch;

	for (ch = '0'; ch <= '9'; ch++)
	_putchar(ch);
	_putchar('\n');
}
