#include <stdio.h>
int main()
{
  int a, sum = 1;
  printf("Enter your number");
  scanf("%d", &a);
  for (int i = 1; i <= a; i++)
  {
    sum = sum * i;
  }
  printf("%d", sum);
  return 0;
}