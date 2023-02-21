#include "main.h"
/**
 * print_last - a function that prints the last digit of a number
 * n: number's last digit result
 * Return:  last number
 */
int print_last(int n)
{
	int p;

	p = (n % 10);

	if (p < 0)
	{
		p = (-1 * p);
	}

	_putchar(p + '0');
	return (p);
}
