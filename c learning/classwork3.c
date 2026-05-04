#include <stdio.h>
int main()
{
  float sum;
  int n;
  sum = 0;
  scanf("%d", &n);
  for (int i = 1; i <= n; ++i)
  {
    sum = sum + (1 / (float)i);
  }
  printf("%f", sum);

  return 0;
}