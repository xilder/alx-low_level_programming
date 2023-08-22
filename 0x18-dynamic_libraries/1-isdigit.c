#include "main.h"

/**
 * _isdigit - checks if the character is uppercase or not
 * @c:  the number checked
 * Return: returns 0 or 1
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
