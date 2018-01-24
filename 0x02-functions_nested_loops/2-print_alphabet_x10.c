#include "holberton.h"
/*
 * print_alphabet_x10 - prints alphabet ten times
 */

void print_alphabet_x10(void)
{
int x = 0, y;
while(x < 10)
{
y = 'a';
while (y <= 'z')
{
_putchar(y);
y++;
}
_putchar('\n');
x++;
}
}
