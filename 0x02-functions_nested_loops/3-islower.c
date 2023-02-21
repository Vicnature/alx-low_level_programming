#include "main.h"

/**
 * _islower - checks for any lowercase character
 * l: output
 * Return: 1 or 0
 */
int _islower(int l)
{
	if (l >= 'a' && l <= 'z')
		return (1);
	else
		return (0);
}
