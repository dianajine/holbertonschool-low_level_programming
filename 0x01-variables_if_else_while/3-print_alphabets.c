#include <stdio.h>
/**
 * main - prints the alphabet in lowercase, except q and e.
 *
 * Return: 0.
 */

int main(void)
{
char a = 'a', A = 'A';
while (a <= 'z')
{
putchar(a);
a++;
}
while (A <= 'Z')
{
putchar(A);
A++;
}
putchar('\n');
return (0);
}
