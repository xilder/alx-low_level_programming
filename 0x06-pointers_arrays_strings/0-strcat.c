include "main.h"

/**
 * _strcat - to concatenate strings
 * @dest: string to be added to
 * @src: string added
 * Return: returns conatenated word
 */

char *_strcat(char *dest, char *src)
{
	int i, n;
	char new_word[];

	while (dest[n] != '\0')
	{
		n++;
	}
	new_word = dest;
	for (i = 0; src[i] != '\0'; i++)
	{
		new_word[n++] = src[i];
	}
	return (new_word);
}
