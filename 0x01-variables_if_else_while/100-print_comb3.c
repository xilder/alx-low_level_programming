#include <stdio.h>
/**
 * main - returns a list of numbers
 * Return: always fals
 */
int main(void)
{
	int a, b;
	
	for (a = 48; a <= 56; a++)
	{
		for (b = 49; a <= 57; b++)
		{
			if (a < b)
			{
				putchar(a);
				putchat(b);
				if (a != 56 && b != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
