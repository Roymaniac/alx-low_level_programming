#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print the last digit of the random
 * number stored in the variable n
 * Return: Alway 0 (Success)
 */
int main(void)
{
	int n;

	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d is %d ", n, n % 10);
	if (n % 10 > 5)
		printf("and is greater than 5\n");
	else if (n % 10 == 0)
		printf("and is 0\n");
	else if (n % 10 > 6 && n % 10 != 0)
		printf("and is less than 6 and not 0\n");
	return (0);
}
