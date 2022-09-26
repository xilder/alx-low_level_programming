#include <stdio.h>

/**
 * _strpbrk - locates a char from a string
 * @s: string to be searched
 * @accept: string searched
 * Return: return address for result
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; accept[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (s[j] == accept[i])
			{
				return (s + i - 1);
			}
		}
	}
	return ('\0');
}
