#include <stdio.h>
/**
 * main - prints alhabet in lowercase, then uppercase.
 *
 * Return: 0.
 */
int main(void)
{
char a = 'a';
while (a <= 'z')
{
if ((a != 'q') && (a != 'e'))
{
putchar(a);
}
a++;
}
putchar('\n');
return (0);
}
