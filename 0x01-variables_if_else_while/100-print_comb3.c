#include <stdio.h>

/**
 * main - Prints numbers starting from 00 to 99
 *
 * Return: 0
 */
int main(void)
{
	int dig, dig;

	for (dig = 0; dig < 10; dig++)
	{
		for (dig = 0; dig< 10; dig++)
		{
			putchar((dig % 10) + '0');
			putchar((dig % 10) + '0');

			if (dig == 9 && dig == 9)
				continue;
			
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
