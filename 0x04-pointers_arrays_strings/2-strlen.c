#include "holberton.h"
/**
 * strlen - a function that returns the length of a string
 *
 * Return: 0
 */
int _strlen(char *s)
{
	int i = 0;
	while (s[i] != '\0')
		i++;
	return(i);
}
