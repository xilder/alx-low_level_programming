#include "main.h"
/**
 * main - prints _putchar then a new line
 * Return: always false
 */
void print_alphabet_x10(void)
{
	char letter;
	int i;
	for (i = 0; i < 10; i++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
	}
}