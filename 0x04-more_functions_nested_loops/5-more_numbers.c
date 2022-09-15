#include "main.h"
#include <stdio.h>

/**
 * more_numbers - prints numbers from 0 to 14
 * Return: returns 0 or 1
 */

void more_numbers(void)
{
	int i, j
		;
	for (j = 0; j <= 9; j++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i >= 10)
			{
				_putchar('1');
			}
			_putchar((i % 10) + 48);
		}
		_putchar('\n');
	}
}
