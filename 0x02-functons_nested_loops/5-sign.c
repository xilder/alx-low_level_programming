#include "main.h"
/**
 * main - check the code
 * @n: the integer to test for
 * Return: always false
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n == 0)
	{
		_putchar('0');
		return (0);
	} else
		_putchar('-');
		return (-1);
	}
}
