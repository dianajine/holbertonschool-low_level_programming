#include "holberton.h"

/**
 * print_alphabet - prints alphabet followed by a new line.
 */
void print_alphabet(void)
{
char a = 'a';
while (a <= 'z')
{
_putchar(a);
a++;
}
_putchar('\n');
}
