#include "holberton.h"
/**
 * _strlen - a function that returns the length of a string.
 *
 * @s: pointer to a character.
 *
 * Return: 0.
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}
