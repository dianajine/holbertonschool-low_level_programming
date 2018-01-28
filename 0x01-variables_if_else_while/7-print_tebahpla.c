#include <stdio.h>
/**
 * main - prints alphabet backwards.
 *
 * Return: 0.
 */

int main(void)
{
char z = 'z';
while (z >= 'a')
{
putchar(z);
z--;
}
putchar('\n');
return (0);
}
