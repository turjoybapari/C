#include <stdio.h>
int main()
{
  int n;
  scanf("%d", &n);
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j <= 2 - i; j++)
    {
      printf(" ");
    }
    for (int k = 0; k <= i; k++)
    {
      if (i % 2 == 0)
        printf("1");
      if (i % 2 == 1)
        printf("0");
    }
    printf("\n");
  }

  return 0;
}