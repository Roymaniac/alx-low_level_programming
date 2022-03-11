#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10 starting from 0,
 * followed b a new line, using putchar
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 30; n < 40; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
