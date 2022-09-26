#insert "main.h"

/**
 * _memset - copies a certain value into array space for
 * n number of bytes
 * @s: array to be copied into
 * @b: value to be copied
 * @n: number of bytes
 * Return: returns s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
