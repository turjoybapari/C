#include <stdio.h>
int add(int a, int b)
{
  int x = a + b;
  return x;
  printf("%d", x);
}

int main()
{
  int a;
  a = add(4, 5);
  printf("%d", a);
  return 0;
}