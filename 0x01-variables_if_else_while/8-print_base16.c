#include <stdio.h>

/**
 * main - Prints all base 16 numbers in lowercase.
 *
 * Return: 0.
 */
int main(void)
{
	int m;
	char l;

	for (m = 0; m < 10; m++)
		putchar((m % 10) + '0');

	for (l = 'a'; l <= 'f'; l++)
		putchar(l);

	putchar('\n');

	return (0);
}
