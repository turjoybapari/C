#include <stdio.h>
int factorial_using_rec(int fac)
{
  if (fac == 0 || fac == 1)
  {
    return 1;
  }
  else
  {
    return fac * factorial_using_rec(fac - 1);
  }
}
int main()
{
  int a, b;
  printf("Enter your number ");
  scanf("%d", &a);
  b = factorial_using_rec(a);
  printf("your factorial of %d is %d", a, b);
  return 0;
}