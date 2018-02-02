#include "holberton.h"
/**
 * _islower - searches for a lowercase character.
 *
 * @c: checks if this character is lowercase.
 *
 * Return: 0.
 */

int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
