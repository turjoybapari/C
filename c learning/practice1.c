#include <stdio.h>

int main()
{
  int row, col, n;
  scanf("%d", &n);
  for (int i = 1; i <= n; i++)
  {
    for (int j = i; j <= n; j++)
    {
      printf("*");
    }
    printf("\n");
  }

  return 0;
}