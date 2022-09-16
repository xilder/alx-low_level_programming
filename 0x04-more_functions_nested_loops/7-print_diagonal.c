#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - prints numbers from 0 to 9
 * @n: number of underscore
 * Return: returns 0 or 1
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		int i, j;

		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{

				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
