#include "main.h"

/**
 * print_diagonal - prints numbers from 0 to 9
 * @n: number of underscore
 * Return: returns 0 or 1
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				if (j == 1)
				{
					_putchar('\\');
				}
				else if (j < i)
				{
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}
}
