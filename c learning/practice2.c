#include <stdio.h>
#include <string.h>
int main()
{
  int n = 5, j;
  // scanf("%d", &n);
  for (int i = 1; i <= 5; i++)
  {
    for (int k = 1; k <= n - i; k++)
    {
      printf(" ");
    }

    for (int j = 1; j <= 2 * i - 1; j++)
    {
      printf("*");
    }
    printf("\n");
  }
  for (int i = 6; i <= 9; i++)
  {
    for (int k = 1; k <= i - 5; k++)
    {
      printf(" ");
    }
    for (int j = 1; j <= 9; j++)
    {
      printf("*");
    }
    printf("\n");
  }

  return 0;
}