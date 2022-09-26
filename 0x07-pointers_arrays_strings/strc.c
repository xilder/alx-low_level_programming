#include "main.h"

/**
 * *_strchr - locates a character in a string
 * @s: string to search
 * @c: char to find
 *
 * Return: a pointer to the first occurrence of the character
 * c in the string s, or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
		int a;

		while (1)
		{
			a = *s++;
			if (a == c)
			{
				return (s - 1);
			}
			if (a == 0)
			{
				return ('\0');
			}
		}
}
#include <stdio.h>

/**
 *  * main - check the code
 *   *
 *    * Return: Always 0.
 *     */
int main(void)
{
	    char *s = "hello";
	        char *f;

		    f = _strchr(s, 'l');

		        if (f != NULL)
				    {
					            printf("%s\n", f);
						        }
			    return (0);
}
