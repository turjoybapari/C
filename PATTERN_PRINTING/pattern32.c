#include <stdio.h>
int main()
{
  int n;
  scanf("%d", &n);
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j <= i; j++)
    {
      printf(" ");
    }
    for (int k = 0; k < 3 - i; k++)
    {
      if (k % 2 == 0)
        printf("1");
      if (k % 2 == 1)
        printf("0");
    }
    printf("\n");
  }

  return 0;
}