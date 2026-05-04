#include <stdio.h>
#include <math.h>
int main()
{
  // 1^2+2^2+3^3....
  int a, sum = 0;
  scanf("%d", &a);
  for (int i = 1; i <= a; i++)
  {
    sum += (i * i);
  }
  printf("The sum is %d", sum);
}