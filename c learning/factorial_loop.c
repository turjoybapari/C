#include <stdio.h>
int factorial_using_loop(int num)
{
  int a = 1;
  for (int i = 2; i <= num; i++)
  {
    a *= i;
  }
  return a;
}
int main()
{
  int b, c;
  printf("Enter your number ");
  scanf("%d", &b);
  c = factorial_using_loop(b);
  printf("your factorial of %d is %d ", b, c);
  return 0;
}