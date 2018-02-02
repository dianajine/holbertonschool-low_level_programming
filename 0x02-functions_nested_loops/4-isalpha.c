#include "holberton.h"
/**
 * _isalpha - checks for an alphabetic character.
 *
 * @c: checks if this character is lowercase or uppercase.
 *
 * Return: 0.
 */
int _isalpha(int c)
{
if ((c != '0') && (c != '9'))
return (1);
else
return (0);
}
