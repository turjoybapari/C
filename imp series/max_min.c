#include <stdio.h>
int main()
{
  int a[101] = {1, 2, 3, 10000, 500, 7, 6, 0}, max;
  // printf("Enter your number ");
  // scanf("%d", &n);
  max = a[0];
  for (int i = 1; i <= 8; i++)
  {
    if (a[i] > max)
    {
      max = a[i];
      // break;
    }
  }
  printf("%d", max);

  return 0;
}