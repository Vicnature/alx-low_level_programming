#include <stdio.h>

/**
 * main - Prints all numbers starting from 00 to 99
 *
 * Return: 0.
 */
int main(void)
{
	int dig1, dig2;

	for (dig1 = 0; dig1 < 10; dig1++)
	{
		for (dig2 = 0; dig2 < 10; dig2++)
		{
			putchar((dig1 % 10) + '0');
			putchar((dig2 % 10) + '0');

			if (dig1 == 9 && dig2 == 9)
				continue;
			
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
