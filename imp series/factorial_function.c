#include <stdio.h>
int fac(int a)
{
  if (a == 0 || a == 1)
    return 1;
  else
    return a * fac(a - 1);
}
int main()
{
  int c;
  printf(" enter your number ");
  scanf("%d", &c);
  int d = fac(c);
  printf(" Your factorial is %d", d);
  return 0;
}