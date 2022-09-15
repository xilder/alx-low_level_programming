#include "main.h"

/**
 * print_diagonal - prints numbers from 0 to 9
 * @n: number of underscore
 * Return: returns 0 or 1
 */

void print_diagonal(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar(' ');
	}
	_putchar('\\');
	_putchar('\n');
}
