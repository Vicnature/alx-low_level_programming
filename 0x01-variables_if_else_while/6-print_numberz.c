#include <stdio.h>

/**
 * main - Prints all the single digit numbers of base 10 from 0 
 *
 * Return: 0
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
		putchar((n % 10) + '0');

	putchar('\n');

	return (0);
}
