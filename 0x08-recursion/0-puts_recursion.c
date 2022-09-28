#include "main.h"

/**
 * _puts_recursion - prints every letter in a string
 * @s: string to be printed
 */

void _puts_recursion(char *s)
{
	if (s[i] == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
