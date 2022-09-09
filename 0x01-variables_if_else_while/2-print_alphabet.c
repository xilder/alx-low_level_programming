#include <stdio.h>
/**
 * main - prints the alphabets
 * Return: always 0
 */

int main(void)
{	
	char a;
	for (a = 'a'; a <= 'z'; a++)
	{
		putchar(a);
	}
	putchar("\n");
	return (0);
}
