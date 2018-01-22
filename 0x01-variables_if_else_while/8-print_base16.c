#include <stdio.h>

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
