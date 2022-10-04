#include "main.h"
#include <stdlib.h>

/**
 * *str_concat - concatenates two strings
 * @s1: string to concatenate
 * @s2: other string to concatenate
 *
 * Return: pointer to the new string created (Success), or NULL (Error)
 */
char *str_concat(char *s1, char *s2)
{
	unsigned long int i = 0, j = 0, len1 = 0, len2 = 0;
	char *s3;

	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;
	s3 = malloc(sizeof(char) * (len1 + len2 + 1));
	if (s3 == NULL)
		 return (NULL);
	if (s1)
	{
		for (i = 0; s1[i] != '\0'; i++)
		{
			s3[i] = s1[i];
		}
	}
	if (s2)
	{
		for (j = 0; s2[j] != '\0'; j++)
		{
			s3[i++] = s2[j];
		}
	}
	s3[i] = '\0';
	return (s3);
}
