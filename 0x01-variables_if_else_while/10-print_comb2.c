#include <stdio.h>
int main(void)
{
int left, right;
for (left = '0'; left <= '9'; left++)
for (right = '0'; right <= '9'; right++)
{
putchar(left);
putchar(right);
if (left != '9' || right != '9')
putchar(',');
putchar(' ');
}
{
putchar('\n');
}
return (0);
}
