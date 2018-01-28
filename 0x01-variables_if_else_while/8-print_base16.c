#include <stdio.h>
/**
 * main - prints all the numbers of base 16 in lower case.
 *
 * Return: 0.
 */

int main(void)
{
int n = '0';
char a = 'a';
while (n <= '9')
{
putchar(n);
n++;
}
while (a <= 'f')
{
putchar(a);
a++;
}
putchar('\n');
return (0);
}
