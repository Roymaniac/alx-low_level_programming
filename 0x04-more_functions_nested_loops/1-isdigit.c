#include "main.h"

/**
 * _isdigit - checksif input is a digit
 * @c: character to be checked
 * Return: 0 or 1 according to previous check
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	return (1);
	return (0);
}
