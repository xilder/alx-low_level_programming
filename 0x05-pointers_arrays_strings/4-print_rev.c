#include "main.h"
/**
 * print_rev - prints in reverse
 * @s: strinfg to be reversed
 */

void print_rev(char *s)
{
	int i, j, k;

	while (s[i] != '\0')
	{
		i++;
	}
	j = i;

	for (k = j - 1; k >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
