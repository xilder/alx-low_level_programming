#include "main.h"

/**
 * _strchr - searches for the first occurence of a char
 * @s: string to be searched
 * @c: char to be found
 * Return: a pointer to the first occurence of c
 */

char *_strchr(char*s, char c)
{
	unsigned int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return s[i];
	}
	return (NULL);
}
