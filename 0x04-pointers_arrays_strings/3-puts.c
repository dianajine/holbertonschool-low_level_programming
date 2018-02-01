#include "holberton.h"
/**
 * _puts - function that prints a string, followed by a new line.
 *
 * @str: contains a string of characters to be printed.
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
