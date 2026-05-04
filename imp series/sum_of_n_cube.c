#include <stdio.h>
#include <math.h>
int main()
{
  // 1^3+2^3+3^3......n^3
  int sum = 0, a, b = 0;
  scanf("%d", &a);
  for (int i = 1; i <= a; i++)
  {
    sum += (i * i * i);
    b += pow(i, 3);
  }
  printf("The sum is %d", sum);
  printf("The sum is %d", b);

  return 0;
}
