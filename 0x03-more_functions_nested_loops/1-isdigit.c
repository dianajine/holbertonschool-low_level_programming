#include "holberton.h"
/**
 * _isdigit - returns 1 if c is a digit.
 *
 * @c: checks this character.
 *
 * Return: 0 or 1.
 */

int _isdigit(int c)
{
      	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else if (c >= 'a' && c <= 'z')
	{
		return (0);
	}
	else
		return (0);
}
