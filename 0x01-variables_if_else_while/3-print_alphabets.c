#include <stdio.h>
/**
 * main - out puts every letter of the alphabet
 *Return: always 0
 */
int main(void)
{
	int a;

	int b;

	for (a = 'a'; a <= 'z'; a++)
	{
		putchar(a);
	}


	for (b = 'A'; b <= 'Z'; b++)
	{
		putchar(b);
	}
	putchar('\n');
	return (0);
}
