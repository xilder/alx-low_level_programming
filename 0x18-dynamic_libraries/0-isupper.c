#include "main.h"

/**
 * _isupper - checks if the character is uppercase or not
 * @c:  the alphabet checked
 * Return: returns 0 or 1
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
