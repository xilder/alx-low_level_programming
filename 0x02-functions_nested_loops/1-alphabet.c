#include "main.h"
/**
 * main - prints _putchar then a new line
 * Return: always false
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
}

