#include <stdio.h>

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
