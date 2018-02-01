#include "holberton.h"
/**
 * void_puts - function that prints a string, followed by a new line.
 *
 * Return: 0.
 */

void _puts(char *str)
{
	int a;
	for (a = 0; str[a] != '\0'; a++)
		_putchar(str[a]); 
	_putchar('\n');
}
